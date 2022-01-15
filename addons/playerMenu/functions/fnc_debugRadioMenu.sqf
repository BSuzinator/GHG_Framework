#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_debugRadioMenu
	Submenu for spawning radios
	Author: BSuz
======================================*/
private _subTitles = ["sub","Debug Radios","popup","",false];
private _subMenuOptions = [
    ["Spawn AN/PRC-343",{"343" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc343\data\static\prc343_icon.paa","",[],-1,true,true],
    ["Spawn AN/PRC-152",{"152" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc152\data\prc152c_ico.paa","",[],-1,true,true],
    ["Spawn AN/PRC-117F",{"117" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc117f\data\prc117f_ico.paa","",[],-1,true,true],
    ["Spawn AN/PRC-77",{"77" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc77\data\prc77_icon.paa","",[],-1,true,true]
];

[_subTitles, _subMenuOptions]