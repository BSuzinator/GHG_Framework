#include "script_component.hpp"
/*======================================
	ghg_detainment_fnc_stripUnit
	
	Strips unit of all gear
	
	Author: BSuz
======================================*/
params ["_target","_player","_actionParams"];
private _gearPile = "GroundWeaponHolder" createVehicle position _target;

//Get all gear
private _itemsList = items _target;
private _magazineList = magazines _target;
private _assignedItemsList = assignedItems _target;
private _uniform = uniform _target;
private _vest = vest _target;
private _backpack = backpack _target;
private _headgear = headgear _target;
private _weaponsItems = weaponsItems _target;

/*
private _binoItems = [binocular _target];
_binoItems append binocularItems _target;
_binoBipod = _binoItems # 4;
_binoItems set [4,[]];
_binoItems set [5,[]];
_binoItems set [6,_binoBipod];
_weaponsItems pushBack _binoItems;
*/

//remove all gear
{
	if (_x isNotEqualTo "ACRE_Radio_Flagged") then {
		_target unassignItem _x;
		_target removeItem _x;
	};
} forEach _assignedItemsList;
removeAllItemsWithMagazines _target;
removeVest _target;
removeBackpack _target;
removeHeadgear _target;
removeAllWeapons _target;

//If target is alive, leave uniform on
if !(alive _target) then {
	removeUniform _target;
	_gearPile addItemCargoGlobal [_uniform, 1];
};

//Add items to Container
{_gearPile addWeaponWithAttachmentsCargoGlobal [_x, 1];} forEach _weaponsItems;
{_gearPile addItemCargoGlobal [_x, 1];} forEach _itemList;
{_gearPile addMagazineCargoGlobal [_x, 1];} forEach _magazineList;
_gearPile addItemCargoGlobal [_vest, 1];
_gearPile addBackpackCargoGlobal [_backpack, 1];
_gearPile addItemCargoGlobal [_headgear, 1];