/*======================================
	ghg_fnc_respawnUpdateUI
	Updates spectator UI option for optout
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];

ZEUS_WAVE_RESPAWN_OPTOUT = !ZEUS_WAVE_RESPAWN_OPTOUT;

if ( ZEUS_WAVE_RESPAWN_OPTOUT ) then {
	// Player currently DOES NOT want to respawn
	_control ctrlSetText "\a3\Missions_F_Beta\data\img\portraitMPTypeDefense_ca.paa";
	_control ctrlSetTooltip "Click to respawn with next wave";
} else {
	// Player currently DOES want to respawn
	_control ctrlSetText "\a3\3den\data\cfgwaypoints\cycle_ca.paa";
	_control ctrlSetTooltip "Click to remain as a spectator";
};

_control ctrlCommit 0;