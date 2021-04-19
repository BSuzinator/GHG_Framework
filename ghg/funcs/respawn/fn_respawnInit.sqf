/*======================================
	ghg_fnc_respawnInit
	Called on mission start, sets up respawn parameters
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

ZEUS_WAVE_RESPAWN_OPTOUT = true;

call compile (profileNamespace getVariable ["ghg_local_function", ""]);

[
	"Players",
	"Respawn Wave",
	{ _this remoteExecCall ["ghg_fnc_respawnTrigger"]; }
] call zen_custom_modules_fnc_register;

if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then {
setPlayerRespawnTime 30;
} 
else {
setPlayerRespawnTime 5000;
};

[ "ace_spectator_displayLoaded", ghg_fnc_respawnOptout ] call CBA_fnc_addEventHandler;
player addEventHandler [ "Respawn", ghg_fnc_respawnHandler ];