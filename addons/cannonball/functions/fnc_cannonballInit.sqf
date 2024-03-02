#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_cannonballInit
	Called from Signup sign
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
GVAR(isRegistered) = true;
_this spawn FUNC(getSettings);
GVAR(isRunning)= false;
hintSilent "You have registered for\nThe Cannonball Run!\n\nDrive Safe!";