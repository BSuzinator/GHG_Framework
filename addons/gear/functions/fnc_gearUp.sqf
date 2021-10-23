#include "script_component.hpp"
/*======================================
	ghg_fnc_gearUp
    Applies loadouts to players
	Called at mission start, JIP, and respawn
======================================*/
if ( !hasInterface ) exitWith {};

params [
    ["_unit", player, [objNull]],
    ["_unitType", "", [""]]
];

if ( _unitType isEqualTo "" ) then {
    _unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
};

private _ghg = missionConfigFile >> "CfgGHG";

private ["_faction", "_camo"];

switch (side _unit) do {
    case west: {
        _faction = getText (_ghg >> "bluFaction");
        _camo = getText (_ghg >> "bluCamo");
    };
    case east: {
        _faction = getText (_ghg >> "opfFaction");
        _camo = getText (_ghg >> "opfCamo");
    };
    case resistance: {
        _faction = getText (_ghg >> "indFaction");
        _camo = getText (_ghg >> "indCamo");
    };
    default {
        _faction = nil;
        _camo = nil;
    };
};

if ( isNil "_faction" ) exitWith {};

// Check both config files for the loadout
private _factionLoadout = _ghg >> "Loadouts" >> _faction;
if ( isNull _factionLoadout ) then { _factionLoadout = (configFile >> "CfgGHG" >> "Loadouts" >> _faction); };
if ( isNull _factionLoadout ) exitWith { systemChat format ["No loadouts for faction: %1", _faction]; };

private _loadout = _factionLoadout >> _unitType;
if ( isNull _loadout ) exitWith { systemChat format ["No loadout for unit type %1 in faction %2", _unitType, _faction]; };

private _camoId = 0;

{
    if ( _camo isEqualTo _x ) exitWith { _camoId = _forEachIndex; };
} forEach getArray( _loadout >> "camo" );

private _camoField = {
    params ["_configField"];
    
    if ( isArray _configField ) then
    {
        (getArray _configField) select _camoId;
    }
    else
    {
        getText _configField;
    };
};

private _magazineArray = {
    params ["_mag"];
    
    if ( _mag isKindOf ["CA_Magazine", configFile >> "CfgMagazines"] ) then
    {
        _this pushBack 0;
    };
    
    _this;
};

private _weaponArray = {
    params ["_cfg"];

    private _scope = "";
    private _scopeList = configProperties [_cfg >> "Scopes"];
    if ( (count _scopeList) > 0 ) then { _scope = [_scopeList select 0] call _camoField; };

    private _ammo = [];
    private _ammoTxt = getText (_cfg >> "ammo");
    if ( _ammoTxt isNotEqualTo "" ) then { _ammo = [_ammoTxt] call _magazineArray; };
    
    private _grenade = [];
    private _grenadeTxt = getText (_cfg >> "grenade");
    if ( _grenadeTxt isNotEqualTo "" ) then { _grenade = [_grenadeTxt] call _magazineArray; };
    
    //[getText (_cfg >> "grenade")],

    [
        [_cfg >> "name"  ] call _camoField,
        [_cfg >> "muzzle"] call _camoField,
        [_cfg >> "laser" ] call _camoField,
        _scope,
        _ammo,
        _grenade,
        [_cfg >> "bipod"] call _camoField
    ];
};

private _clothingArray = {
    params ["_cfg"];
    
    private _name = [_cfg >> "name"] call _camoField;
    if ( _name isEqualTo "" ) exitWith {[]};
    
    private _items = [];
    
    {
        private _itemName = configName _x;
        
        if ( _itemName isNotEqualTo "name" ) then
        {
            private _itemAmount = getNumber _x;
            
            if ( _itemAmount > 0 ) then
            {
                _items pushBack ([ _itemName, _itemAmount ] call _magazineArray);
            };
        };
    } forEach configProperties [_cfg];
    
    [ _name, _items ];
};

private _unitLoadout = [
    [_loadout >> "Weapon_1"  ] call _weaponArray,
    [_loadout >> "Weapon_3"  ] call _weaponArray,
    [_loadout >> "Weapon_2"  ] call _weaponArray,
    [_loadout >> "Uniform"   ] call _clothingArray,
    [_loadout >> "Vest"      ] call _clothingArray,
    [_loadout >> "Backpack"  ] call _clothingArray,
    [_loadout >> "headgear"  ] call _camoField,
    [_loadout >> "facewear"  ] call _camoField,
    [_loadout >> "Binoculars"] call _weaponArray,
    [
        [_loadout >> "map"   ] call _camoField,
        [_loadout >> "gps"   ] call _camoField,
        "", // Radio should be left empty
        [_loadout >> "compas"] call _camoField,
        [_loadout >> "watch" ] call _camoField,
        [_loadout >> "nvgs"  ] call _camoField
    ]
];

_unit setUnitLoadout [_unitLoadout, true];

if ( _unit getVariable ["hasScopeChoice", false] ) then
{
	_unit setVariable ["hasScopeChoice", true];
	[_unit, _unitType, _faction] call FUNC(scopeChoice);
};

//Set GHG patch
[_unit, "GHG"] call BIS_fnc_setUnitInsignia;