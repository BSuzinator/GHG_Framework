#include "script_component.hpp"
/*======================================
	ghg_game_fnc_getTarget
	Gets target from availible players
	Author: BSuz
======================================*/
private _allPlayers = call BIS_fnc_listPlayers;
private _alivePlayers = [];
private _civPlayers = [];
private _copPlayers = [];

{
	private _player = _x;
	if (alive _player) then {
		if (side _player isEqualTo civilian) then {	_civPlayers append _player;	};
		if (side _player isEqualTo west) then {	_copPlayers append _player;	};
	};
} forEach _allPlayers;

private _target = selectRandom _civPlayers;
GVAR(target) = _target;
_target