#include "script_component.hpp"
/*======================================
    ghg_fnc_debugCallback;
    A debug callback function for use with ghg_fnc_spawnDB
	Author: Quantx
======================================*/
params ["_args", "_sqlResult", "_errorMessage" ];

if ( _errorMessage == "" ) then
{
    systemChat "Debug callback finished with no errors";
}
else
{
    systemChat format ["Debug callback finished with error message: '%1'", _errorMessage];
};

systemChat str _args;

systemChat str _sqlResult;