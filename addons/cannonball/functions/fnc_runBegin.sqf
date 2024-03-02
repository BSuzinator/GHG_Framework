#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_runBegin
	Called from cannonballStartTrigger
	Author: BSuz
======================================*/
params ["_player"];
GVAR(isRunning)= true;
GVAR(runFinished) = false;
["#025D00"] spawn BIS_fnc_VRTimer;
GVAR(startTime) = time;
GVAR(runIncomplete) = true;
_player allowDamage false;