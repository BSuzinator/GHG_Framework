#include "script_component.hpp"
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/
//Run on EVERY mission file

//Don't delete
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
//Run ONLY ON GHG MISSIONS
[] call FUNC(aiGearModule);
[] call FUNC(gearUp);
[] call FUNC(resupplyActions);
[] call FUNC(resupplyModule);
[] call FUNC(wreckInit);
[] call FUNC(deleteScopes);
[] call FUNC(anestheticInit);

["gearUp", FUNC(gearUp)] call CBA_fnc_addEventHandler;

player addEventHandler ["HandleDamage", {_this call FUNC(vnAceBurnCompatEH);}];