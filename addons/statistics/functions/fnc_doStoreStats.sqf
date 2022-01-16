#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_doStoreStats
    Store statistics to database on disconnect or mission end
	Called from: ghg_statistics_fnc_storeStatsEH
	Author: BSuz
======================================*/
if !(hasInterface) exitWith {};

if (GVARMAIN(is_training)) exitWith {diag_log "GHG: statistics not stored from training servers"};

diag_log "GHG: starting doStoreStats";

//%1,%2,%3,%4,%5,%6,%7,%8,%9,%10,%11,%12,%13,%14,%15,%16,%17,%18,%19,%20,%21,%22,%23,%24,%25,%26,%27,%28,%29,%30,%31,%32,%33,%34,%35,%36,%37,%38,%39,%40,%41,%42

GVAR(treatmentArray) params ["_bandageArray","_bloodArray","_plasmaArray","_salineArray","_medicineArray","_kitsArray"];
_bandageArray params ["_selfFieldDressings","_othersFieldDressings","_selfElasticBandages","_othersElasticBandages","_selfPackingBandages","_othersPackingBandages","_selfQuikclot","_othersQuikclot"];
_bloodArray params ["_self250Blood","_others250Blood","_self500Blood","_others500Blood","_self1000Blood","_others1000Blood"];
_plasmaArray params ["_self250Plasma","_others250Plasma","_self500Plasma","_others500Plasma","_self1000Plasma","_others1000Plasma"];
_salineArray params ["_self250Saline","_others250Saline","_self500Saline","_others500Saline","_self1000Saline","_others1000Saline"];
_medicineArray params ["_selfAdenosine","_othersAdenosine","_selfEpinephrine","_othersEpinephrine","_selfMorphine","_othersMorphine"];
_kitsArray params ["_selfBodyBag","_othersBodyBag","_selfPersonalAidKit","_othersPersonalAidKit","_selfSplint","_othersSplint","_selfStitch","_othersStitch","_selfTourniquet","_othersTourniquet"];

private _query = format ["UPDATE statistics SET selfFieldDressings = %1, othersFieldDressings = %2, selfElasticBandages = %3 , othersElasticBandages = %4 , selfPackingBandages = %5, othersPackingBandages = %6, selfQuikclot = %7, othersQuikclot = %8, self250Blood = %9, others250Blood = %10, self500Blood = %11, others500Blood = %12, self1000Blood = %13, others1000Blood = %14, self250Plasma = %15, others250Plasma = %16, self500Plasma = %17, others500Plasma = %18, self1000Plasma = %19, others1000Plasma = %20, self250Saline = %21, others250Saline = %22, self500Saline = %23, others500Saline = %24, self1000Saline = %25, others1000Saline = %26, selfAdenosine = %27, othersAdenosine = %28, selfEpinephrine = %29, othersEpinephrine = %30, selfMorphine = %31, othersMorphine = %32, selfBodyBag = %33, othersBodyBag = %34, selfPersonalAidKit = %35, othersPersonalAidKit = %36, selfSplint = %37, othersSplint = %38, selfStitch = %39, othersStitch = %40, selfTourniquet = %41, othersTourniquet = %42 WHERE steamID64 = %43",_selfFieldDressings,_othersFieldDressings,_selfElasticBandages,_othersElasticBandages,_selfPackingBandages,_othersPackingBandages,_selfQuikclot,_othersQuikclot,_self250Blood,_others250Blood,_self500Blood,_others500Blood,_self1000Blood,_others1000Blood,_self250Plasma,_others250Plasma,_self500Plasma,_others500Plasma,_self1000Plasma,_others1000Plasma,_self250Saline,_others250Saline,_self500Saline,_others500Saline,_self1000Saline,_others1000Saline,_selfAdenosine,_othersAdenosine,_selfEpinephrine,_othersEpinephrine,_selfMorphine,_othersMorphine,_selfBodyBag,_othersBodyBag,_selfPersonalAidKit,_othersPersonalAidKit,_selfSplint,_othersSplint,_selfStitch,_othersStitch,_selfTourniquet,_othersTourniquet,getPlayerUID player];

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

[_query, QFUNC(doStoreStatsCallback),[player]] call FUNCMAIN(spawnDB);