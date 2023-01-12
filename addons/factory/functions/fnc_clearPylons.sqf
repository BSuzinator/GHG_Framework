#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_clearPylons
    Clears Pylons of spawned vehicle
	Author: BSuz
======================================*/
params ["_vehicle"];
/*
private _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};  
{  
 _vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon");
 _vehicle removeWeaponTurret [ _x, [-1]];
 _vehicle removeWeaponTurret [ _x, [0]];
} forEach getPylonMagazines _vehicle;  

vehicle player getCompatiblePylonMagazines 0

{  
_vehicle setPylonLoadout [_forEachIndex + 1, "", true, _pylonPaths select _forEachIndex]  
} forEach _pylonPaths;
*/


//Rewrite lives beyond here!

private _pylonPaths = (configProperties [configFile >> "CfgVehicles" >> typeOf _vehicle >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]) apply {getArray (_x >> "turret")};

private _cfgWeapons = configFile >> "CfgWeapons";
private _cfgMagazines = configFile >> "CfgMagazines";

private _pylonMagazinesArray = _vehicle getCompatiblePylonMagazines 0;  
 
{ 
	private _pylonMagazines = _x; 
	{
		private _magazine = _x;
		private _pylonWeapon = getText (_cfgMagazines >> _magazine >> "pylonWeapon");
		{ 
			private _turret = _x; 
			_vehicle removeWeaponTurret [ _pylonWeapon, [_turret]];  
		} forEach [-1,0];  
	} forEach _pylonMagazines; 
} forEach _pylonMagazinesArray; 
 
{    
_vehicle setPylonLoadout [_forEachIndex + 1, "", true, _pylonPaths select _forEachIndex];    
} forEach _pylonPaths;