#include "script_component.hpp"
/*======================================
	ghg_fnc_checkFuelLevel
	Adds option to check fuel levels from outside vehicles for engineers
	Author: BSuz
======================================*/
if (!hasInterface) exitwith {};

// Adds action to check fuel levels for all land vehicles
private _action = ["CheckFuel", "Check Fuel", "\z\ace\addons\refuel\ui\icon_refuel_interact.paa", {_targetFuel = fuel _target; _targetFuel = _targetFuel * 100; _fuelStr = format ["%1 Fuel: %2%",(getText (configFile >> "CfgVehicles" >> (typeOf _target) >> "displayName")), (_targetFuel toFixed 2)];hint _fuelStr; systemChat _fuelStr;}, {[_player] call ace_common_fnc_isEngineer}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;