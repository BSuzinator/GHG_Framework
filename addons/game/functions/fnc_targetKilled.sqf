#include "script_component.hpp"
/*======================================
	ghg_game_fnc_targetKilled
	Check to see if your target has been killed
	Author: BSuz
======================================*/
private _targetAlive = alive GVAR(target);

if (_targetAlive) exitWith {};

[true] call FUNC(getTarget);
player setDamage 0;
GVAR(poisonDamage) = 0.02;