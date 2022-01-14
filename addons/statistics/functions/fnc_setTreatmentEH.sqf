#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_setTreatmentEH
	Sets event handlers for tracking statistics
	Author: BSuz
======================================*/
if (!hasInterface) exitWith {};
//if (isNil QGVAR(ghg_misc_fnc_treatmentNotifyEHID) && hasInterface) then {};
systemchat "setTreatmentEH called";
GVAR(treatmentComplete) = ["ace_treatmentSucceded", {
	params ["_caller", "_target", "_selectionName", "_className", "_itemUser", "_usedItem"];
	
	//Get all current values
	GVAR(treatmentArray) params ["_bandageArray","_bloodArray","_plasmaArray","_salineArray","_medicineArray","_kitsArray"];
	_bandageArray params ["_selfFieldDressings","_othersFieldDressings","_selfElasticBandages","_othersElasticBandages","_selfPackingBandages","_othersPackingBandages","_selfQuikclot","_othersQuikclot"];
	_bloodArray params ["_self250Blood","_others250Blood","_self500Blood","_others500Blood","_self1000Blood","_others1000Blood"];
	_plasmaArray params ["_self250Plasma","_others250Plasma","_self500Plasma","_others500Plasma","_self1000Plasma","_others1000Plasma"];
	_salineArray params ["_self250Saline","_others250Saline","_self500Saline","_others500Saline","_self1000Saline","_others1000Saline"];
	_medicineArray params ["_selfAdenosine","_othersAdenosine","_selfEpinephrine","_othersEpinephrine","_selfMorphine","_othersMorphine"];
	_kitsArray params ["_selfBodyBag","_othersBodyBag","_selfPersonalAidKit","_othersPersonalAidKit","_selfSplint","_othersSplint","_selfStitch","_othersStitch","_selfTourniquet","_othersTourniquet"];
	
	//Check if you are treating yourself or someone else
	_treatingSelf = _caller isEqualTo _target;
	
	//Switch between possible items used in treatments
	switch (_usedItem) do {
	case "ACE_fieldDressing":{if (_treatingSelf) then {_selfFieldDressings = _selfFieldDressings + 1;}else {_othersFieldDressings = _othersFieldDressings + 1;};};
	case "ACE_elasticBandage":{if (_treatingSelf) then {_selfElasticBandages = _selfElasticBandages + 1;}else {_othersElasticBandages = _othersElasticBandages + 1;};};
	case "ACE_packingBandage":{if (_treatingSelf) then {_selfPackingBandages = _selfPackingBandages + 1;}else {_othersPackingBandages = _othersPackingBandages + 1;};};
	case "ACE_quikclot":{if (_treatingSelf) then {_selfQuikclot = _selfQuikclot + 1;}else {_othersQuikclot = _othersQuikclot + 1;};};
	case "ACE_bloodIV_250":{if (_treatingSelf) then {_self250Blood = _self250Blood + 1;}else {_others250Blood = _others250Blood + 1;};};
	case "ACE_bloodIV_500":{if (_treatingSelf) then {_self500Blood = _self500Blood + 1;}else {_others500Blood = _others500Bloods + 1;};};
	case "ACE_bloodIV":{if (_treatingSelf) then {_self1000Blood = _self1000Blood + 1;}else {_others1000Blood = _others1000Blood + 1;};};
	case "ACE_bodyBag":{if (_treatingSelf) then {_selfBodyBag = _selfBodyBag + 1;}else {_othersBodyBag = _othersBodyBag + 1;};};
	case "ACE_adenosine":{if (_treatingSelf) then {_selfAdenosine = _selfAdenosine + 1;}else {_othersAdenosine = _othersAdenosine + 1;};};
	case "ACE_epinephrine":{if (_treatingSelf) then {_selfEpinephrine = _selfEpinephrine + 1;}else {_othersEpinephrine = _othersEpinephrine + 1;};};
	case "ACE_morphine":{if (_treatingSelf) then {_selfMorphine = _selfMorphine + 1;}else {_othersMorphine = _othersMorphine + 1;};};
	case "ACE_personalAidKit":{if (_treatingSelf) then {_selfPersonalAidKit = _selfPersonalAidKit + 1;}else {_othersPersonalAidKit = _othersPersonalAidKit + 1;};};
	case "ACE_plasmaIV_250":{if (_treatingSelf) then {_self250Plasma = _self250Plasma + 1;}else {_others250Plasma = _others250Plasma + 1;};};
	case "ACE_plasmaIV_500":{if (_treatingSelf) then {_self500Plasma = _self500Plasma + 1;}else {_others500Plasma = _others500Plasma + 1;};};
	case "ACE_plasmaIV":{if (_treatingSelf) then {_self1000Plasma = _self1000Plasma + 1;}else {_others1000Plasma = _others1000Plasma + 1;};};
	case "ACE_salineIV_250":{if (_treatingSelf) then {_self250Saline = _self250Saline + 1;}else {_others250Saline = _others250Saline + 1;};};
	case "ACE_salineIV_500":{if (_treatingSelf) then {_self500Saline = _self500Saline + 1;}else {_others500Saline = _others500Saline + 1;};};
	case "ACE_salineIV":{if (_treatingSelf) then {_self1000Saline = _self1000Saline + 1;}else {_others1000Saline = _others1000Saline + 1;};};
	case "ACE_splint":{if (_treatingSelf) then {_selfSplint = _selfSplint + 1;}else {_othersSplint = _othersSplint + 1;};};
	case "ACE_surgicalKit":{if (_treatingSelf) then {_selfStitch = _selfStitch + 1;}else {_othersStitch = _othersStitch + 1;};};
	case "ACE_tourniquet":{if (_treatingSelf) then {_selfTourniquet = _selfTourniquet + 1;}else {_othersTourniquet = _othersTourniquet + 1;};};
};
	
//Assemble treatment stats array
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

player setVariable ["ghg_treatmentArray",GVAR(treatmentArray),true];

}] call CBA_fnc_addEventHandler;

player setVariable ["ghg_treatmentSTATSEH",GVAR(treatmentComplete),true];