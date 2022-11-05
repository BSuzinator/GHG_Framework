#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonTether
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _nearPontoon = nearestObject [_target, "rhs_pontoon_float"];

private _result = _nearPontoon setOwner (owner _player);

if !(_result) exitWith {systemChat "Unable to tether pontoon"};
systemChat "Tethered nearest pontoon";