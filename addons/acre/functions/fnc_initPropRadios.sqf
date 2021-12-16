#include "script_component.hpp"
/*======================================
	ghg_fnc_initPropRadios
    Initializes racks for static object radios
	Called on mission start
	Author: BSuz
======================================*/
if ! (isServer) exitWith {};
sleep 10;

private _radioObjects = allMissionObjects "vn_b_prop_vrc12";
if (count _radioObjects > 0) then
{
    {
        _propRadio = _x;
        [_propRadio, {}] call acre_api_fnc_initVehicleRacks;
    } forEach _radioObjects;

    systemChat "prop radios initialized";
};