#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonSpawnCondition
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _resupplyDistance = 30;
if (_target isKindOf "Ship") then {_resupplyDistance = 50;};

private _okay = false;
{
	private _rsupObj = nearestObject [_target, _x];
	if ( !isNull _rsupObj && { (_target distance _rsupObj) < _resupplyDistance } ) exitwith {
		_okay = true;
	};
} forEach ["Land_Ammostore2", "Land_Cargo20_military_green_F", "Land_Cargo20_sand_F","ghg_servicePoint"];

_okay // return