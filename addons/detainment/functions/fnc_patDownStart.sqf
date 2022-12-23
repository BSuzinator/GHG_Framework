#include "script_component.hpp"
/*======================================
	ghg_detainment_fnc_patDownStart
	
	Pats down unit. Faster verion of Searching.
	
	Displays:
	Weapons
	Large Explosives
	Ballistic Vests (descriptionShort isNotEqualTo "No Armor")
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];


[_progressBarTitle, 10, {true}, FUNC(patDown), {systemChat "Aborted Pat Down"}] call CBA_fnc_progressBar;



//Moved to patDownStart
//[_progressBarTitle, 10, {true}, {hint "done"}, {systemChat "Aborted Pat Down"}] call CBA_fnc_progressBar;

/*
[player, bob] call ace_disarming_fnc_openDisarmDialog


private _vest = vest _player;

 
_protectedSelections = "isClass _x" configClasses (configfile >> "CfgWeapons" >> _vest >> "ItemInfo" >> "HitpointsProtectionInfo") apply {configName _x}; 
_totalArmor = 0; 
_totalPassThrough = 0; 
_selectionArmors = []; 
 
_protectedSelections apply { 
 
 _selectionArmor = getNumber (configfile >> "CfgWeapons" >> _vest >> "ItemInfo" >> "HitpointsProtectionInfo" >> _x >> "armor"); 
 _selectionPassThrough = getNumber (configfile >> "CfgWeapons" >> _vest >> "ItemInfo" >> "HitpointsProtectionInfo" >> _x >> "passThrough");//passThrouugh value, in case you need it 
 _totalArmor = _totalArmor + _selectionArmor; 
 _selectionArmors pushBack [_x,_selectionArmor]; 
}; 
 
 
systemchat format ["Vest: %1",_vest]; 
systemchat format ["Protects: %1",_selectionArmors]; 
systemchat format ["Total Armor: %1",_totalArmor]; 

*/