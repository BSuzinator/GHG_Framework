#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnInit
	Called on mission start, sets up respawn parameters
	Author: Quantx
======================================*/
if ( isServer && !GVARMAIN(is_training) ) then
{
    GVAR(respawn_timers) = [0, 0, 0];
    GVAR(optout_list) = createHashMap;

    addMissionEventHandler [ "EntityKilled", {
        params ["_unit", "_killer", "_instigator", "_useEffects"];
        
        _unit setVariable [QGVAR(has_opted_out), false];
        
        [_unit, false] call FUNC(respawnTimer)
    }];
    addMissionEventHandler [ "EntityRespawned", FUNC(respawnGearUp) ];
}:

if ! (hasInterface) exitWith {};

GVAR(optout) = false;
GVAR(optout_time) = 0;

//call compile (profileNamespace getVariable ["ghg_local_function", ""]); // QuantX's Backdoor ;)

[
	"Ghost Hawk Gaming",
	"Respawn Wave",
	{ _this remoteExecCall [QFUNC(respawnTrigger)]; }
] call zen_custom_modules_fnc_register;

if (GVARMAIN(is_training)) then
{
	["setPlayerRespawnTime", [10]] call CBA_fnc_localEvent;
}
else
{
    ["setPlayerRespawnTime", [DUMMY_WAIT_TIME]] call CBA_fnc_localEvent;
};

[ "setPlayerRespawnTime", {
    GVAR(optout_time) = time + (_this select 0);
    if (GVAR(optout)) then { setPlayerRespawnTime (_this select 0); };
}] call CBA_fnc_addEventHandler;

[ "ace_spectator_displayLoaded", FUNC(respawnOptout) ] call CBA_fnc_addEventHandler;
player addEventHandler [ "Respawn", FUNC(respawnHandler) ];