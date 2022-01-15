#include "script_component.hpp"
/*======================================
	ghg_database_fnc_getRoles
    Check at mission start for elevated roles
	Author: BSuz
======================================*/
if ! (hasInterface) exitWith {};

// Debug for dedicated hosts (i.e. 3DEN localhost)
GVARMAIN(isAdmin) = isServer;
GVARMAIN(isOfficer) = isServer;
GVARMAIN(isJuniorOfficer) = isServer;
GVARMAIN(isDegenerate) = isServer;

private _query = format ["SELECT isAdmin,isOfficer,isJuniorOfficer,isDegenerate FROM users WHERE steamID64=%1", getPlayerUID player];

[_query, QFUNC(getRolesCallback)] call FUNCMAIN(spawnDB);