#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnUpdateUI
	Updates spectator UI option for optout
	Author: Quantx
======================================*/
disableserialization;

if ( !hasInterface ) exitWith {};

params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];

GVAR(optout) = !GVAR(optout);

if ( GVAR(optout) ) then {
	// Player currently DOES NOT want to respawn
	_control ctrlSetText "\a3\Missions_F_Beta\data\img\portraitMPTypeDefense_ca.paa";
	_control ctrlSetTooltip "Click to respawn in next wave";
    setPlayerRespawnTime DUMMY_WAIT_TIME;
} else {
	// Player currently DOES want to respawn
	_control ctrlSetText "\a3\3den\data\cfgwaypoints\cycle_ca.paa";
	_control ctrlSetTooltip "Click to remain as a spectator";
    setPlayerRespawnTime ((GVAR(optout_time) - time) max 0);
};

[player, GVAR(optout)] remoteExecCall [QFUNC(respawnTimer), 2];

_control ctrlCommit 0;