#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_3denSpawnEntities
	Author: BSuz
======================================*/
params ["_objectsToSpawn"];

{
create3DENEntity ["Object", "B_Quadbike_01_F", [995,12000,0], true]
} forEach _objectsToSpawn;