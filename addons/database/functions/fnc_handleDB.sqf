#include "script_component.hpp"
/*======================================
    Polls for results of pending DB transactions
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

private _remove = [];

{
    // Poll results
    private _result = [5, _x] call FUNC(extDB3);
    _result params ["_type", "_data"];
    
    // Error
    switch ( _type ) do
    {
        case 0: // Error (shouldn't happen, but we'll cover it here anyway
        {
            diag_log format ["GHG extDB3 handle error: %1", _data];
            [_y # 0, [], _data] remoteExecCall (_y # 1);
            _remove pushBack _x;
        };
        case 1: // Single-part message
        {
            [_y # 0, _data, ""] remoteExecCall (_y # 1);
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
                
                _mpm = _mpm + _lastmsg;
            };

            _data = call compile _msg;

            [_y # 0, _data, ""] remoteExecCall (_y # 1);
            _remove pushBack _x;
        };
    };
    
} forEach GVAR(callbacks);

// Remove completed jobs
{ GVAR(callbacks) deleteAt _x; } forEach _remove;