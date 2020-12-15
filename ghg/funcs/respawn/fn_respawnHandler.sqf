/*======================================
	ghg_fnc_respawnHandler
	Called on respawn
	Author: Quantx
======================================*/
params ["_unit", "_corpse"];

//Respawn all units as rifleman
[player, "soldier_f"] call ghg_fnc_gearUp;
//Sets respawn time
setPlayerRespawnTime 5000;