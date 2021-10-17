#include "script_component.hpp"
/*======================================
    Polls for results of pending DB transactions
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

private _remove = [];

{
    // Poll results
    private _result = [4, _x] call FUNC(extDB3);
    _result params ["_type", "_data"];
    
    _y params ["_args", "_remExec"];
    
    // Error
    switch ( _type ) do
    {
        case 0: // Error (shouldn't happen, but we'll cover it here anyway
        {
            diag_log format ["GHG extDB3 handle error: %1", _data];
            [_args, [], _data] remoteExecCall _remExec;
            _remove pushBack _x;
        };
        case 1: // Single-part message
        {
            [_args, _data, ""] remoteExecCall _remExec;
            _remove pushBack _x;
        };
        case 5: // Multi-part message
        {
            private _cmd = format ["5:%1", _x];
            private _msg = "";
            private _lastmsg = " ";
            
            while { _lastmsg != "" } do
            {
                // Need to call extension manually since it's not returning a full array here
                _lastmsg = "extDB3" callExtension _cmd;
                
                _msg = _msg + _lastmsg;
            };

            _data = [] call compile _msg;

            [_args, _data, ""] remoteExecCall _remExec;
            _remove pushBack _x;
        };
    };
    
} forEach GVAR(callbacks);

// Remove completed jobs
{
    GVAR(callbacks) deleteAt _x;
//    systemChat format ["GHG extDB3 finished job %1", _x];
} forEach _remove;