#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonUnchain
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _nearPontoon = _target getVariable [ "ghg_pontoon_chainedPontoon", objNull];

detach _nearPontoon;

_target setVariable [ "ghg_pontoon_chainedPontoon", objNull, true];

private _result = _nearPontoon setOwner (owner _player);

systemChat "Unchained nearest pontoon";