#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_blackoutInit
	Force compiles blackout switch actions
	Use on "GHG_TransferSwitch_F"
	Author: BSuz
======================================*/
{[_x] call ACE_interact_menu_fnc_compileMenu;} forEach allMissionObjects "GHG_TransferSwitch_F";