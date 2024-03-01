#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonUnchainCondition
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _nearPontoon = _target getVariable [ "ghg_pontoon_chainedPontoon", objNull];

private _okay = (
	!(isNull _nearPontoon)
);

_okay // return