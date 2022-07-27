#include "script_component.hpp"
/*======================================
	ghg_game_fnc_gameInit
	Initializes THE GAME
	Author: BSuz
======================================*/
if !(GVARMAIN(is_game)) exitWith {};
if !(isServer) exitWith {};

remoteExec [QFUNC(getTarget), civilian];
remoteExec [QFUNC(targetMarkerInit), civilian];