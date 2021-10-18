#include "script_component.hpp"
/*======================================
	Initializes and locks extDB3
	Called on breifing start
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

// Make sure extDB3 is unlocked
private _lock = [9, "LOCK_STATUS"] call FUNC(extDB3);
if ((_lock # 0) == 0) then
{
    [9, "RESET"] call FUNC(extDB3);

    private _databases = getArray( configFile >> "CfgGHG" >> "databases" );

    { // Add databases
        [9, "ADD_DATABASE", _x] call FUNC(extDB3);
        [9, "ADD_DATABASE_PROTOCOL", [_x, "SQL", "SQL", "TEXT-NULL"]] call FUNC(extDB3);
    } forEach _databases;

    #ifndef DISABLE_COMPILE_CACHE
    // This is a release version, we should be locking extDB3 for security
    // NOTE: THIS IS IRREVERSIBLE AND WILL DISABLE ALL SYSTEM(9) COMMANDS EXECPT: VERSION, LOCK_STATUS, TIME/DATA/ETC.
    [9, "LOCK"] call FUNC(extDB3);
    #endif
};

GVAR(callbacks) = createHashMap;