#include "script_component.hpp"
/*======================================
    Callback for ghg_statistics_fnc_getStatsCallback
	Author: BSuz
======================================*/

params ["_args", "_sqlResult", "_errorMessage" ];
_player = _args select 0;
systemChat str _player;
/*
if ( _errorMessage != "" ) exitWith {
    systemChat ("GHG interact misc 3 error: " + _errorMessage);
};
*/
_sqlResult params ["_isAdmin","_isOfficer","_isJuniorOfficer","_isDegenerate"];

GVAR(treatmentArray) = [
	//Bandages
	[_selfFieldDressings,_othersFieldDressings,_selfElasticBandages,_othersElasticBandages,_selfPackingBandages,_othersPackingBandages,_selfQuikclot,_othersQuikclot],
	//Medicines
	[_selfAdenosine,_othersAdenosine,_selfEpinephrine,_othersEpinephrine,_selfMorphine,_othersMorphine],
	//Kits / Others
	[_selfBodyBag,_othersBodyBag,_selfPersonalAidKit,_othersPersonalAidKit,_selfSplint,_othersSplint,_selfStitch,_othersStitch,_selfTourniquet,_othersTourniquet],
	//Blood
	[_self250Blood,_others250Blood,_self500Blood,_others500Blood,_self1000Blood,_others1000Blood],
	//Plasma
	[_self250Plasma,_others250Plasma,_self500Plasma,_others500Plasma,_self1000Plasma,_others1000Plasma],
	//Saline
	[_self250Saline,_others250Saline,_self500Saline,_others500Saline,_self1000Saline,_others1000Saline]
];