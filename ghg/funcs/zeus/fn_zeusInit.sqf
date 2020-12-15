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
	[player, getPlayerUID player] remoteExecCall ["ghg_fnc_zeusSetup", 2];
};