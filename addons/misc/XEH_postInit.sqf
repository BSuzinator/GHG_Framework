#include "script_component.hpp"
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/

[] call FUNC(addMinesToZeus);
[] call FUNC(ejectOnDeath);
[] call FUNC(vehicleActions);
[] call FUNC(treatmentNotify);
[] spawn FUNC(failDeadly);
[] spawn FUNC(makeBreifings);

[] call FUNC(initOWO);

[] call FUNC(cameraInit);

[] call FUNC(footsteps);