#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
/*======================================
    Everything in this file is run once prior to the breifing
	Author: CBA_3
======================================*/

GVARMAIN(is_mission_ghg) = isMultiplayer && (isClass (missionConfigFile >> "CfgGHG"));
GVARMAIN(is_training) = 0 < getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" );
GVARMAIN(is_game) = 0 < getNumber ( missionConfigFile >> "CfgGHG" >> "isGame" );

ADDON = true;