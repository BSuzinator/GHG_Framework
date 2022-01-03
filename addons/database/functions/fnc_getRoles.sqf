#include "script_component.hpp"
/*======================================
	ghg_database_fnc_getRoles
    Check at mission start for elevated roles
	Author: BSuz
======================================*/
if ! (hasInterface) exitWith {};
if (isServer && hasInterface && !isDedicated) then {
	GVAR(isAdmin) = true;
	GVAR(isOfficer) = true;
	GVAR(isJuniorOfficer) = true;
	GVAR(isDegenerate) = true;
	_player setVariable [QGVAR(isAdmin), true];
	_player setVariable [QGVAR(isOfficer), true];
	_player setVariable [QGVAR(isJuniorOfficer), true];
	_player setVariable [QGVAR(isDegenerate), true];
} else {
	GVAR(isAdmin) = false;
	GVAR(isOfficer) = false;
	GVAR(isJuniorOfficer) = false;
	GVAR(isDegenerate) = false;
};
private _query = format ["SELECT isAdmin,isOfficer,isJuniorOfficer,isDegenerate FROM users WHERE steamID64=%1", getPlayerUID player];

[_query, QFUNC(getRolesCallback),[player]] call FUNCMAIN(spawnDB);
