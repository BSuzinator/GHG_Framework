#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelCommandCondition
    Returns if layer can issue rappel commands
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _vehicle = _target;

private _driver = fullCrew [_vehicle, "driver"];
private _commander = fullCrew [_vehicle, "commander"];
private _gunner = fullCrew [_vehicle, "gunner"];
private _turret = fullCrew [_vehicle, "turret"];

(_player in [_driver,_commander,_gunner,_turret])