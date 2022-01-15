#include "script_component.hpp"
/*======================================
    Callback for ghg_database_fnc_getRoles
	Author: BSuz
======================================*/
params ["_args", "_sqlResult", "_errorMessage" ];

if ( _errorMessage != "" ) exitWith {
    diag_log ("getRoles error: " + _errorMessage);
};

_sqlResult params ["_columns"];
_columns params ["_isAdmin","_isOfficer","_isJuniorOfficer","_isDegenerate"];

GVARMAIN(isAdmin) = [_isAdmin] call FUNCMAIN(toBool);
GVARMAIN(isOfficer)  = [_isOfficer] call FUNCMAIN(toBool);
GVARMAIN(isJuniorOfficer) = [_isJuniorOfficer] call FUNCMAIN(toBool);
GVARMAIN(isDegenerate) = [_isDegenerate] call FUNCMAIN(toBool);

//{systemChat str _x;} forEach [_isAdmin,_isOfficer,_isJuniorOfficer,_isDegenerate];

diag_log "Player admin levels retrieved";