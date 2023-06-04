#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_menuDialog
	Actual List for the admin menu
	Author: BSuz
======================================*/
private _mainTitles = ["playerMenu", "GHG Player Menu", "popup"];
private _menuOptions = [];

//Define Actions
private _forceLogoutAdmin = ["Logout Current Admin",{"#logout" remoteExec ["serverCommand",-2];},"","",[],-1,true,true];
private _loginAdmin = ["Login as Admin",{serverCommand "#login";},"","",[],-1,true,true];
private _kickPlayer = ["Kick Player",FUNC(kickPlayerDialog),"","",[],-1,true,true];
private _storeStats = ["Store stats to DB",ghg_statistics_fnc_doStoreStats,"","",[],-1,true,true];
private _toggleRFF = ["Toggle RFF",FUNC(toggleRFF),"","",[],-1,true,true];
private _coinflip = ["Flip a Coin",EFUNC(downtime,coinflip),"","",[],-1,true,true];

//Define Submenu Actions
private _vehicleSubmenu = [
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

private _radioSubmenu = [
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
_menuOptions pushback _storeStats;
_menuOptions pushback _toggleRFF;
_menuOptions pushback _coinflip;
//_menuOptions pushback ["A Test",{hint "Hello World"; true},"","",[],-1,true,true];
if (GVARMAIN(isAdmin)) then {_menuOptions pushback _kickPlayer;_menuOptions pushback _forceLogoutAdmin;};

//Sort non-submenu options alphabetically
_menuOptions sort false;

//Add Submenus
if (GVARMAIN(isAdmin) || GVARMAIN(isOfficer) || GVARMAIN(isJuniorOfficer)) then {_menuOptions pushback _loginAdmin;_menuOptions pushback _vehicleSubmenu;};
_menuOptions pushback _radioSubmenu;

//Reverse and return menu
reverse _menuOptions;

[_mainTitles, _menuOptions]