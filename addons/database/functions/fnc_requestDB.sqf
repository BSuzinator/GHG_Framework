#include "script_component.hpp"
/*======================================
    Handle requests submitted from: ghg_fnc_execDB
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params [
    [ "_msg", "", [""] ],
    [ "_callback", "", [""] ],
    [ "_args", [], [[]] ],
    [ "_netId", netId player, [0, objNull, "", sideLogic, grpNull, []] ]
];

if (_msg == "") exitWith {};

private _mode = if (_callback == "") then {1} else {2};

private _result = [_mode, "SQL", _msg] call FUNC(extDB3);

_result params ["_type", "_data"];

if (_type == 0) exitWith
{
    // Send an empty array back to indicate failure
    [_args, [], _data] remoteExecCall [_callback, _netId];
    
    diag_log format ["GHG extDB3 error: %1", _data];
};

if (_type == 2) then
{
    if ( _callback == "" ) exitWith { diag_log "GHG extDB3 error: returned ID, but no callback assigned" };

    // Add call back to list
    GVAR(callbacks) set [ _data, [_args, [_callback, _netId]] ];
};