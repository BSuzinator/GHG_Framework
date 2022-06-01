#include "script_component.hpp"
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/

[] call FUNC(acreInit);
[] spawn FUNC(acreBabelInit);
[] call FUNC(radioJammerInit);
[] call FUNC(spectrumDeviceInit);
[] spawn FUNC(initPropRadios);
[] call FUNC(radioJammerSpawnModule);