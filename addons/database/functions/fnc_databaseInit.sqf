#include "script_component.hpp"
/*======================================
	Initializes and locks extDB3
	Called on breifing start
	Author: Quantx
======================================*/
if ! ( isServer && ( [] call extDB3_fnc_isLoaded ) ) exitWith {};

private _database = getText( configFile >> "CfgGHG" >> "database" );

// Add data
[9, "ADD_DATABASE", _database] call FUNC(extDB3);
[9, "ADD_DATABASE_PROTOCOL", [_database, "SQL", "SQL", "TEXT-NULL"]] call FUNC(extDB3);

#ifndef DISABLE_COMPILE_CACHE
// This is a release version, we should be locking extDB3 for security
// NOTE: THIS IS IRREVERSIBLE AND WILL DISABLE ALL SYSTEM(9) COMMANDS EXECPT: VERSION, LOCK_STATUS, TIME/DATA/ETC.
[9, "LOCK"] call FUNC(extDB3);
#endif

GVAR(callbacks) = createHashMap;
[FUNC(handleDB), 0.5, []] call CBA_fnc_addPerFrameHandler;