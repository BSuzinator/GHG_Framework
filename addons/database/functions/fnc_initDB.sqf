#include "script_component.hpp"
/*======================================
	Initializes and locks extDB3
	Called on breifing start
	Author: Quantx
======================================*/
// Check enviornment
private _res = [9, "VERSION"] call FUNC(extDB3);
if ((_res # 0) == 0) exitWith {};

private _database = getText( configFile >> "CfgGHG" >> "database" );

// Add database
[9, "ADD_DATABASE", _database] call FUNC(extDB3);
[9, "ADD_DATABASE_PROTOCOL", [_database, "SQL", "SQL", "TEXT-NULL"]] call FUNC(extDB3);

#ifndef DISABLE_COMPILE_CACHE
// This is a release version, we should be locking extDB3 for security
// NOTE: THIS IS IRREVERSIBLE AND WILL DISABLE ALL SYSTEM(9) COMMANDS EXECPT: VERSION, LOCK_STATUS, TIME/DATA/ETC.
[9, "LOCK"] call FUNC(extDB3);
#endif

GVAR(callbacks) = createHashMap;
[FUNC(handleDB), 0.5, []] call CBA_fnc_addPerFrameHandler;