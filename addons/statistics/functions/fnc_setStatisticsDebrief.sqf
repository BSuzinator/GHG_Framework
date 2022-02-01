#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_setStatisticsDebrief
	Ends mission based on type
	Called from: ghg_zeus_fnc_endMission
	EFUNC(common,canInteractWith)
	Author: BSuz
======================================*/
GVAR(treatmentArray) params ["_bandageArray","_bloodArray","_plasmaArray","_salineArray","_medicineArray","_kitsArray"];
_bandageArray params ["_selfFieldDressings","_othersFieldDressings","_selfElasticBandages","_othersElasticBandages","_selfPackingBandages","_othersPackingBandages","_selfQuikclot","_othersQuikclot"];
_bloodArray params ["_self250Blood","_others250Blood","_self500Blood","_others500Blood","_self1000Blood","_others1000Blood"];
_plasmaArray params ["_self250Plasma","_others250Plasma","_self500Plasma","_others500Plasma","_self1000Plasma","_others1000Plasma"];
_salineArray params ["_self250Saline","_others250Saline","_self500Saline","_others500Saline","_self1000Saline","_others1000Saline"];
_medicineArray params ["_selfAdenosine","_othersAdenosine","_selfEpinephrine","_othersEpinephrine","_selfMorphine","_othersMorphine"];
_kitsArray params ["_selfBodyBag","_othersBodyBag","_selfPersonalAidKit","_othersPersonalAidKit","_selfSplint","_othersSplint","_selfStitch","_othersStitch","_selfTourniquet","_othersTourniquet"];

GVAR(bandageTotal) = 0;
{GVAR(bandageTotal) = GVAR(bandageTotal) + _x;} forEach _bandageArray;
GVAR(bandageTotal) = str GVAR(bandageTotal);

GVAR(bloodTotal) = 0;
{GVAR(bloodTotal) = GVAR(bloodTotal) + _x;} forEach _bloodArray;
GVAR(bloodTotal) = str GVAR(bloodTotal);

GVAR(medicineTotal) = 0;
{GVAR(medicineTotal) = GVAR(medicineTotal) + _x;} forEach _medicineArray;
GVAR(medicineTotal) = str GVAR(medicineTotal);

GVAR(kitsTotal) = 0;
{GVAR(kitsTotal) = GVAR(kitsTotal) + _x;} forEach _kitsArray;
GVAR(kitsTotal) = str GVAR(kitsTotal);

GVAR(fullDebriefText) = "";

GVAR(fullDebriefText) = format ["Bandage Total: %1<br/>Blood Total: %2<br/>Medicine Total: %3<br/>Kits Total: %4",
	GVAR(bandageTotal),
	GVAR(bloodTotal),
	GVAR(medicineTotal),
	GVAR(kitsTotal)
];