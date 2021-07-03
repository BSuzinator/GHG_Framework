/*======================================
	ghg_fnc_zeusInit
	Handles zeus slot management
	Author: Quantx
======================================*/
if ( isServer ) then
{
	addMissionEventHandler ["HandleDisconnect", ghg_fnc_zeusCleanup];
};

if ( hasInterface ) then
{
	// Ensure virtual zeus players are invincible
	if ( player isKindOf "VirtualCurator_F" ) then { player allowDamage false; };
	[player, getPlayerUID player] remoteExecCall ["ghg_fnc_zeusSetup", 2];
};
