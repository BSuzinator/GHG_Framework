#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonLock
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _float = _target;
if !(typeOf _float isEqualTo "rhs_pontoon_float") exitWith {};

__floatPosASL = getPosASL _float;
_floatDir = getDir _float;
deleteVehicle _float;
private _static = createVehicle ["rhs_pontoon_static", [0,0,1], [], 0, "CAN_COLLIDE"];
["addZeusObject", _static] call CBA_fnc_serverEvent;
_static setDir _floatDir;
_static setPosASL __floatPosASL;

[_static,"rhs_pontoon_static_base"] call FUNC(pontoonSnap);