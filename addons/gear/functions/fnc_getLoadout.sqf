#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_getLoadout
    Get the loadout config, loadout, and camo for the provided unit
    Author: QuantX
======================================*/

params [
    ["_unit", player, [objNull]],
    ["_unitType", "", [""]],
	["_unitFaction", "", [""]],
	["_unitFactionCamo", "", [""]]
];

private _unitSide = side _unit;
private _ghg = missionConfigFile >> "CfgGHG";

//Patch to make new units function until we fully switch over

private _faction = _unitFaction;

if (_unitFaction isEqualTo "") then {

	_faction = getText( _ghg >> (switch (_unitSide) do {
		case west: {"bluFaction"};
		case east: {"opfFaction"};
		case resistance: {"indFaction"};
		default {""};
	}));

};

private _camo = _unitFactionCamo;

if (_unitFactionCamo isEqualTo "") then {

	_camo = getText( _ghg >> (switch (_unitSide) do {
		case west: {"bluCamo"};
		case east: {"opfCamo"};
		case resistance: {"indCamo"};
		default {""};
	}));

};

// Return values (NOTE: These are intentionally NOT private)
_factionLoadout = configNull;
_factionLoadout = [_unitSide, _unitFaction] call FUNC(getFactionLoadout);
_factionVersion = getNumber(_factionLoadout >> "version");
_loadout = configNull;
_camoId = 0;

if ( _unitType isEqualTo "" ) then {
    _unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
    if (_factionVersion == 1) then {_unitType = [toLower typeOf _unit, 6] call BIS_fnc_trimString;};
};

if (isNull _factionLoadout) exitWith {};

if ( _camo != "" ) then
{
    _camoId = -1;

    {
        // Case insensitive check
        if ( _camo == _x ) exitWith { _camoId = _forEachIndex; };
    } forEach getArray( _factionLoadout >> "camo" );

    if ( _camoId < 0 ) then
    {
        _camoId = 0;
        systemChat format ["Unknown camo '%1' for faction '%2', using default camo instead!", _camo, _faction ];
    };
};

_loadout = _factionLoadout >> _unitType;
if ( isNull _loadout ) then { systemChat format ["No loadout for unit type %1 in faction %2", _unitType, _faction] };

nil;