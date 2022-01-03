#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_menuDialog
	Actual List for the admin menu
	Author: BSuz
======================================*/
systemChat str _this;
_mainTitles = ["adminMenu", "Admin Menu", "popup"];
_kickPlayer = ["Kick Player",FUNC(kickPlayerDialog),"","",[],-1,true,true];
_unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];

_menuOptions = [
	_kickPlayer,
	_unflipVehicle,	
	[ 
		"Test 3", 
		{hint "Goodbye World"; true}, 
		"", 
		"", 
		[], 
		-1, 
		true, 
		true 
	],
	[ 
		"A Test", 
		{hint "Hello World"; true}, 
		"", 
		"", 
		[], 
		-1, 
		true, 
		true 
	]
];
//Sort and return menu
_menuOptions sort true;
_fullMenu = [_mainTitles, _menuOptions];
_fullMenu