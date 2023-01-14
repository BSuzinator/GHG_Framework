#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelCommandCondition
    Returns if layer can issue rappel commands
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _vehicle = _target;

private _driverArray = fullCrew [_vehicle, "driver"];
private _commanderArray = fullCrew [_vehicle, "commander"];
private _gunnerArray = fullCrew [_vehicle, "gunner"];
private _turretArray = fullCrew [_vehicle, "turret"];
private _crewList = [];

{
	private _superArray = _x;
	{
		private _unitArray = _x;
		_crewList pushBackUnique (_unitArray select 0);
	} forEach _superArray;
} forEach [_driverArray,_commanderArray,_gunnerArray,_turretArray];

(_player in _crewlist)