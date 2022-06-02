#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_toggleRFF
	Toggles other's punishments for shooting current player
	Author: BSuz
======================================*/
GVARMAIN(rffDisabled) = !GVARMAIN(rffDisabled);
if (GVARMAIN(rffDisabled)) then {systemChat "Disabled RFF"} else {systemChat "Enabled RFF"};