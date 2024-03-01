#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonChain
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _nearPontoon = nearestObject [_target, "rhs_pontoon_float"];

private _result = _nearPontoon setOwner (owner _player);

[_nearPontoon, _target] call BIS_fnc_attachToRelative;

_target setVariable [ "ghg_pontoon_chainedPontoon", _nearPontoon, true ];


systemChat "Chained nearest pontoon";