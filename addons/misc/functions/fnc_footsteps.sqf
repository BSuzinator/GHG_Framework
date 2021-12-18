#include "script_component.hpp"
/*======================================
	Adds permanent footsteps
	Author: QuantX
======================================*/
if ! (hasInterface) exitWith {};

GVARMAIN(footstep_timeout) = 180;

private _ghg = missionConfigFile >> "CfgGHG";

if ( isNumber (_ghg >> "footstep_timeout") ) then
{
    GVARMAIN(footstep_timeout) = 10 max (getNumber (_ghg >> "footstep_timeout"));
};

GVAR(footsteps) = [];
GVAR(tracked_players) = [];

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
        
        if ( (_st == "STAND" || _st == "CROUCH") && ((getPos _unit) select 2) < 0.01 && (vehicle _unit == _unit) && (_pos distance _lpos) > 0.7 && {!surfaceIsWater _pos} ) then
        {
            private _fsm = ["Footprint_L", "Footprint_R"] select _rf;
            private _fsp = _unit modelToWorldVisual (_unit selectionPosition [["footstepl", "footstepr"] select _rf, "Memory"]);
            _fsp set [2, _pos select 2]; // Force on ground

            private _fso = createSimpleObject [_fsm, ATLToASL _fsp, true];
            
            _fso setDir (getDir _unit);
            
            _fso setVectorUp surfaceNormal _pos;
            
            GVAR(footsteps) pushBack [ _unit, _fso, diag_tickTime ];
            
            _x set [1, _pos];
            _x set [2, !_rf];
        };
    } forEach GVAR(tracked_players);
    
    private _ips = player infoPanelComponents "left";
    private _hasTrapKit = false;
    {
        _x params [ "_class", "_type", "_has" ];
        
        if ( _class == "MineDetectorDisplay" ) exitWith {  _hasTrapKit = _has; };
    } forEach _ips;

    
    {
        _x params ["_unit", "_fso", "_age"];
        
        if ( !isNull _fso ) then
        {
            private _mat = ["x\ghg\addons\misc\models\footprint\footprint.rvmat", "x\ghg\addons\misc\models\footprint\footprint_highlight.rvmat"] select (_hasTrapKit && { (player distance _fso) < 5 });
        
            _fso setObjectMaterial  [0, _mat];
        
            if ( diag_tickTime - _age > GVARMAIN(footstep_timeout) ) then
            {
                deleteVehicle _fso;
            };
        };
    } forEach GVAR(footsteps);
    
}, 0.1, []] call CBA_fnc_addPerFrameHandler;