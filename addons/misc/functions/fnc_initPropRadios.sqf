#include "script_component.hpp"
/*======================================
	ghg_fnc_initPropRadios
    Initializes racks for static object radios
	Called on mission start
	Author: BSuz
======================================*/
if (!isServer) exitWith {};
sleep 10;
_radioObjects = [];
_radioObjects = allMissionObjects "vn_b_prop_vrc12";
{
	_propRadio = _x;
	[_propRadio, {}] call acre_api_fnc_initVehicleRacks;
} forEach _radioObjects;
if (_radioObjects != []) then {systemChat "prop radios initialized";};