#include "script_component.hpp"
/*======================================
    Callback for ghg_database_fnc_getRoles
	Author: BSuz
======================================*/

params ["_args", "_sqlResult", "_errorMessage" ];
_player = _args select 0;
//systemChat str _player;
/*
if ( _errorMessage != "" ) exitWith {
    systemChat ("GHG interact misc 3 error: " + _errorMessage);
};
*/
_sqlResult params ["_sqlResult2"];
_sqlResult2 params ["_isAdminR","_isOfficerR","_isJuniorOfficerR","_isDegenerateR"];

_isAdmin = [_isAdminR] call FUNCMAIN(toBool);
_isOfficer = [_isOfficerR] call FUNCMAIN(toBool);
_isJuniorOfficer = [_isJuniorOfficerR] call FUNCMAIN(toBool);
_isDegenerate = [_isDegenerateR] call FUNCMAIN(toBool);

//{systemChat str _x;} forEach [_isAdmin,_isOfficer,_isJuniorOfficer,_isDegenerate];

if ( _isAdmin ) then {GVARMAIN(isAdmin) = true;} else {GVARMAIN(isAdmin) = false;};
if ( _isOfficer ) then{GVARMAIN(isOfficer) = true;} else {GVARMAIN(isOfficer) = false;};
if ( _isJuniorOfficer ) then{GVARMAIN(isJuniorOfficer) = true;} else {GVARMAIN(isJuniorOfficer) = false;};
if ( _isDegenerate ) then{GVARMAIN(isDegenerate) = true;} else {GVARMAIN(isDegenerate) = false;};
_player setVariable [QGVARMAIN(isAdmin), true];
_player setVariable [QGVARMAIN(isOfficer), true];
_player setVariable [QGVARMAIN(isJuniorOfficer), true];
_player setVariable [QGVARMAIN(isDegenerate), true];