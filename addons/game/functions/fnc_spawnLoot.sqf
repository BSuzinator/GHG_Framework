#include "script_component.hpp"
/*======================================
	ghg_game_fnc_spawnLoot
	Spawns vehicles and loot across play area at start
	Author: BSuz
======================================*/
private _landVehicles = getArray (configFile >> "CfgGameLoot" >> "Loot_LandVehicles");
private _weapons = getArray (configFile >> "CfgGameLoot" >> "Loot_Weapons");
private _explosives = getArray (configFile >> "CfgGameLoot" >> "Loot_Explosives");
private _grenades = getArray (configFile >> "CfgGameLoot" >> "Loot_Grenades");
private _items = getArray (configFile >> "CfgGameLoot" >> "Loot_Items");

//{systemChat str _x} forEach [_landVehicles,_weapons,_explosives,_grenades,_items];

private _mkrPos = markerPos "gamePlayZone";
private _mkrSize = markerSize "gamePlayZone";

private _mkrPosX = _mkrPos select 0;
private _mkrPosY = _mkrPos select 1;

private _mkrSizeX = _mkrSize select 0;
private _mkrSizeY = _mkrSize select 1;

private _minX = _mkrPosX - _mkrSizeX;
private _maxX = _mkrPosX + _mkrSizeX;

private _minY = _mkrPosY - _mkrSizeY;
private _maxY = _mkrPosY + _mkrSizeY;

private _xLength = abs (_maxX - _minX);
private _yLength = abs (_maxY - _minY);

private _randX = 0;
private _randY = 0;
private _randPos = [_randX,_randY,5];

private _vehicleCount = 100;
//Start with dummy object

for "_i" from 1 to _vehicleCount do { 

	private _randVehClass = selectRandom _landVehicles;
	
	while {  
		(surfaceIsWater _randPos) ||   
		(_randPos isFlatEmpty  [-1, -1, 0.6, 17, -1] isEqualTo [])  ||
		!(_randPos inArea "gamePlayZone") ||
		!(_randPos nearObjects [ "LandVehicle", 150] isEqualTo []) ||
		!( (isOnRoad _randPos) || (_randPos nearObjects [ "House", 12] isEqualTo [])) ||
		(_randPos nearRoads 60 isEqualTo []) 
	} do {
		_randX = _minX + (random _xLength);
		_randY = _minY + (random _yLength);
		_randPos = [_randX,_randY,1];
		//systemChat str ["Pos:",_randPos,"Surface:",surfaceNormal _randPos];
	};
	
	private _newVeh = createVehicle [_randVehClass, _randPos];
	_newVeh allowDamage false;
	_newVeh enableSimulation false;
	
	//systemChat str [_newVeh,_randPos];
	
	clearItemCargoGlobal _newVeh;
	clearMagazineCargoGlobal _newVeh;
	clearWeaponCargoGlobal _newVeh;
	clearBackpackCargoGlobal _newVeh;
	
	
	private _randWeap = selectRandom _weapons;
	private _randExp = selectRandom _explosives;
	private _randGrenade = selectRandom _grenades;
	private _randItem = selectRandom _items;
	
	//systemChat str [_randWeap,_randExp,_randGrenade,_randItem];
	
	_newVeh addWeaponCargoGlobal [(_randWeap select 0),1];
	_newVeh addMagazineCargoGlobal [_randWeap select 1, ((random (_randWeap select 2) + 1))];
	_newVeh addItemCargoGlobal [_randItem, random 1];
	_newVeh addItemCargoGlobal [_randGrenade, random 1];
	_newVeh addItemCargoGlobal [_randExp, random 1];
	_newVeh addItemCargoGlobal ["FirstAidKit", random 2];
	_newVeh addItemCargoGlobal ["Medikit", random 2];
	
	_newVeh setDir (random 360);
	
	_newVeh allowDamage true;
	_newVeh enableSimulation true;
	
	_randPos = [0,0,0];
};
























