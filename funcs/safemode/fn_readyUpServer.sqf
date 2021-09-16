/*======================================
	ghg_fnc_readyUpServer
	Disables safemode when all sides are ready
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

// Check if it's time to start
if ( SAFE_MODE_READY_BLU && SAFE_MODE_READY_OPF && SAFE_MODE_READY_IND ) then
{
	skipTime (SAFE_MODE_TIME - daytime); // Roll back time to the start of the mission

	[
		false,
		"Safe Mode is now disabled, weapons are hot!",
		5,
		"All sides ready, weapons hot in five seconds!"
	] remoteExec ["ghg_fnc_safeModeTrigger", 0, "ghg_safemode_update"]; // Make sure JIP's are notified
};
