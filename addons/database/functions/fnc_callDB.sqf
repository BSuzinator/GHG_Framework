#include "script_component.hpp"
/*======================================
    ghg_fnc_callDB
    Interface for SQL database (can only be called on server)
	Author: Quantx

Example:

private _scoreLimit = 10;

private _response = (format [ "SELECT user, score FROM user_list WHERE score > %1", _scoreLimit ]) call ghg_fnc_callDB;

// On error, _sqlResult will be an empty array and _errorMessage will contain the stated problem
// If no error has occurred, error message will be an empty string

_response params ["_sqlResult", "_errorMessage"]; 

_sqlResult isEqualTo [
    [ "bob", "jane", "tommy", ... ], // first column of request is: users
    [ 14, 23, 17, ... ] // second column of request is: score
]; // True

======================================*/
if ! ( (typeName _this) == "STRING" || (typeName _this) == "ARRAY" ) exitWith {[[], "argument passed was not a string or array"]};
if ( !isServer ) exitWith {[[], "function was not called on server"]};

private _result = [0, "SQL", _this] call FUNC(extDB3);
_result params ["_type", "_data"];

// Error
if ( _type == 0 ) exitWith {[[], _data]};

if ( _type == 2 ) then // Multi-part message
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

    _data = call compile _msg;
};

[_data, ""];