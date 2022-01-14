#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_storeStatsEH
    Check at mission start for current stats
	Author: BSuz
======================================*/
//if ! (hasInterface) exitWith {};

private _playerDisconnectedEH = addMissionEventHandler ["PlayerDisconnected",
{
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
	[] call FUNC(doStoreStats);
	systemChat "Player statistics stored to database";
}];

private _mpEndedEH = addMissionEventHandler ["MPEnded", {
	[] call FUNC(doStoreStats);
	systemChat "Player statistics stored to database";
}];

player setVariable["ghg_statistics_playerDisconnectedEHID", _playerDisconnectedEH, true];
player setVariable["ghg_statistics_mpEndedEHID", _mpEndedEH, true];