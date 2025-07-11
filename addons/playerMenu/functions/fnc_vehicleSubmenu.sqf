#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_vehicleSubmenu
	Vehicle Actions for Player Menu
	Author: BSuz
======================================*/
private _subTitles = ["sub","Vehicle Actions","popup","",false];
private _subMenuOptions = [];
private _unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];
private _refuelVehicle = ["Refuel Vehicle",FUNC(refuelVehicle),"","",[],-1,true,true];
private _rearmVehicle  = ["Rearm Vehicle",FUNC(rearmVehicle),"","",[],-1,true,true];
private _repairVehicle = ["Repair Vehicle",FUNC(repairVehicle),"","",[],-1,true,true];
private _initRacks = ["Init Racks",FUNC(initRacks),"","",[],-1,true,true];

if (GVARMAIN(isAdmin) || GVARMAIN(isOfficer) || GVARMAIN(isJuniorOfficer)) then {
	_subMenuOptions pushback _refuelVehicle;
	_subMenuOptions pushback _repairVehicle;
	_subMenuOptions pushback _rearmVehicle;
};
_subMenuOptions pushback _unflipVehicle;
_subMenuOptions pushback _initRacks;
//Sort and return menu
_subMenuOptions sort true;
[_subTitles, _subMenuOptions]