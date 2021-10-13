#include "script_component.hpp"
/*======================================
	ghg_fnc_gearUp
    Applies loadouts to players
	Called at mission start, JIP, and respawn
======================================*/
if ( !hasInterface ) exitWith {};

params [
    ["_unit", player, [objNull]],
    ["_unitType", "unknown_unit_type", [""]]
];

if ( _unitType isEqualTo "unknown_unit_type" ) then {
    _unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
};

private _faction = switch(side _unit) do {
    case west: {[
        getText (missionConfigFile >> "CfgGHG" >> "bluFaction"),
        getText (missionConfigFile >> "CfgGHG" >> "bluCamo")
    ]};
    case east: {[
        getText (missionConfigFile >> "CfgGHG" >> "opfFaction"),
        getText (missionConfigFile >> "CfgGHG" >> "opfCamo")
    ]};
    case resistance: {[
        getText (missionConfigFile >> "CfgGHG" >> "indFaction"),
        getText (missionConfigFile >> "CfgGHG" >> "indCamo")
    ]};
    default { nil };
};

if ( isNil "_faction" ) exitWith {};

private _gearArgs = [["ItemMap", "", "", "ItemCompass", "ACE_Altimeter", "ACE_NVG_Wide"]];

// Add camo arguments
_gearArgs append parseSimpleArray preprocessFile format [ "\x\ghg\addons\gear\loadouts\%1\camo\%2.sqf", _faction select 0, _faction select 1 ];

private _unitLoadout = _gearArgs call compile preprocessFileLineNumbers format [ "\x\ghg\addons\gear\loadouts\%1\gear\%2.sqf", _faction select 0, _unitType ];

// Add items to uniform
private _uniformItems = [
	["ACE_EarPlugs", 2],
	["ACRE_PRC343", 1],
	["ACE_elasticBandage", 5],
	["ACE_packingBandage", 5],
	["ACE_morphine", 2],
	["ACE_epinephrine", 2],
	["ACE_tourniquet", 2],
	["ACE_splint", 1],
	["ACE_Flashlight_XL50", 1],
	["diw_armor_plates_main_plate",1]
];

((_unitLoadout select 3) select 1) append _uniformItems;

_unit setUnitLoadout _unitLoadout;

private _hasScopeChoice = _unit getVariable "hasScopeChoice";
if ((isNil "_hasScopeChoice") || ("_hasScopeChoice" isEqualTo false)) then
{
	_unit setVariable ["hasScopeChoice", true];
	[_unit, _unitType, _faction] call FUNC(scopeChoice);
};

//Set GHG patch
[_unit,"GHG"] call BIS_fnc_setUnitInsignia;