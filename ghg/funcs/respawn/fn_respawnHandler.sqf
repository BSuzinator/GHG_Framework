/*======================================
	ghg_fnc_respawnHandler
	Called on respawn
	Author: Quantx
======================================*/
params ["_unit", "_corpse"];


//If on training server
if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then {
setPlayerRespawnTime 30;
[player] call ghg_fnc_gearUp;
} 
//Non-training server actions
else {
//Sets respawn time
setPlayerRespawnTime 5000;

//Respawn all units as rifleman
[player, "soldier_f"] call ghg_fnc_gearUp;
};