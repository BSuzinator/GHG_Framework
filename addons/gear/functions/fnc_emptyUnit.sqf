#include "script_component.hpp"
/*======================================
	ghg_fnc_emptyUnit
    Strips Unit of All Items
	Author: BSuz
======================================*/
params ["_unit"];
if (_unit isKindOf "Man") exitWith {systemChat "Selected Unit not of type ""Man""";};
removeAllItemsWithMagazines _unit; 
removeAllAssignedItems _unit;
removeAllPrimaryWeaponItems _unit;
_unit removeWeapon primaryWeapon _unit;
removeAllContainers _unit;
removeHeadgear _unit;
removeGoggles _unit;