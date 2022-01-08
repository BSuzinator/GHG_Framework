#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_menuDialog
	Actual List for the admin menu
	Author: BSuz
======================================*/
private _player = player;
private _isAdmin = _player getVariable [QGVARMAIN(isAdmin), false];
private _isOfficer = _player getVariable [QGVARMAIN(isOfficer), false];
private _isJuniorOfficer = _player getVariable [QGVARMAIN(isJuniorOfficer), false];

_mainTitles = ["playerMenu", "GHG Player Menu", "popup"];
_menuOptions = [];

//Define Actions
_kickPlayer = ["Kick Player",FUNC(kickPlayerDialog),"","",[],-1,true,true];

//Define Submenu Actions
_vehicleSubmenu = [
	"Vehicle Submenu", //Title
	{}, //Action
	"a3\ui_f\data\gui\RscCommon\RscTree\hiddentexture_ca.paa", //Icon
	"Vehicle Actions Submenu", //Tooltip
	[
		"_this call ghg_playerMenu_fnc_vehicleSubmenu",	//Call menu
		"ghg_playerMenu_fnc_vehicleSubmenu",			//Display the menu
		1	//True? I guess?
	],
	-1, //Hotkey
	true, //Enabled
	true //Visible
];

_radioSubmenu = [
	"Radio Submenu",
	{},
	"a3\ui_f\data\gui\RscCommon\RscTree\hiddentexture_ca.paa",
	"Debug Radios Submenu",
	[
		"_this call ghg_playerMenu_fnc_debugRadioMenu",
		"ghg_playerMenu_fnc_debugRadioMenu",
		1
	],
	-1,
	true,
	true
];

//Add Menu Options here
_menuOptions pushback ["A Test",{hint "Hello World"; true},"","",[],-1,true,true];
if (_isAdmin) then {_menuOptions pushback _kickPlayer;};

//Sort non-submenu options alphabetically
_menuOptions sort false;

//Add Submenus
if (_isAdmin || _isOfficer || _isJuniorOfficer) then {_menuOptions pushback _vehicleSubmenu;};
_menuOptions pushback _radioSubmenu;

//Reverse and return menu
reverse _menuOptions;
_fullMenu = [_mainTitles, _menuOptions];
_fullMenu