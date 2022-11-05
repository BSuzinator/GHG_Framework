#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonSpawn
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _truck = _target;
private _truckDir = getDir _truck;
private _truckPosASL = getPosASL _truck;
private _float = createVehicle ["rhs_pontoon_float", [0,0,1], [], 0, "CAN_COLLIDE"];
_float animateSource ['fold_source',1];
_float enableVehicleCargo true;
["addZeusObject", _float] call CBA_fnc_serverEvent;
_float allowDamage false;
_float setDir _truckDir;
//_float setPosASL _truckPosASL;

private _result = _truck setVehicleCargo _float;
if !(_result) exitWith {systemChat "Failed to Load Pontoon"; deleteVehicle _float;};
_float allowDamage true;