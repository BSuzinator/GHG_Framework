params ["_unit", "_corpse"];

//Respawn all units as rifleman
[player, "soldier_f"] call ghg_fnc_gearUp;
//Sets respawn time
setPlayerRespawnTime 5000;