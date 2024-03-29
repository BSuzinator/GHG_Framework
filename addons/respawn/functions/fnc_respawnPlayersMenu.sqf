#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnPlayersMenu
	Menu For respawning specific players
	Author: BSuz
======================================*/
params ["_modulePos","_attachedObject"];
private _allPlayers = call BIS_fnc_listPlayers;
private _deadPlayers = [];
{
	private _tempPlayer;
	if (!alive _tempPlayer) then {_deadPlayers pushBackUnique _tempPlayer};
} forEach _allPlayers;

private _deadPlayersNames = [];
{
	private _tempDead = _x;
	_deadPlayersNames pushBack name _tempDead;
} forEach _deadPlayers;


private _respawnSpecificPlayer = {
	params ["_playersToRespawn"];
	["setPlayerRespawnTime", [5], _playersToRespawn] call CBA_fnc_targetEvent;
};

[
	"Respawn Players",
	[
		[
			"LIST",
			"Select Players to Respawn",
			[
				_deadPlayers,
				_deadPlayersNames,
				0,
				(10 min ((count _deadPlayers) + 0.5))
			]
		]
	],
    {},
	{systemChat "Respawn Players Cancelled";},
	[]
] call zen_dialog_fnc_create;