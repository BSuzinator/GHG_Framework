#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_unflipVehicle
	Unflips current vehicle
	Author: BSuz
======================================*/
_vehicle = vehicle ACE_Player;
if (!alive _vehicle) exitWith {systemChat "Vehicle is destroyed."};
_vehicle allowDamage false;
_vehicle setVectorUp [0,0,1];
_vehicle setPosATL [(getPosATL _vehicle) select 0, (getPosATL _vehicle) select 1, 1];
_vehicle allowDamage true;