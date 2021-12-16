#include "script_component.hpp"
/*======================================
	Adds permanent footsteps
	Author: QuantX
======================================*/
params [
    ["_unit", player, [objNull]]
];

if ( isNil QGVAR(tracked_players) ) then { GVAR(tracked_players) = [] };

// Ensure unique
private _uq = true;
{
    if ( _unit isEqualTo (_x select 0) ) exitWith { _uq = false };
} forEach GVAR(tracked_players);
if ! (_uq) exitWith {};

GVAR(tracked_players) pushBack [ _unit, getPosATL _unit, true ];

nil;