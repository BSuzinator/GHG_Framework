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
	if (alive _player) then {_alivePlayers pushBack _player;};
} forEach _allPlayers;

{
	private _player = _x;
	switch (side _player) do {
		case west: {_bluPlayers pushBack _player;};
		case east: {_opfPlayers pushBack _player;};
		case independent;
		case resistance: {_indPlayers pushBack _player;};
		case civilian: {_civPlayers pushBack _player;};
		case sideLogic: {_logicPlayers pushBack _player;};	
	};
} forEach _alivePlayers;
[_alivePlayers,_bluPlayers,_opfPlayers,_indPlayers,_civPlayers,_logicPlayers]