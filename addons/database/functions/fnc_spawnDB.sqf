#include "script_component.hpp"
/*======================================
    ghg_fnc_spawnDB
    Interface for SQL database
    WARNING: May cause lag if called from somewhere other than the server (more specifically if _netId is not 2)
	Author: Quantx

Example:

private _scoreLimit = 10;
private _myArgs = ["Arg1", 2, ["Arg3, 4]];

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

_args isEqualTo ["Arg1", 2, ["Arg3, 4]]; // True

_sqlResult isEqualTo [
    [ "bob", "jane", "tommy", ... ], // first column of request is: users
    [ 14, 23, 17, ... ] // second column of request is: score
]; // True


======================================*/

params [
    [ "_msg", "", [""] ],
    [ "_callback", "", [""] ],
    [ "_args", [], [[]] ],
    [ "_netId", netId player, [0, objNull, "", sideLogic, grpNull, []] ]
];

if ( _msg == "" ) exitWith {false};

if ( isServer )
{
    // Just call the function directly if we're the server
    [_msg, _callback, _args, _netId] call FUNC(requestDB);
}
else
{
    [_msg, _callback, _args, _netId] remoteExecCall [QFUNC(requestDB), 2];
};

true; // Return value, must be last