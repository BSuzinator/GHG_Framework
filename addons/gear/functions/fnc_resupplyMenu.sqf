#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyMenu
	Creates list of crates availible to players based on faction
	Author: Quantx
======================================*/
params ["_target", "_player"];
(_this select 2) params ["_building"];

private _faction = switch ( side player ) do {
	case west: { getText (missionConfigFile >> "CfgGHG" >> "bluFaction") };
	case east: { getText (missionConfigFile >> "CfgGHG" >> "opfFaction") };
	case resistance: { getText (missionConfigFile >> "CfgGHG" >> "indFaction") };
};

private _cratesList = parseSimpleArray (preprocessFile format ["\x\ghg\addons\gear\loadouts\%1\crates\crateList.sqf", _faction]);

private _crateName = ["Medical"];
private _crateFile = ["ghg_medical_placeholder"];

{
	_crateName pushBack (_x select 0);
	_crateFile pushBack (_x select 1);
} forEach _cratesList;

_crateName append ["Demolitions", "Spare Wheel", "Spare Track", "Vehicle Fuel", "Vehicle Ammo"];
_crateFile append ["ghg_demolition_placeholder", "ghg_spare_wheel_placeholder", "ghg_spare_track_placeholder", "ghg_vehicle_fuel_placeholder", "ghg_vehicle_ammo_placeholder"];

[
	"Request Resupply",
	[
		[
			"LIST",
			"Choose a resupply package",
			[
				_crateFile,
				_crateName,
				0,
				(10 min ((count _crateName) + 0.5))
			]
		]
	],
	FUNC(resupplyCreate),
	{},
	[
		_target,
		_player,
		_building,
		_faction
	]
] call zen_dialog_fnc_create;
