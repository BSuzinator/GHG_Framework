#include "script_component.hpp"
/*======================================
	ghg_game_fnc_canUseAntidote
	Condition to see if antidote can be used
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _allItems = [_player] call CBA_fnc_uniqueUnitItems;

private _itemCheck = ("ghg_game_antidote" in _allItems);

private _result = (_itemCheck);

_result