#include "script_component.hpp"
/*======================================
	ghg_database_fnc_getRoles
    Check at mission start for elevated roles
	Author: BSuz
======================================*/
if ! (hasInterface) exitWith {};
if (isServer && hasInterface && !isDedicated) then {
	GVARMAIN(isAdmin) = true;
	GVARMAIN(isOfficer) = true;
	GVARMAIN(isJuniorOfficer) = true;
	GVARMAIN(isDegenerate) = true;
	_player setVariable [QGVARMAIN(isAdmin), true];
	_player setVariable [QGVARMAIN(isOfficer), true];
	_player setVariable [QGVARMAIN(isJuniorOfficer), true];
	_player setVariable [QGVARMAIN(isDegenerate), true];
} else {
	GVARMAIN(isAdmin) = false;
	GVARMAIN(isOfficer) = false;
	GVARMAIN(isJuniorOfficer) = false;
	GVARMAIN(isDegenerate) = false;
};
private _query = format ["SELECT isAdmin,isOfficer,isJuniorOfficer,isDegenerate FROM users WHERE steamID64=%1", getPlayerUID player];

[_query, QFUNC(getRolesCallback),[player]] call FUNCMAIN(spawnDB);
