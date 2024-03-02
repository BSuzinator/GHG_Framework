#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_runCancel
	Cancels run and returns player to hub
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
GVAR(endTime) = time;
BIS_stopTimer = true;
GVAR(runIncomplete) = true;
hintSilent format ["Your time was:\n%1",RscFiringDrillTime_current];
call BIS_fnc_VRFadeOut;

_player setPos getPos cannonBallHub;
_player allowDamage true;
deleteVehicle _target;
call BIS_fnc_VRFadeIn;
RscFiringDrillTime_done = true;