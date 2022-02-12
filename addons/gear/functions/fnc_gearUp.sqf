#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_gearUp
    Applies loadouts to players
	Called at mission start, JIP, and respawn
======================================*/
if ( !hasInterface ) exitWith {};

params [
    ["_unit", player, [objNull]],
    ["_unitType", "", [""]]
];

if ( isNull _unit ) exitWith { systemChat "No unit specified for gearUp" };

// This is why 'private' is important!
private ["_factionLoadout", "_loadout", "_camoId"];
_this call FUNC(getLoadout);

if ( isNull _loadout ) exitWith {};

private _camoField = {
    params ["_cfg"];
    if ( isArray _cfg ) then { (getArray _cfg) select _camoId; } else { getText _cfg; };
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
    
    {
        private _scp = [_x] call _camoField;
        if ( _scp isNotEqualTo "" ) exitWith { _scope = _scp; };
    } forEach configProperties [_cfg >> "Scopes", "true", true];

    private _ammo = [];
    private _ammoTxt = getText (_cfg >> "ammo");
    if ( _ammoTxt isNotEqualTo "" ) then { _ammo = [_ammoTxt] call _magazineArray; };
    
    private _grenade = [];
    private _grenadeTxt = getText (_cfg >> "grenade");
    if ( _grenadeTxt isNotEqualTo "" ) then { _grenade = [_grenadeTxt] call _magazineArray; };
    
    //[getText (_cfg >> "grenade")],

    [
        [_cfg >> "classname"  ] call _camoField,
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
    
    private _name = [_cfg >> "classname"] call _camoField;
    if ( _name isEqualTo "" ) exitWith {[]};
    
    private _items = [];
    
    {
        private _itemName = configName _x;
        
        if ( _itemName isNotEqualTo "classname" ) then
        {
            private _itemAmount = getNumber _x;
            
            if ( _itemAmount > 0 ) then
            {
                private _itemCamo = _factionLoadout >> "Magazines" >> _itemName;
                if ( isArray(_itemCamo) ) then { _itemName = [_itemCamo] call _camoField; };
            
                _items pushBack ([ _itemName, _itemAmount ] call _magazineArray);
            };
        };
    } forEach configProperties [_cfg, "true", true];
    
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

[_unit, _loadout, _camoId] call FUNC(scopeChoice);

//Set GHG patch
[_unit, "GHG"] call BIS_fnc_setUnitInsignia;