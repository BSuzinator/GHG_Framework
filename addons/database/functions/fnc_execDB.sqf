#include "script_component.hpp"
/*======================================
    ghg_fnc_execDB
    Interface for SQL database
	Author: Quantx
======================================*/
params [
    [ "_msg", "", [""] ],
    [ "_callback", "", [""] ]
];

if ( _msg == "" ) exitWith {false};

if ( isServer )
{
    // Just call the function directly if we're the server
    [_msg, _callback] call QFUNC(requestDB);
}
else
{
    [_msg, _callback] remoteExecCall [QFUNC(requestDB), 2];
};

true; // Return value, must be last