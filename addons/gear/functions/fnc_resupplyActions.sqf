#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_resupplyActions
	Adds actions to vehicles to resupply when close to a resupply ppint.
	
	(_this select 0) params ["_side", "_crateScript", "_isAirdrop"];
	(_this select 1) params ["_modulePos","_attachedObject"];
	
	[[side _player,_crateFile,false],[[0,0,0],_target]] call FUNC(zeusSpawnResupplyCrate);
	
	Author: BSuz	
======================================*/
if (!hasInterface) exitwith {};

//Add root action
private _resupplyCondition = {
	_resupplyDistance = 30;
	_nearestBunker = nearestObject [_target,"Land_Ammostore2"];
	_nearestCrateGreen = nearestObject [_target,"Land_Cargo20_military_green_F"];
	_nearestCrateSand = nearestObject [_target,"Land_Cargo20_sand_F"];
	((_target distance _nearestBunker <= _resupplyDistance) || (_target distance _nearestCrateGreen <= _resupplyDistance) || (_target distance _nearestCrateSand <= _resupplyDistance))
};
//Alt logo: "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa"
private _mainAction = ["ghg_resupplyLoad", "Load Resupply", "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {}, _resupplyCondition] call ace_interact_menu_fnc_createAction;
["Car", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;

private _faction = switch ( side player ) do {
	case west: { getText (missionConfigFile >> "CfgGHG" >> "bluFaction") };
	case east: { getText (missionConfigFile >> "CfgGHG" >> "opfFaction") };
	case resistance: { getText (missionConfigFile >> "CfgGHG" >> "indFaction") };
};

private _cratesList = parseSimpleArray (preprocessFile format ["\x\ghg\addons\gear\loadouts_old\%1\crates\crateList.sqf", _faction]);

private _crateName = ["Medical"];
private _crateFile = ["ghg_medical_placeholder"];

{
	_crateName pushBack (_x select 0);
	_crateFile pushBack (_x select 1);
} forEach _cratesList;

_crateName append ["Chemlights", "Demolitions", "Spare Wheel", "Spare Track", "Vehicle Fuel", "Vehicle Ammo"];
_crateFile append ["ghg_chemlights_placeholder", "ghg_demolition_placeholder", "ghg_spare_wheel_placeholder", "ghg_spare_track_placeholder", "ghg_vehicle_fuel_placeholder", "ghg_vehicle_ammo_placeholder"];

//Add actions for each crate
{
	_crateScript = _x;
	_crateNameDisplay = _crateName select _forEachIndex;
	
	_statement = {
		params ["_target", "_player", "_actionParams"];
		_actionParams params ["_crateScript","_crateNameDisplay"];
		[[[side _player],_crateScript,false],[[0,0,0],_target]] call FUNC(zeusSpawnResupplyCrate);
		systemChat format ["Loaded %1", _crateNameDisplay];
	};
	_action = [format ["ghg_resupplyLoad_%1",_crateScript], format ["Load %1",_crateNameDisplay], "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa", _statement, {true},{},[_crateScript,_crateNameDisplay]] call ace_interact_menu_fnc_createAction;
	["Car", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	["Air", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	["Ship", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	
} forEach _crateFile;
diag_log "[GHG]: Vehicle Resupply Actions Loaded";














