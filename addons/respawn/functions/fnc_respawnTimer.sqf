#include "script_component.hpp"
/*======================================
	Called on server when a unit is killed or a player has opted in/out
	Author: Quantx
======================================*/
if ! (isServer) exitWith {};
if ( getNumber( missionConfigFile >> "CfgGHG" >> "disableRespawn" ) != 0 ) exitWith {};

//Permanent Respawn Disable
if ( getNumber( missionConfigFile >> "CfgGHG" >> "isEvent" ) != 1 ) exitWith {};


params ["_unit", "_optout"];

// Ignore non-players
if ! ( isPlayer _unit ) exitWith {};
// Ignore zeus
private _unitSide = _unit getVariable [QGVARMAIN(unitSide), sideLogic];
if ( _unitSide == sideLogic ) exitWith {};

// Track if this player has opted out at any point
if ( _optout ) then
{
    _unit setVariable [QGVAR(has_opted_out), true];
};

_unit setVariable [QGVAR(optout), _optout];

private _sideId = _unitSide call BIS_fnc_sideID; 

// All dead players on the side of the player who has died
private _deadpool = allPlayers select {(! alive _x) && {(_x getVariable [QGVARMAIN(unitSide), sideLogic]) isEqualTo _unitSide}};

// Safer to count dead each time
private _deadcount = count (_deadpool select {!(_x getVariable [QGVAR(has_opted_out), false])});

private _resptime = (MAX_WAIT_TIME - (TIME_PER_PLAYER * _deadcount)) * 60;

GVAR(respawn_timers) set [ _sideId, time + _resptime ];

["setPlayerRespawnTime", [_resptime], _deadpool] call CBA_fnc_targetEvent;