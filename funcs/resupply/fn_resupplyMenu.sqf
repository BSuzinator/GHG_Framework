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

private _cratesList = parseSimpleArray (preprocessFile format ["ghg\loadouts\%1\crates\crateList.sqf", _faction]);

private _crateName = ["Medical"];
private _crateFile = ["ghg_medical_placeholder"];

{
	_crateName pushBack (_x select 0);
	_crateFile pushBack (_x select 1);
} forEach _cratesList;

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
	ghg_fnc_resupplyCreate,
	{},
	[
		_target,
		_player,
		_building,
		_faction
	]
] call zen_dialog_fnc_create;
