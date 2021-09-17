#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnTrigger
	Called by zeus module, spawns wave of players
	Author: Quantx
======================================*/
if ( !hasInterface || alive player || GVAR(optout) ) exitWith {};

params ["_pos", "_obj"];

// Respawn the players
setPlayerRespawnTime 0;