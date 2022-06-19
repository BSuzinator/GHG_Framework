#include "script_component.hpp"
/*======================================
	ghg_acre_fnc_canUseJukebox
	Returns true if the unit can use the jukebox
	Author: Quantx
======================================*/

params ["_target", "_player", "_params"];

alive _player && { missionnamespace getvariable ['vn_jukebox_enable', true] && { !(isNull (findDisplay 46)) && { [_player, "ACRE_PRC77"] call acre_api_fnc_hasKindOfRadio } } };