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

