#include "script_component.hpp"
/*======================================
	Get array of all papers in a unit's inventory
	Author: Quantx
======================================*/
params ["_unit"];

if (isNull _unit) exitWith {[]};

// Get list of all items in all inventories
private _gear = (getItemCargo (uniformContainer _unit)) select 0;
_gear append ((getItemCargo (vestContainer _unit)) select 0);
_gear append ((getItemCargo (backpackContainer _unit)) select 0);
_gear append (assignedItems _unit);

// Filter out all non paper related items
_gear = _gear select {_x select [0, 11] == "GHG_Papers_"};

_gear; // Return value, must be last