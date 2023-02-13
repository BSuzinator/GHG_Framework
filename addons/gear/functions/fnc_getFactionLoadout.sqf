#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_getFactionLoadout
    Get the faction loadout config for the provided side
    Author: QuantX
======================================*/

params [
    ["_side", sideEmpty, [sideEmpty]],
	["_unitFaction", "", [""]]
];

if ( _side isEqualTo sideEmpty ) exitWith {configNull};

private _ghg = missionConfigFile >> "CfgGHG";
private _faction = _unitFaction;

if (_faction isEqualTo "") then {
	_faction = getText( _ghg >> (switch (_side) do {
		case west: {"bluFaction"};
		case east: {"opfFaction"};
		case resistance: {"indFaction"};
		default {""};
	}));
};

if ( _faction == "" ) exitWith {
    systemChat format [ "No faction specified for side %1", _side ];
    configNull;
};

// Check both config files for the loadout
private _factionLoadout = _ghg >> "Loadouts" >> _faction;
if ( isNull _factionLoadout ) then { _factionLoadout = (configFile >> "CfgGHG" >> "Loadouts" >> _faction); };
if ( isNull _factionLoadout ) then { systemChat format ["No loadouts for faction: %1", _side] };
_factionLoadout;