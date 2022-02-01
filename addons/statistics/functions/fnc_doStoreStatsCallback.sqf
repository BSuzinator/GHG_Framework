#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_doStoreStatsCallback
    Check at mission start for current stats
	Author: BSuz
======================================*/
params ["_args", "_sqlResult", "_errorMessage" ];

/*
if ( _errorMessage != "" ) exitWith {
    systemChat ("GHG interact misc 3 error: " + _errorMessage);
};
*/
diag_log _sqlResult;
diag_log _errorMessage;
diag_log "[GHG]: Statistics stored to database";

/*
_sqlResult params [
"_selfFieldDressings","_othersFieldDressings","_selfElasticBandages","_othersElasticBandages","_selfPackingBandages","_othersPackingBandages","_selfQuikclot","_othersQuikclot",
"_self250Blood","_others250Blood","_self500Blood","_others500Blood","_self1000Blood","_others1000Blood",
"_self250Plasma","_others250Plasma","_self500Plasma","_others500Plasma","_self1000Plasma","_others1000Plasma",
"_self250Saline","_others250Saline","_self500Saline","_others500Saline","_self1000Saline","_others1000Saline",
"_selfAdenosine","_othersAdenosine","_selfEpinephrine","_othersEpinephrine","_selfMorphine","_othersMorphine",
"_selfBodyBag","_othersBodyBag","_selfPersonalAidKit","_othersPersonalAidKit","_selfSplint","_othersSplint","_selfStitch","_othersStitch","_selfTourniquet","_othersTourniquet"];

if _selfFieldDressings then {
	GVAR(treatmentArray) = [
		//Bandages
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
	];
};

player setVariable ["ghg_treatmentArray",GVAR(treatmentArray),true];
*/