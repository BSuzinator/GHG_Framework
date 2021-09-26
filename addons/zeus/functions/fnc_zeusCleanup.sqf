#include "script_component.hpp"
/*======================================
	ghg_fnc_zeusCleanup
	Cleans up after disconnected zeus units
	Author: Quantx
======================================*/
params ["_unit", "_id", "_uid", "_name"];

private _logic = getAssignedCuratorUnit _unit;
unassignCurator _logic;
deleteVehicle _logic;

true; // MUST BE LAST