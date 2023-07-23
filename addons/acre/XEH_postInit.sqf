#include "script_component.hpp"
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/
//Run on EVERY mission file
[] spawn FUNC(initPropRadios);

//Don't delete
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
//Run ONLY ON GHG MISSIONS
[] call FUNC(acreInit);
[{!(isNull player)}, FUNC(acreBabelInit), []] call CBA_fnc_waitUntilAndExecute;
[] call FUNC(radioJammerInit);
[] call FUNC(spectrumDeviceInit);
[] call FUNC(radioJammerSpawnModule);

