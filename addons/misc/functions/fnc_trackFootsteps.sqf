#include "script_component.hpp"
/*======================================
	Adds permanent footsteps
	Author: QuantX
======================================*/
params [
    ["_unit", objNull, [objNull]]
];

if ( isNull _unit ) exitWith {};

if ( isNil QGVAR(tracked_units) ) then { GVAR(tracked_units) = [] };

// Ensure unique
private _uq = true;
{
    if ( _unit isEqualTo (_x select 0) ) exitWith { _uq = false };
} forEach GVAR(tracked_units);
if ! (_uq) exitWith {};

GVAR(tracked_units) pushBack [ _unit, getPosATL _unit, true ];

nil;