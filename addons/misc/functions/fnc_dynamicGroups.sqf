#include "script_component.hpp"
/*======================================
	ghg_fnc_dynamicGroups
	Initializes dynamic groups for players and server
	Author: BSuz, Quantx
======================================*/
if ( !hasInterface ) exitWith {};

private _ghg = missionConfigFile >> "CfgGHG";
private _missionUseDG = [getNumber (_ghg >> "useDynamicGroups")] call FUNCMAIN(toBool);

if (!GVARMAIN(is_training) && _missionUseDG) then {
	if (isServer) then {["Initialize", [true]] call BIS_fnc_dynamicGroups;};
	if (hasInterface) then {
		waitUntil{!isNull player};
		["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
	};	
}; 
