#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_clearPylons
    Clears Pylons of spawned vehicle
	Author: BSuz
======================================*/
params ["_vehicle"];
private _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};  
{  
 _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon")  
} forEach getPylonMagazines _vehicle;  

{  
_vehicle setPylonLoadout [_forEachIndex + 1, "", true, _pylonPaths select _forEachIndex]  
} forEach _pylonPaths;