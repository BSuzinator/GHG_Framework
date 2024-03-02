#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_raceStart
	Called from vehicle per class
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
_params params ["_raceClass"];
GVAR(raceClass) = _raceClass;
call BIS_fnc_VRFadeOut;

private _vehicleClass = switch (_raceClass) do {
	case 0: {"CUP_C_Golf4_kitty_Civ"};
	case 1: {"C_SUV_01_F"};
	case 2: {"C_Hatchback_01_sport_F"};
	default {"C_Quadbike_01_F"};
};


_vehicle = createVehicle [_vehicleClass, position cannonballStart, [], 0, "CAN_COLLIDE"];
if (_vehicle isEqualTo objNull) exitWith {call BIS_fnc_VRFadeIn;systemChat "Unable to Initialize Cannonball Run."};
_vehicle setDir getDir cannonballStart;

_player moveInDriver _vehicle;
_vehicle lock true;

call BIS_fnc_VRFadeIn;
GVAR(isRunning)= true;
GVAR(runFinished) = false;
GVAR(runIncomplete) = true;
