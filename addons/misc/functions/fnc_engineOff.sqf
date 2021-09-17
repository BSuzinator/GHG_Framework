#include "script_component.hpp"
/*======================================
	ghg_fnc_engineOff
	Adds option to turn off engine from outside ground vehicles
	Author: BSuz
======================================*/
if (!hasInterface) exitwith {};

_action = ["engineOff", "Turn Off Engine", "\a3\ui_f\data\igui\cfg\vehicletoggles\engineiconon_ca.paa", {[_target, false] remoteExecCall ["engineOn", _target]}, {isEngineOn _target}] call ace_interact_menu_fnc_createAction;

["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
