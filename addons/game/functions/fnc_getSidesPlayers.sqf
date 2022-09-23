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
	switch (getNumber (configfile >> "CfgVehicles" >> (typeOf _player) >> "side")) do {
		case 1: {_bluPlayers pushBack _player;};
		case 0: {_opfPlayers pushBack _player;};
		case 2: {_indPlayers pushBack _player;};
		case 3: {_civPlayers pushBack _player;};
		case 7: {_logicPlayers pushBack _player;};	
	};
} forEach _alivePlayers;
[_alivePlayers,_bluPlayers,_opfPlayers,_indPlayers,_civPlayers,_logicPlayers]