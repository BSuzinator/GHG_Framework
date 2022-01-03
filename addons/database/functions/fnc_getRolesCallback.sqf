#include "script_component.hpp"
/*======================================
    Callback for ghg_database_fnc_getRoles
	Author: BSuz
======================================*/

params ["_args", "_sqlResult", "_errorMessage" ];
_player = _args select 0;
systemChat str _player;
/*
if ( _errorMessage != "" ) exitWith {
    systemChat ("GHG interact misc 3 error: " + _errorMessage);
};
*/
_sqlResult params ["_isAdmin","_isOfficer","_isJuniorOfficer","_isDegenerate"];

if ( _isAdmin ) then {GVAR(isAdmin) = true;} else {GVAR(isAdmin) = false;};
if ( _isOfficer ) then{GVAR(isOfficer) = true;} else {GVAR(isOfficer) = false;};
if ( _isJuniorOfficer ) then{GVAR(isJuniorOfficer) = true;} else {GVAR(isJuniorOfficer) = false;};
if ( _isDegenerate ) then{GVAR(isDegenerate) = true;} else {GVAR(isDegenerate) = false;};
_player setVariable [QGVAR(isAdmin), true];
_player setVariable [QGVAR(isOfficer), true];
_player setVariable [QGVAR(isJuniorOfficer), true];
_player setVariable [QGVAR(isDegenerate), true];