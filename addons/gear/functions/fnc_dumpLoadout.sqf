#include "script_component.hpp"
/*======================================
	ghg_fnc_dumpLoadout
    Convert's a units loadout to GHG format
    Author: QuantX
======================================*/
params [
    ["_unit", player, [objNull]]
];

// TODO check if the unit is a man

private _loadout = getUnitLoadout _unit;

_loadout params ["_weapon1", "_weapon3", "_weapon2", "_uniform", "_vest", "_backpack", "_helmet", "_facewear", "_binoculars", "_linked"];

private _out = format [
"
class %1 : loadout_base {
    #include ""..\loadout_inherit.hpp"" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        %2
    
        class Scopes : Scopes
        {
            my_scope_name = ""%3""
        };
    };
    
    class Weapon_2 : Weapon_2 // Pistol
    {
        %4
    
        class Scopes : Scopes
        {
            my_scope_name = ""%5""
        };
    };
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        %6
    
        class Scopes : Scopes
        {
            my_scope_name = ""%7""
        };
    };
    
    class Uniform : Uniform
    {
        %8
    };
    
    class Vest : Vest
    {
        %9
    };
    
    class Backpack : Backpack
    {
        %10
    };
    
    class Binoculars : Binoculars
    {
        %11
    };
};",

];