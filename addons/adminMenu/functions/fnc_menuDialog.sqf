#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_menuDialog
	Actual List for the admin menu
	Author: BSuz
======================================*/
private _player = player;
private _isAdmin = _player getVariable [QGVARMAIN(isAdmin), false];
private _isOfficer = _player getVariable [QGVARMAIN(isOfficer), false];
private _isJuniorOfficer = _player getVariable [QGVARMAIN(isJuniorOfficer), false];

_mainTitles = ["adminMenu", "Admin Menu", "popup"];
_menuOptions = [];
_kickPlayer = ["Kick Player",FUNC(kickPlayerDialog),"","",[],-1,true,true];
_unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];

if (_isAdmin) then {_menuOptions pushback _kickPlayer;};

if (_isAdmin || _isOfficer || _isJuniorOfficer) then {
	_menuOptions pushback _unflipVehicle;
};
//_menuOptions pushback "_this call ghg_adminMenu_fnc_vehicleSubmenu";
_menuOptions pushback ["A Test",{hint "Hello World"; true},"","",[],-1,true,true];

//Sort and return menu
//_menuOptions sort true;
_fullMenu = [_mainTitles, _menuOptions];
_fullMenu