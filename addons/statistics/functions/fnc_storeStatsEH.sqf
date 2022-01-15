#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_storeStatsEH
    Check at mission start for current stats
	Author: BSuz
======================================*/
//if ! (hasInterface) exitWith {};

private _playerDisconnectedEH = addMissionEventHandler ["PlayerDisconnected", FUNC(doStoreStats)];

private _mpEndedEH = addMissionEventHandler ["MPEnded", FUNC(doStoreStats)];

private _EndedEH = addMissionEventHandler ["Ended", FUNC(doStoreStats)];

player setVariable["ghg_statistics_playerDisconnectedEHID", _playerDisconnectedEH, true];
player setVariable["ghg_statistics_mpEndedEHID", _mpEndedEH, true];
player setVariable["ghg_statistics_EndedEHID", _mpEndedEH, true];

diag_log "store data EH loaded";