#include "script_component.hpp"
/*======================================
	ghg_fnc_gearHint
    Displays hint with current loadout information
	
	Author: BSuz

Syntax:
unit getSlotItemName slot
Parameters:
unit: Object
slot: Number - can be one of:
603 - Goggles
605 - Headgear
608 - Map
609 - Compass
610 - Watch
611 - Radio
612 - GPS
616 - HMD
617 - Binoculars
701 - Vest
801 - Uniform
901 - Backpack
Return Value:
String - item name

======================================*/
private _unit = player;
private _missionName = getMissionConfigValue ["OnLoadName", ""];
private _worldName = getText (configFile >> "CfgWorlds" >> worldName >> "description");
date params ["_year", "_month", "_day", "_hours", "_minutes"];


private _magInfo = magazinesAmmoFull _unit;












//Assemble Hint
hintSilent composeText [
	_missionName, lineBreak,
	_worldName, lineBreak,
	str _year, "/",str _month,"/",str _day," | ", str _hours,":",str _minutes, lineBreak,
	"-------------------", linebreak,
	"---- Gear ----", linebreak,
	"Uniform: ", [_unit getSlotItemName 801] call EFUNC(misc,getDisplayName), linebreak,
	"Vest: ", [_unit getSlotItemName 701] call EFUNC(misc,getDisplayName), linebreak,
	"Backpack: ", [_unit getSlotItemName 901] call EFUNC(misc,getDisplayName), linebreak,
	linebreak,
	"NVGs: ", [_unit getSlotItemName 616] call EFUNC(misc,getDisplayName), linebreak,
	"Primary: ", [primaryWeapon _unit] call EFUNC(misc,getDisplayName), linebreak,
	"  Ammo Count: ", linebreak,
	"Secondary: ", [handgunWeapon _unit] call EFUNC(misc,getDisplayName), linebreak,
	"Launcher: ", [secondaryWeapon _unit] call EFUNC(misc,getDisplayName), linebreak	
];