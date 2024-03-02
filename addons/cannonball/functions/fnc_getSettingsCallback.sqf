#include "script_component.hpp"
/*======================================
    Callback for ghg_cannonball_fnc_getSettingsCallback
	Author: BSuz
======================================*/
params ["_args", "_sqlResult", "_errorMessage" ];

if ( _errorMessage != "" ) exitWith {
    diag_log ("cannonball getSettings error: " + _errorMessage);
};

_sqlResult params ["_columns"];
_columns params ["_golfTexture","_golfTime","_suvTexture","_suvTime","_hbsTexture","_hbsTime"];

GVAR(golfTexture) = _golfTexture;
GVAR(golfTime)  = _golfTime;
GVAR(suvTexture) = _suvTexture;
GVAR(suvTime) = _suvTime;
GVAR(hbsTexture) = _hbsTexture;
GVAR(hbsTime) = _hbsTime;

//{systemChat str _x;} forEach [_isAdmin,_isOfficer,_isJuniorOfficer,_isDegenerate];

diag_log "Cannonball Settings retrieved";