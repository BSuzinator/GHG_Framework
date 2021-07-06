/*======================================
	ghg_fnc_spectrumDeviceInit
	Sets up the spectrum device to track Jammers in the AO
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

missionNamespace setVariable ["#EM_FMin", 433];
missionNamespace setVariable ["#EM_FMax", 434];

missionNamespace setVariable ["#EM_SelMin", 433];
missionNamespace setVariable ["#EM_SelMax", 433.09];

missionNamespace setVariable ["#EM_Transmit", false];

missionNamespace setVariable ["#EM_SMin", -60];
missionNamespace setVariable ["#EM_SMax", -10];

if ( isNil "ACRE_RADIO_JAMMERS" ) then { ACRE_RADIO_JAMMERS = []; };

ACRE_SPECTRUM_OVERRIDE_MAX = 30;
ACRE_SPECTRUM_OVERRIDE = ACRE_SPECTRUM_OVERRIDE_MAX;

[ghg_fnc_spectrumDevice, 0, []] call CBA_fnc_addPerFrameHandler;