#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_runRestart
	Restarts run
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _vehicle = _target;
GVAR(endTime) = time;
BIS_stopTimer = true;
GVAR(runIncomplete) = true;
systemChat format ["Your time was:\n%1",RscFiringDrillTime_current];
call BIS_fnc_VRFadeOut;

_vehicle setPosATL getPosATL cannonballStart;
_vehicle setVectorUp surfaceNormal getPosASL cannonballStart;
_vehicle setDir getDir cannonballStart;
_vehicle setDamage 0;
_vehicle setFuel 1;

call BIS_fnc_VRFadeIn;