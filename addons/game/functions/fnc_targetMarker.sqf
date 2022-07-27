#include "script_component.hpp"
/*======================================
	ghg_game_fnc_targetMarker
	Draws markers for target
	Author: BSuz
======================================*/
if !(hasinterface) exitWith {};

private _targetMarkerText = format ["Target: %1", name GVAR(Target)];
GVAR(targetMarker) setMarkerTextLocal _targetMarkerText;
GVAR(targetMarker) setMarkerPosLocal getPos GVAR(target);
GVAR(targetAreaMarker) setMarkerPosLocal getPos GVAR(target);