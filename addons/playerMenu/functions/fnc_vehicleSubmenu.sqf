#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_vehicleSubmenu
	Vehicle Actions for Player Menu
	Author: BSuz
======================================*/
private _player = player;
private _isAdmin = _player getVariable [QGVARMAIN(isAdmin), false];
private _isOfficer = _player getVariable [QGVARMAIN(isOfficer), false];
private _isJuniorOfficer = _player getVariable [QGVARMAIN(isJuniorOfficer), false];

_subTitles = ["sub","Vehicle Actions","popup","",false];
_subMenuOptions = [];
_unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];
_refuelVehicle = ["Refuel Vehicle",FUNC(refuelVehicle),"","",[],-1,true,true];
_rearmVehicle = ["Rearm Vehicle",FUNC(rearmVehicle),"","",[],-1,true,true];
_repairVehicle = ["Repair Vehicle",FUNC(repairVehicle),"","",[],-1,true,true];

if (_isAdmin || _isOfficer || _isJuniorOfficer) then {
	_subMenuOptions pushback _unflipVehicle;
	_subMenuOptions pushback _refuelVehicle;
	_subMenuOptions pushback _repairVehicle;
	_subMenuOptions pushback _rearmVehicle;
};

//Sort and return menu
_subMenuOptions sort true;
_subMenu = [_subTitles, _subMenuOptions];
_subMenu