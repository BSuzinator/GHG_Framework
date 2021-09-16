#include "script_component.hpp"
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/

private _args = [player, didJIP];
_args call FUNC(addMinesToZeus);
_args call FUNC(checkFuelLevel);
_args call FUNC(engineOff);
_args call FUNC(reversePlanes);
_args call FUNC(roadCheck);
_args call FUNC(makeBreifings);