#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_rearmVehicle
	Rearms current vehicle
	Author: BSuz
======================================*/
private _vehicle = vehicle player;
if ( _vehicle == player ) then { _vehicle = cursorObject };

if (isNull _vehicle) exitWith {};

if ! ( (_vehicle isKindOf "Car")
    || (_vehicle isKindOf "Air")
    || (_vehicle isKindOf "Sea") ) exitWith { systemChat "Not a vehicle" };

if (!alive _vehicle) exitWith { systemChat "Vehicle is destroyed" };

[_vehicle, 1] remoteExecCall ["setVehicleAmmo", _vehicle];

private _str = format ["%1 rearmed a %2 from the Admin Menu", name player, getText ((configOf _vehicle) >> "displayname")]; 
_str remoteExecCall ["systemChat", 0];
diag_log "GHG: " + _str;
true