#include "script_component.hpp"
/*======================================
	ghg_fnc_zeusCleanup
	Cleans up after disconnected zeus units
	Author: Quantx
======================================*/
if (!isServer) exitWith {};

params ["_unit", "_id", "_uid", "_name"];

private _logic = getAssignedCuratorUnit _unit;

if ! ( isNull _logic ) then
{
    unassignCurator _logic;
    deleteVehicle _logic;
};

false;