/*======================================
	ghg_fnc_checkFuelLevel
	Adds option to check fuel levels from outside vehicles for engineers
	Author: BSuz
======================================*/
if (!hasInterface) exitwith {};

// Adds action to check fuel levels for all land vehicles
_action = ["CheckFuel", "Check Fuel", "\z\ace\addons\refuel\ui\icon_refuel_interact.paa", {_targetFuel = fuel _target; _targetFuel = _targetFuel * 100; _fuelStr = format ["Fuel: %1%", (_targetFuel toFixed 2)];hint _fuelStr; systemChat _fuelStr;}, {[_player] call ace_common_fnc_isEngineer}] call ace_interact_menu_fnc_createAction;
["AllVehicles", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;