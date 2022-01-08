#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_unflipVehicle
	Unflips current vehicle
	Author: BSuz
======================================*/
_vehicle = vehicle ACE_Player;
if ( !(_vehicle isKindOf "LandVehicle") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Sea") ) then {_vehicle = cursorObject;};
if (!alive _vehicle) exitWith {systemChat "Vehicle is destroyed."};
_vehicle allowDamage false;
_vehicle setVectorUp [0,0,1];
_vehicle setPosATL [(getPosATL _vehicle) select 0, (getPosATL _vehicle) select 1, 1];
_vehicle allowDamage true;
_str = format ["%1 unflipped a vehicle from the Admin Menu", name player]; 
_str remoteExec["systemChat",2, false];
true