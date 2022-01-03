#include "script_component.hpp"
/*======================================
	ghg_adminMenu_fnc_menuInit
	Initializes adminMenu for all with Perms
	Opened with CTRL + F1
	Author: BSuz
======================================*/
#include "\a3\ui_f\hpp\definedikcodes.inc" //Include all codes for keys

[ 
	"Ghost Hawk Gaming",  
	"Open_Menu",
	[ 
		"player",  
		[],  
		-100,  
		"_this call ghg_adminMenu_fnc_menuDialog" 
	],  
	[0x3B,false,true,false] 
] call CBA_fnc_registerKeybindToFleximenu;