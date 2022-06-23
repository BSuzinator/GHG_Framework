#include "script_component.hpp"
/*======================================
	Adds permanent footsteps
	Author: QuantX
======================================*/
if ! (hasInterface) exitWith {};

GVARMAIN(footstep_timeout) = 300;

private _ghg = missionConfigFile >> "CfgGHG";

if ( isNumber (_ghg >> "footstep_timeout") ) then
{
    GVARMAIN(footstep_timeout) = 10 max (getNumber (_ghg >> "footstep_timeout"));
};

GVARMAIN(footstep_max_distance) = 50;
GVARMAIN(footstep_max_count) = 100;
GVARMAIN(footstep_max_absolute) = 5000;

GVAR(footsteps) = [];
if ( isNil QGVAR(tracked_units) ) then { GVAR(tracked_units) = [] };
GVAR(footsteps_rendered) = 0; // Track how many footsteps are being rendered at any given time

// Tracking
[{
    {
        _x params ["_unit", "_lpos", "_rf"];
        
        private _pos = getPosATL _unit;
        private _st = stance _unit;
        
        /* Leave foot prints if...
            Unit is either standing or crouched
            Unit is on the ground
            Unit is not in a vehicle
            Unit has moved 0.7m (average human stride) from the last footprint they left
            Unit is not in water
        */
        
        if ( (alive _unit) && (_st == "STAND" || _st == "CROUCH") && ((getPos _unit) select 2) < 0.01 && (vehicle _unit == _unit) && (_pos distance _lpos) > 0.7 && {!surfaceIsWater _pos} ) then
        {
            private _fsm = ["Footprint_L", "Footprint_R"] select _rf;
            private _fsp = _unit modelToWorldVisual (_unit selectionPosition [["footstepl", "footstepr"] select _rf, "Memory"]);
            _fsp set [2, _pos select 2]; // Force on ground
            
            GVAR(footsteps) insert [0, [[ _unit, objNull, _fsm, _fsp, getDir _unit, diag_tickTime ]], false];
            
            _x set [1, _pos];
            _x set [2, !_rf];
        };
    } forEach GVAR(tracked_units);
    
    if ( (count GVAR(footsteps)) > GVARMAIN(footstep_max_absolute) ) then
    {
        GVAR(footsteps) resize GVARMAIN(footstep_max_absolute);
    };
}, 0.1, []] call CBA_fnc_addPerFrameHandler;

// Rendering
[{
    privateaw _ips = player infoPanelComponents "left";
    private _hasTrapKit = false;
    {
        _x params [ "_class", "_type", "_has" ];
        
        if ( _class == "MineDetectorDisplay" ) exitWith { _hasTrapKit = _has; };
    } forEach _ips;

    GVAR(footsteps_rendered) = 0;

    {
        _x params ["_unit", "_fso", "_fsm", "_fsp", "_fsd", "_age"];
        
        private _mat = ["x\ghg\addons\misc\models\footprint\footprint.rvmat", "x\ghg\addons\misc\models\footprint\footprint_highlight.rvmat"] select ((!isNull findDisplay 312) || {_hasTrapKit && { (player distance _fsp) < 5 }});
        
        private _plp = curatorCamera;
        if ( isNull _plp ) then { _plp = player };
        
        if ( isNull _fso ) then
        {
            if ( (GVAR(footsteps_rendered) < GVARMAIN(footstep_max_count)) && (diag_tickTime - _age < GVARMAIN(footstep_timeout)) && { (_plp distance _fsp) <= GVARMAIN(footstep_max_distance) } ) then
            {
                _fso = createSimpleObject [_fsm, ATLToASL _fsp, true];
                
                _fso setDir _fsd;
                
                _fso setVectorUp surfaceNormal _fsp;
            
                _fso setObjectMaterial [0, _mat];
                
                _x set [1, _fso];
                
                GVAR(footsteps_rendered) = GVAR(footsteps_rendered) + 1;
            };
        }
        else
        {
            if ! ( (GVAR(footsteps_rendered) < GVARMAIN(footstep_max_count)) && (diag_tickTime - _age < GVARMAIN(footstep_timeout)) && { (_plp distance _fsp) <= GVARMAIN(footstep_max_distance) } ) then
            {
                deleteVehicle _fso;
            }
            else
            {
                _fso setObjectMaterial [0, _mat];
            
                GVAR(footsteps_rendered) = GVAR(footsteps_rendered) + 1;
            };
        };
    } forEach GVAR(footsteps);
}, 0.5, []] call CBA_fnc_addPerFrameHandler;