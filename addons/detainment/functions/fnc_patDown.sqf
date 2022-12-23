#include "script_component.hpp"
/*======================================
	ghg_detainment_fnc_patDown
	
	Pats down unit. Faster verion of Searching.
	
	Displays:
	Weapons
	Large Explosives
	Ballistic Vests (descriptionShort isNotEqualTo "No Armor")
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];

private _progressBarTitle = format ["Patting Down: %1", name _target];

private _vest = vest _player;

private _vestLevel = switch (getText (configfile >> "CfgWeapons" >> _vest >> "descriptionShort")) do {
	case "Armor Level 0";
	case "No Armor": 0;
	case "Armor Level 1";
	case "Armor Level I": 1;
	case "Armor Level 2";
	case "Armor Level II": 2;
	case "Armor Level 3";
	case "Armor Level III": 3;
	case "Armor Level 4";
	case "Armor Level IV": 4;
	case "Armor Level V": 6;
	case "Explosive Resistant": 7;
	default -1;
};
private _vestName = _vest call EFUNC(misc,getDisplayName);



