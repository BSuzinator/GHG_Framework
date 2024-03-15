#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_doRunPost
    Store statistics to database on disconnect or mission end
	Called from: ghg_statistics_fnc_storeStatsEH
	Author: BSuz
======================================*/
if !(hasInterface) exitWith {};

#ifndef DISABLE_COMPILE_CACHE
if (isServer && hasInterface && !isDedicated) exitWith {diag_log "GHG: Local hosted servers do not have access to DB";};
#endif

diag_log "[GHG]: starting doRunPost";

private _query = format ["INSERT INTO cannonball_runs (steamID,raceClass,raceTime) VALUES ('%1','%2','%3');",getPlayerUID player, GVAR(raceClass), GVAR(runTime)];

/*
[_selfFieldDressings,_othersFieldDressings,_selfElasticBandages,_othersElasticBandages,_selfPackingBandages,_othersPackingBandages,_selfQuikclot,_othersQuikclot],
	//Blood
	[_self250Blood,_others250Blood,_self500Blood,_others500Blood,_self1000Blood,_others1000Blood],
	//Plasma
	[_self250Plasma,_others250Plasma,_self500Plasma,_others500Plasma,_self1000Plasma,_others1000Plasma],
	//Saline
	[_self250Saline,_others250Saline,_self500Saline,_others500Saline,_self1000Saline,_others1000Saline],
	//Medicines
	[_selfAdenosine,_othersAdenosine,_selfEpinephrine,_othersEpinephrine,_selfMorphine,_othersMorphine],
	//Kits / Others
	[_selfBodyBag,_othersBodyBag,_selfPersonalAidKit,_othersPersonalAidKit,_selfSplint,_othersSplint,_selfStitch,_othersStitch,_selfTourniquet,_othersTourniquet]
*/

//private _query = format ["SELECT selfFieldDressings,othersFieldDressings,selfElasticBandages,othersElasticBandages,selfPackingBandages,othersPackingBandages,selfQuikclot,othersQuikclot,self250Blood,others250Blood,self500Blood,others500Blood,self1000Blood,others1000Blood,self250Plasma,others250Plasma,self500Plasma,others500Plasma,self1000Plasma,others1000Plasma,self250Saline,others250Saline,self500Saline,others500Saline,self1000Saline,others1000Saline,selfAdenosine,othersAdenosine,selfEpinephrine,othersEpinephrine,selfMorphine,othersMorphine,selfBodyBag,othersBodyBag,selfPersonalAidKit,othersPersonalAidKit,selfSplint,othersSplint,selfStitch,othersStitch,selfTourniquet,othersTourniquet FROM statistics WHERE steamID64=%1", getPlayerUID player];

[_query, QFUNC(doRunPostCallback),[]] call FUNCMAIN(spawnDB);
diag_log "[GHG]: Run stored to database";