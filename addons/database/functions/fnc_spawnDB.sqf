#include "script_component.hpp"
/*======================================
    ghg_fnc_spawnDB
    Interface for SQL database
    WARNING: May cause lag if called from somewhere other than the server (more specifically if _netId is not 2)
	Author: Quantx

Example:

private _scoreLimit = 10;
private _myArgs = ["Arg1", 2, ["Arg3", 4]];

[
    format [ "SELECT user, score FROM user_list WHERE score > %1", _scoreLimit ],
    "ghg_fnc_myFunction", // This function will be called on all systems (as specified by _netId) and passed the following arguments:
    _myArgs,
    _someNetId
] call ghg_fnc_spawnDB;

// Inside "ghg_fnc_myFunction":

// On error, _sqlResult will be an empty array and _errorMessage will contain the stated problem
// If no error has occurred, error message will be an empty string

params ["_args", "_sqlResult", "_errorMessage" ];

_args isEqualTo ["Arg1", 2, ["Arg3", 4]]; // True

_sqlResult isEqualTo [
    [ "bob", "jane", "tommy", ... ], // first column of request is: users
    [ 14, 23, 17, ... ] // second column of request is: score
]; // True


======================================*/

params [
    [ "_msg", objNull, ["", []] ],
    [ "_callback", "", [""] ],
    [ "_args", [], [[]] ],
    [ "_netId", clientOwner, [0, objNull, "", sideLogic, grpNull, []] ]
];

// Re-run this function on the server
if ( !isServer ) exitWith
{
    if ( _msg isEqualTypeAny ["", []] ) then
    {
        [_msg, _callback, _args, _netId] remoteExecCall [QFUNCMAIN(spawnDB), 2];
        true; // Return value, must be last
    }
    else
    {
        false; // Return value, must be last
    };
};

// We must be on the server here

if ! ( _msg isEqualTypeAny ["", []] ) exitWith {
    if ( _callback != "" ) then {
        [_args, [], "no sql command provided"] remoteExecCall [_callback, _netId];
    };
    
    false;
};

private _mode = if (_callback == "") then {1} else {2};

private _result = [_mode, "SQL", _msg] call FUNC(extDB3);

_result params ["_type", "_data"];

if (_type == 0) exitWith
{
    // Send an empty array back to indicate failure
    if ( _callback != "" ) then {
        [_args, [], _data] remoteExecCall [_callback, _netId];
    };
    
    diag_log format ["GHG extDB3 error: %1", _data];
    
    false;
};

if (_type == 2) then
{
    if ( _callback == "" ) exitWith { diag_log "GHG extDB3 error: returned ID, but no callback assigned"; false; };

    // Add call back to list
    GVAR(callbacks) set [ _data, [_args, [_callback, _netId]] ];
};

true;