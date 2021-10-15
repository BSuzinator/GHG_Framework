#include "script_component.hpp"
/*======================================
    DO NOT CALL THIS DIRECTLY USE: ghg_fnc_spawnDB or ghg_fnc_callDB
    Wrapper for extDB3 interactions
	Author: Quantx
======================================*/
params [
    [ "_callType", -1, [0] ],
    [ "_protoName", "", ["", 0] ],
    ["_data", objNull, ["", []] ]
];

// Check arguments
_callType = floor _callType;
_protoName = str _protoName;
if ( _callType < 0 ) exitWith {[0, "invalid call type specified"]};
if ( _callType == 5 ) exitWith {[0, "call type 5 is unsupported"]}; // This call returns a random string, not an array
if ( _protoName == "" || { (_protoName find ":") >= 0 } ) exitWith {[0, "invalid protocol name"]};

// Check environment
if ( !([] call extDB3_fnc_isLoaded) ) exitWith {[0, "extDB3 is not loaded"]};
if ( !isServer ) exitWith {[0, "was not executed on server"]}

private _args = (str _callType) + ":" + _protoName;

// Append data to args
if ( !isNull _data ) then
{
    _args = _args + ":" + switch (typeName _args) do
    {
        case "STRING": { _data };
        case "ARRAY": { _data joinString ":" };
        default {""}; // This shouldn't be possible because params filters the types for us
    };
};

private _result = [] call compile ("extDB3" callExtension _args);

_result; // Must be last