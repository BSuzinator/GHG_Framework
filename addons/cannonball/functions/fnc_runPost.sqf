#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_runPost
	Called from action
	Author: BSuz
======================================*/
params ["_player"];

/*TODO:
	-Add in functions to send data to database
	-Add calculation for final time to store
	-Reset Variables
*/

//Return To Hub
call BIS_fnc_VRFadeOut;
_player setPos getPos cannonBallHub;
_player allowDamage true;
deleteVehicle _target;
call BIS_fnc_VRFadeIn;
RscFiringDrillTime_done = true;

GVAR(runTime) = GVAR(endTime) - GVAR(startTime);
[] spawn FUNC(doRunPost);