#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
/*======================================
    Everything in this file is run once prior to the breifing
	Author: CBA_3
======================================*/

GVARMAIN(is_mission_ghg) = isClass (missionConfigFile >> "CfgGHG");

ADDON = true;