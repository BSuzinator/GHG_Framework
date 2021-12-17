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
            private _fsm = format ["a3\characters_f\footstep_%1.p3d", ['l', 'r'] select _rf];
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
    
    {
        _x params ["_unit", "_fso", "_age"];
        
        if ( !isNUll _fso && {diag_tickTime - _age > GVARMAIN(footstep_timeout)} ) then
        {
            deleteVehicle _fso;
        };
        
    } forEach GVAR(footsteps);
    
}, 0.1, []] call CBA_fnc_addPerFrameHandler;