#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_debugRadioMenu
	Submenu for spawning radios
	Author: BSuz
======================================*/
private _player = player;
private _isAdmin = _player getVariable [QGVARMAIN(isAdmin), false];
private _isOfficer = _player getVariable [QGVARMAIN(isOfficer), false];
private _isJuniorOfficer = _player getVariable [QGVARMAIN(isJuniorOfficer), false];

_subTitles = ["sub","Debug Radios","popup","",false];
_subMenuOptions = [];
_spawn343 = ["Spawn AN/PRC 343",{"343" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc343\data\static\prc343_icon.paa","",[],-1,true,true];
_spawn152 = ["Spawn AN/PRC 152",{"152" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc152\data\prc152c_ico.paa","",[],-1,true,true];
_spawn117 = ["Spawn AN/PRC 117F",{"117" call FUNC(spawnRadio)},"\idi\acre\addons\sys_prc117f\data\prc117f_ico.paa","",[],-1,true,true];

_subMenuOptions pushback _spawn343;
_subMenuOptions pushback _spawn152;
_subMenuOptions pushback _spawn117;

//Sort and return menu
//_subMenuOptions sort true;
_subMenu = [_subTitles, _subMenuOptions];
_subMenu