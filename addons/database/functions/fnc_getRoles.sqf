#include "script_component.hpp"
/*======================================
	ghg_database_fnc_getRoles
    Check at mission start for elevated roles
	Author: BSuz
======================================*/
if ! (hasInterface) exitWith {};

GVARMAIN(isAdmin) = isServer;
GVARMAIN(isOfficer) = isServer;
GVARMAIN(isJuniorOfficer) = isServer;
GVARMAIN(isDegenerate) = isServer;
_player setVariable [QGVARMAIN(isAdmin), true];
_player setVariable [QGVARMAIN(isOfficer), true];
_player setVariable [QGVARMAIN(isJuniorOfficer), true];
_player setVariable [QGVARMAIN(isDegenerate), true];

private _query = format ["SELECT isAdmin,isOfficer,isJuniorOfficer,isDegenerate FROM users WHERE steamID64=%1", getPlayerUID player];

[_query, QFUNC(getRolesCallback),[player]] call FUNCMAIN(spawnDB);
