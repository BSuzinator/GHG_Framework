#include "script_component.hpp"
/*======================================
	ghg_game_fnc_civGearUp
	Assigns civilian gear on start
	Author: BSuz
======================================*/
private _civUniforms = getArray (configFile >> "CfgGameLoot" >> "CivUniforms");
private _civBackpacks = getArray (configFile >> "CfgGameLoot" >> "CivBackpacks");

private _randomUniform = selectRandom _civUniforms;
private _randomBackpack = selectRandom _civBackpacks;

private _civLoadout = [
	[],	//Primary Weapon
	[],	//Launcher
	[], //Secondary Weapon
	[_randomUniform,
		[
		["ACE_elasticBandage", 2],
		["ACE_packingBandage", 2],
		["ACE_Morphine", 1],
		["ACE_EarPlugs", 1]
		]
	],	//Uniform
	[],	//Vest
	[_randomBackpack,[]],	//Backpack
	"",	//Helmet/Hat
	"",	//Facewear?
	[],	//NVGs?
	["ItemMap","ItemGPS","","ItemCompass","ItemWatch",""]
];
player setUnitLoadout _civLoadout;