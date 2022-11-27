#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnHandler
	Called on respawn
	Author: Quantx
======================================*/
params ["_unit", "_corpse"];

if ( GVAR(optout_timer_eh) >= 0 ) then
{
    [GVAR(optout_timer_eh)] call CBA_fnc_removePerFrameHandler;
    GVAR(optout_timer_eh) = -1;
};

// Force respawn timer to disappear (This shouldn't be my problem but it is)
if ! ( isNull (uiNamespace getVariable ["RscRespawnCounter", displayNull]) ) then { titleRsc ["Default", "PLAIN"] };

private _respawnPos = markerPos (switch (side _unit) do {
    case west: {"respawn_west"};
    case east: {"respawn_east"};
    case resistance: {"respawn_guerrila"};
    case civilian: {"respawn_civilian"};
});

//Handle if Training Server or not
if (GVARMAIN(is_training)) then
{
	["setPlayerRespawnTime", [10]] call CBA_fnc_localEvent;
	["gearUp", [_unit]] call CBA_fnc_localEvent;
} else {
    ["setPlayerRespawnTime", [DUMMY_WAIT_TIME]] call CBA_fnc_localEvent;
    ["gearUp", [_unit]] call CBA_fnc_localEvent;
};

//Set Player Scope Select time
_unit setVariable [QGVAR(last_respawn_time), time, true];
_unit setVariable [QGVARMAIN(unitSide), playerSide, true];

[_unit, _respawnPos] call FUNCMAIN(setPosAGLS);