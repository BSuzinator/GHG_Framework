#include "script_component.hpp"
/*======================================
	ghg_fnc_vehicleActions
	Adds options on vehicles
	Currently:
		-Eject on vehicle death
		-Engine Off
		-Check Fuel Levels
		-Plane thrust reversers
	Author: BSuz
======================================*/
/*
{
[_x, "killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	if ((_unit isKindOf "AllVehicles") && !(_unit isKindOf "Man")) then {[_unit] call FUNC(ejectOnDeath);};
}] call CBA_fnc_addBISEventHandler;
} forEach vehicles;
*/

if (!hasInterface) exitwith {};

//Engine Off action
private _action = ["engineOff", "Turn Off Engine", "\a3\ui_f\data\igui\cfg\vehicletoggles\engineiconon_ca.paa", {[_target, false] remoteExecCall ["engineOn", _target]}, {isEngineOn _target}] call ace_interact_menu_fnc_createAction;
["Air", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Car", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

// Adds action to check fuel levels for all land vehicles
private _action = ["CheckFuel", "Check Fuel", "\z\ace\addons\refuel\ui\icon_refuel_interact.paa", {_targetFuel = fuel _target; _targetFuel = _targetFuel * 100; _fuelStr = format ["%1 Fuel: %2%",(getText (configFile >> "CfgVehicles" >> (typeOf _target) >> "displayName")), (_targetFuel toFixed 2)];hint _fuelStr; systemChat _fuelStr;}, {[_player] call ace_common_fnc_isEngineer}] call ace_interact_menu_fnc_createAction;
["Car", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

//Thrust reverser
[{
    private _vehicle = vehicle player;
    if (
        (_vehicle != player) &&
        (_vehicle isKindOf "Plane") &&
        {
            (isTouchingGround (_vehicle)) && 
            (driver (_vehicle) == player) &&
            (speed _vehicle < 1) &&
            (1 in [(inputAction "HeliDown"),(inputAction "AirPlaneBrake")])
        }
    ) then {
        _vel = velocity _vehicle; 
        _dir = direction _vehicle;
        if ((speed (_vehicle)) > -5) then { 
            _speed = -1; 
            _vehicle setVelocity [ 
                (_vel select 0) + (sin _dir * _speed),  
                (_vel select 1) + (cos _dir * _speed),  
                (_vel select 2) - 0.1
            ];
        };
    };
}, 0, []] call CBA_fnc_addPerFrameHandler;
diag_log "GHG: Vehicle Actions loaded";