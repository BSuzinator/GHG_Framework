#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_menuInit
	Initializes playerMenu for all with Perms
	Opened with CTRL + F1
	Author: BSuz
======================================*/
if ! ( hasInterface ) exitWith {};

[ 
	"Ghost Hawk Gaming","Open_Menu","Admin Menu",
	[ 
		"player",  
		[],  
		-100,  
		"_this call ghg_playerMenu_fnc_menuDialog"
	],  
	[59 ,false,true,false],
	false,
	0,
	false
] call cba_fnc_addKeybindToFleximenu;