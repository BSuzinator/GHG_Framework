#include "script_component.hpp"
/*======================================
	ghg_game_fnc_getSidesPlayers
	Returns Arrays of all alive players of all sides
	Author: BSuz
======================================*/
private _allPlayers = call BIS_fnc_listPlayers;
private _alivePlayers = [];
private _bluPlayers = [];
private _opfPlayers = [];
private _indPlayers = [];
private _civPlayers = [];
private _logicPlayers = [];

{
	private _player = _x;
	if (alive _player) then {_alivePlayers append _player;};
} forEach _allPlayers;

{
	private _player = _x;
	switch (side _player) do {
		case west: {_bluPlayers append _player;};
		case east: {_opfPlayers append _player;};
		case independent;
		case resistance: {_indPlayers append _player;};
		case civilian: {_civPlayers append _player;};
		case sideLogic: {_logicPlayers append _player;};	
	};
} forEach _alivePlayers;
[_alivePlayers,_bluPlayers,_opfPlayers,_indPlayers,_civPlayers,_logicPlayers]