#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnInit
	Called on mission start, sets up respawn parameters
	Author: Quantx
======================================*/
if ( isServer && !GVARMAIN(is_training) ) then
{
    GVAR(respawn_timers) = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    //GVAR(optout_list) = createHashMap;

    addMissionEventHandler [ "EntityKilled", {
        params ["_unit", "_killer", "_instigator", "_useEffects"];
        
        _unit setVariable [QGVAR(has_opted_out), false];
        
        [_unit, false] call FUNC(respawnTimer);
    }];
    addMissionEventHandler [ "EntityRespawned", FUNC(respawnGearUp) ];
};

if ! (hasInterface) exitWith {};

player setVariable [QGVARMAIN(unitSide), playerSide, true];

if (playerSide == sideLogic) exitWith {};

GVAR(optout) = false;
GVAR(optout_time) = 0;
GVAR(optout_timer_eh) = -1;

[ "setPlayerRespawnTime", {
    params ["_delay"];
    _delay = _delay max 0;
    GVAR(optout_time) = time + _delay;
    if ! (GVAR(optout)) then { setPlayerRespawnTime _delay };
}] call CBA_fnc_addEventHandler;

[
	"Ghost Hawk Gaming",
	"Respawn Wave",
	{ ["setPlayerRespawnTime", [5]] call CBA_fnc_globalEvent; }
] call zen_custom_modules_fnc_register;

if (GVARMAIN(is_training)) then
{
	["setPlayerRespawnTime", [10]] call CBA_fnc_localEvent;
}
else
{
    ["setPlayerRespawnTime", [DUMMY_WAIT_TIME]] call CBA_fnc_localEvent;
};

[ "ace_spectator_displayLoaded", FUNC(respawnOptout) ] call CBA_fnc_addEventHandler;
player addEventHandler [ "Respawn", FUNC(respawnHandler) ];