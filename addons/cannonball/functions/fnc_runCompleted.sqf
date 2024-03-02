#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_resetVars
	Called from cannonballEndTrigger
	Author: BSuz
======================================*/
params ["_player"];
GVAR(endTime) = time;
GVAR(isRunning)= false;
GVAR(runFinished) = true;
GVAR(runIncomplete) = false;
BIS_stopTimer = true;