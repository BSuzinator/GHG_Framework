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

//Add action to strip bodies
private _statement = {
	params ["_target","_player","_actionParams"];
	private _gearPile = "GroundWeaponHolder" createVehicle position _target;
	
	//Get all gear
	private _itemsList = items _target;
	private _magazineList = magazines _target;
	private _assignedItemsList = assignedItems _target;
	private _uniform = uniform _target;
	private _vest = vest _target;
	private _backpack = backpack _target;
	private _headgear = headgear _target;
	private _weaponsItems = weaponsItems _target;
	
	/*private _binoItems = [binocular _target];
	_binoItems append binocularItems _target;
	_binoBipod = _binoItems # 4;
	_binoItems set [4,[]];
	_binoItems set [5,[]];
	_binoItems set [6,_binoBipod];
	_weaponsItems pushBack _binoItems;*/
	
	//remove all gear
	{
		if (_x isNotEqualTo "ACRE_Radio_Flagged") then {
			_target unassignItem _x;
			_target removeItem _x;
		};
	} forEach _assignedItemsList;
	removeAllItemsWithMagazines _target;
	removeVest _target;
	removeBackpack _target;
	removeHeadgear _target;
	removeAllWeapons _target;
	
	//If target is alive, leave uniform on
	if !(alive _target) then {
		removeUniform _target;
		_gearPile addItemCargoGlobal [_uniform, 1];
	};
	
	//Add items to Container
	{_gearPile addWeaponWithAttachmentsCargoGlobal [_x, 1];} forEach _weaponsItems;
	{_gearPile addItemCargoGlobal [_x, 1];} forEach _itemList;
	{_gearPile addMagazineCargoGlobal [_x, 1];} forEach _magazineList;
	_gearPile addItemCargoGlobal [_vest, 1];
	_gearPile addBackpackCargoGlobal [_backpack, 1];
	_gearPile addItemCargoGlobal [_headgear, 1];
	
};
private _condition = {
	params ["_target","_player","_actionParams"];
	((_target getVariable ["ace_captives_isSurrendering", false]) || 
	(_target getVariable ["ace_captives_isHandcuffed", false]) || 
	(_target getVariable ["ACE_isUnconscious", false]) ||
	!(alive _target))
};

private _action = ["ghg_strip", "Strip Unit", "", _statement, _condition] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

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