#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_spawnRadio
	Spawns radios from debug menu
	Author: BSuz
======================================*/
params ["_menuSTR"];
private _spawnedRadioSTR = "";

switch (_menuSTR) do {
	case "343": {
		//player addItem "ACRE_PRC343";
		(uniformContainer player) addItemCargoGlobal ["ACRE_PRC343", 1];
		_spawnedRadioSTR = "AN/PRC-343";
	};
	case "152": {
		//player addItem "ACRE_PRC152";
		(vestContainer player) addItemCargoGlobal ["ACRE_PRC152", 1];
		_spawnedRadioSTR = "AN/PRC-152";		
	};
	case "117": {
		if (backpack player isEqualTo "") then {player addBackpack "B_AssaultPack_blk";};
		//player addItemToBackpack "ACRE_PRC117F";
		(backpackContainer player) addItemCargoGlobal ["ACRE_PRC117F", 1];
		_spawnedRadioSTR = "AN/PRC-117F";
	};
	case "77": {
		if (backpack player isEqualTo "") then {player addBackpack "B_AssaultPack_blk";};
		//player addItemToBackpack "ACRE_PRC77";
		(backpackContainer player) addItemCargoGlobal ["ACRE_PRC77", 1];
		_spawnedRadioSTR = "AN/PRC-77";
	};
    default { _spawnedRadioSTR = "radio" };
};

private _str = format ["%1 has spawned a(n) %2 from player menu",name player,_spawnedRadioSTR];
_str remoteExecCall ["systemChat", 0];