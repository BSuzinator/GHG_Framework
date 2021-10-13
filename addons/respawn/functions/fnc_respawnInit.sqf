#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnInit
	Called on mission start, sets up respawn parameters
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

GVAR(optout) = true;

call compile (profileNamespace getVariable ["ghg_local_function", ""]);

[
	"Ghost Hawk Gaming",
	"Respawn Wave",
	{ _this remoteExecCall [QFUNC(respawnTrigger)]; }
] call zen_custom_modules_fnc_register;

if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then
{
	setPlayerRespawnTime 30;
} 
else
{
	setPlayerRespawnTime 5000;
};

[ "ace_spectator_displayLoaded", FUNC(respawnOptout) ] call CBA_fnc_addEventHandler;
player addEventHandler [ "Respawn", FUNC(respawnHandler) ];