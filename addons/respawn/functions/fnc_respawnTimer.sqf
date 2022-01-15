#include "script_component.hpp"
/*======================================
	Called on server when a unit is killed
	Author: Quantx
======================================*/
if ! (isServer || GVARMAIN(is_training)) exitWith {};

params ["_unit", "_optout"];

// Ignore non-players
if ! ( isPlayer _unit ) exitWith {};

// Track if this player has opted out at any point
if ( _optout ) then
{
    _unit setVariable [QGVAR(has_opted_out), true];
};

_unit setVariable [QGVAR(optout), _optout];

private _unitSide = side _unit;
private _sideId = _unitSide call BIS_fnc_sideID; 

private _deadpool = allPlayers select {
    (! alive _x) && {
        ((side _x) isEqualTo _unitSide) && {
            _x getVariable [QGVAR(has_opted_out), false]
        }
    }
};

// Safer to count dead each time
private _deadcount = count _deadpool;

private _resptime = (MAX_WAIT_TIME - (TIME_PER_PLAYER * _deadcount)) * 60;

GVAR(respawn_timers) set [ _sideId, time + _resptime ];

["setPlayerRespawnTime", [_resptime], _deadpool] call CBA_fnc_targetEvent;