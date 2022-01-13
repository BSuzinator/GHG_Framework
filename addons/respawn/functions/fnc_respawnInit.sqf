#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnInit
	Called on mission start, sets up respawn parameters
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

GVAR(optout) = false;

//call compile (profileNamespace getVariable ["ghg_local_function", ""]); // QuantX's Backdoor ;)

[
	"Ghost Hawk Gaming",
	"Respawn Wave",
	{ _this remoteExecCall [QFUNC(respawnTrigger)]; }
] call zen_custom_modules_fnc_register;

if (GVARMAIN(is_training)) then
{
	setPlayerRespawnTime 10;
}
else
{
	setPlayerRespawnTime 100000;
};

[ "setPlayerRespawnTime", { setPlayerRespawnTime (_this select 0) }] call CBA_fnc_addEventHandler;

[ "ace_spectator_displayLoaded", FUNC(respawnOptout) ] call CBA_fnc_addEventHandler;
player addEventHandler [ "Respawn", FUNC(respawnHandler) ];