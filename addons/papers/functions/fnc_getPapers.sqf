#include "script_component.hpp"
/*======================================
	Get array of all papers in a unit's inventory
	Author: Quantx
======================================*/
params ["_unit"];

if (isNull _unit) exitWith {[]};

// Get list of all items in all inventories
private _papers = (getItemCargo (uniformContainer _unit)) select 0;
_papers append ((getItemCargo (vestContainer _unit)) select 0);
_papers append ((getItemCargo (backpackContainer _unit)) select 0);
_papers append (assignedItems _unit);

// Filter out all non paper related items
_papers = _papers select {_x select [0, 11] == "GHG_Papers_"};

_papers; // Return value, must be last