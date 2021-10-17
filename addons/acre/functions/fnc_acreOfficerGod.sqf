#include "script_component.hpp"
/*======================================
	Add officers to god mode channel
	Author: Quantx
======================================*/
params ["_args", "_sqlResult", "_errorMessage" ];

if ( _errorMessage != "" ) exitWith {
    systemChat _errorMessage;
};

_sqlResult params ["_uids"];

[_uids, 1] call acre_api_fnc_godModeModifyGroup;