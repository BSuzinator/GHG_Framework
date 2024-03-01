#include "script_component.hpp"
#include "cbaKeybinds.sqf";
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/
//Run on EVERY mission file
[] call FUNC(initOWO);
[] call FUNC(treatmentNotify);
[] call FUNC(cameraInit);
[] call FUNC(vehicleActionsInit);
[] call FUNC(fixHueyHud);

if (hasInterface) then {
    [missionNamespace, "OnDisplayRegistered", FUNC(registerJukeboxTracks)] call BIS_fnc_addScriptedEventHandler;
};

//Don't delete
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
//Run ONLY ON GHG MISSIONS
[] call FUNC(addMinesToZeus);
[] call FUNC(blackoutInit);
[] spawn FUNC(failDeadly);
[] spawn FUNC(makeBreifings);
[] spawn FUNC(dynamicGroups);
[] call FUNC(footsteps);
[] spawn FUNC(crashTP);