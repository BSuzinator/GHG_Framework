#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_initRacks
	Initialized ACRE2 Radio Racks
	Author: BSuz
======================================*/
private _vehicle = vehicle player;
if ( _vehicle == player ) then { _vehicle = cursorObject };

if (isNull _vehicle) exitWith {};

if ! ( (_vehicle isKindOf "Car")
    || (_vehicle isKindOf "Air")
    || (_vehicle isKindOf "Sea") ) exitWith { systemChat "Not a vehicle" };

if (!alive _vehicle) exitWith { systemChat "Vehicle is destroyed" };

[_vehicle] call acre_sys_rack_fnc_configureRackIntercom;

private _str = format ["%1 initialized radio racks for a %2 from the Admin Menu", name player, getText ((configOf _vehicle) >> "displayname")]; 
_str remoteExecCall ["systemChat", 0];
diag_log "GHG: " + _str;
true