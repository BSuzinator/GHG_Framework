#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_refuelVehicle
	Refuels current vehicle
	Author: BSuz
======================================*/
_vehicle = vehicle ACE_Player;
if ( !(_vehicle isKindOf "LandVehicle") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Sea") ) then {_vehicle = cursorObject;};
if (!alive _vehicle) exitWith {systemChat "Vehicle is destroyed."};
_vehicle setFuel 1;
_str = format ["%1 refueled a vehicle from the Admin Menu", name player]; 
_str remoteExec["systemChat",2, false];
true