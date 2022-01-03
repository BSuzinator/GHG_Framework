#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_menuDialog
	Actual List for the admin menu
	Author: BSuz
======================================*/
_mainTitles = ["adminMenu", "Admin Menu", "popup"];
_kickPlayer = ["Kick Player",FUNC(kickPlayerDialog),"","",[],-1,true,true];
_unflipVehicle = ["Unflip Vehicle",FUNC(unflipVehicle),"","",[],-1,true,true];
[	_mainTitles, 
	[ 
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
		]
	] 
];