#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_vehicleSubmenu
	Vehicle Actions for Admin Menu
	Author: BSuz
======================================*/
private _player = player;
private _isAdmin = _player getVariable [QGVARMAIN(isAdmin), false];
private _isOfficer = _player getVariable [QGVARMAIN(isOfficer), false];
private _isJuniorOfficer = _player getVariable [QGVARMAIN(isJuniorOfficer), false];

_subTitles = ["Vehicle Actions", "", "", false];
_subMenuOptions = [];
_unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];

if (_isAdmin || _isOfficer || _isJuniorOfficer) then {
	_subMenuOptions pushback _unflipVehicle;
};
_subMenuOptions pushback ["Sub Test",{hint "Goodbye World"; true},"","",[],-1,true,true];

//Sort and return menu
_subMenuOptions sort true;
_subMenu = [_subTitles, _subMenuOptions];
_subMenu