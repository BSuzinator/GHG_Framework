#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonUnlock
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _static = _target;

if !(typeOf _static isEqualTo "rhs_pontoon_static") exitWith {};

_staticPosASL = getPosASL _static;
_staticDir = getDir _static;
deleteVehicle _static;
private _float = createVehicle ["rhs_pontoon_float", [0,0,1], [], 0, "CAN_COLLIDE"];
["addZeusObject", _float] call CBA_fnc_serverEvent;
_float allowDamage false;
_float setDir _staticDir;
_float setPosASL _staticPosASL;
_float allowDamage true;
//Set Floaty section to player's locality
_float setOwner (owner _player);