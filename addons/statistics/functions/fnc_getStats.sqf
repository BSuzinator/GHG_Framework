#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_getStats
    Check at mission start for current stats
	Author: BSuz
======================================*/
if ! (hasInterface) exitWith {};

if (isServer) then {
	GVAR(treatmentArray) = [
        //Bandages
        [0,0,0,0,0,0,0,0],
        //Blood
        [0,0,0,0,0,0],
        //Plasma
        [0,0,0,0,0,0],
        //Saline
        [0,0,0,0,0,0],
        //Medicines
        [0,0,0,0,0,0],
        //Kits / Others
        [0,0,0,0,0,0,0,0,0,0]
	];
	diag_log "GHG: Local hosted servers do not have access to DB";
};

[{(getPlayerUID player) isNotEqualTo ""},
{
    private _uid = getPlayerUID player;
    private _query = format ["SELECT selfFieldDressings,othersFieldDressings,selfElasticBandages,othersElasticBandages,selfPackingBandages,othersPackingBandages,selfQuikclot,othersQuikclot,self250Blood,others250Blood,self500Blood,others500Blood,self1000Blood,others1000Blood,self250Plasma,others250Plasma,self500Plasma,others500Plasma,self1000Plasma,others1000Plasma,self250Saline,others250Saline,self500Saline,others500Saline,self1000Saline,others1000Saline,selfAdenosine,othersAdenosine,selfEpinephrine,othersEpinephrine,selfMorphine,othersMorphine,selfBodyBag,othersBodyBag,selfPersonalAidKit,othersPersonalAidKit,selfSplint,othersSplint,selfStitch,othersStitch,selfTourniquet,othersTourniquet FROM statistics WHERE steamID64=%1", _uid];
    diag_log format ["[GHG]: Getting statistics for %1 with PID: %2", name player, _uid];
    [_query, QFUNC(getStatsCallback),[]] call FUNCMAIN(spawnDB);
}] call CBA_fnc_waitUntilAndExecute;