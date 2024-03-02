#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_getSettings
    Retrieve Settings for Cannonball Runs
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
if ! (hasInterface) exitWith {};
//waitUntil{!isNull player};
GVAR(golfTexture) = "";
GVAR(golfTime) = "";
GVAR(suvTexture) = "";
GVAR(suvTime) = "";
GVAR(hbsTexture) = "";
GVAR(hbsTime) = "";

private _query = format ["SELECT golfTexture,golfTime,suvTexture,suvTime,hbsTexture,hbsTime FROM cannonball_users WHERE steamID64=%1", getPlayerUID _player];

[_query, QFUNC(getSettingsCallback)] call FUNCMAIN(spawnDB);