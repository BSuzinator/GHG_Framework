/*======================================
	ghg_fnc_checkFuelLevel
	Adds option to check fuel levels from outside vehicles for engineers
	Author: BSuz
======================================*/
if (!hasInterface) exitwith {};

// Adds action to check fuel levels for all land vehicles
_action = ["CheckFuel", "Check Fuel", "", {_targetFuel = fuel _target; _targetFuel = _targetFuel * 100; _fuelStr = format ["Fuel: %1", _targetFuel];hint _fuelStr; systemChat _fuelStr;}, {[_player] call ace_common_fnc_isEngineer}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;