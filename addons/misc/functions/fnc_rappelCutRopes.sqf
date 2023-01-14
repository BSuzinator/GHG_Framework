#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelCutRopes
    Displays sequence of messages for units to rappel in order
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _vehicle = _target;
if !(_vehicle isKindOf "Helicopter") exitWith {};
{
	private _unit = _x;
	_unit setVariable ["AR_Detach_Rope",true, true];
	if (_unit distance _vehicle < 5) then {_unit moveInCargo _vehicle;};
} forEach (nearestObjects [_vehicle, ["Man"], 5, true]);

hintSilent "Ropes Cut!";