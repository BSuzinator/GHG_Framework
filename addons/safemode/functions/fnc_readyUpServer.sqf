#include "script_component.hpp"
/*======================================
	ghg_fnc_readyUpServer
	Disables safemode when all sides are ready
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

// Check if it's time to start
if ( GVAR(ready_blu) && GVAR(ready_opf) && GVAR(ready_ind) ) then
{
	skipTime (GVAR(start_time) - daytime); // Roll back time to the start of the mission

	[
		false,
		"Safe Mode is now disabled, weapons are hot!",
		5,
		"All sides ready, weapons hot in five seconds!"
	] remoteExec [QFUNC(safeModeTrigger), 0, "ghg_safemode_update"]; // Make sure JIP's are notified
};
