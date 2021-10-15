#include "script_component.hpp"
/*======================================
    Handle requests submitted from: ghg_fnc_execDB
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params [
    [ "_msg", "", [""] ],
    [ "_callback", "", [""] ]
];

if (_msg == "") exitWith {};

private _mode = if (_callback == "") then {1} else {2};

private _result = [_mode, "SQL", _msg] call FUNC(extDB3);

_result params ["_type", "_data"];

if (_type == 0) exitWith { diag_log format ["GHG extDB3 error: %1", _data]};

if (_type == 2) then
{
    if ( _callback == "" ) exitWith { diag_log "GHG extDB3 error: returned ID, but no callback assigned" };

    // Add call back to list
    GVAR(callbacks) set [ _data, _callback ];
};