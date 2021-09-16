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

if ( isNil QGVAR(jammers) ) then { GVAR(jammers) = []; };

GVAR(override_max) = 30;
GVAR(override) = GVAR(override_max);

[FUNC(spectrumDevice), 0, []] call CBA_fnc_addPerFrameHandler;