#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripEH
	Event Handler for spike strips
	Author: BSuz
======================================*/
params ["_spikeStrip", "_vehicle", "_spikeStripSelection1", "_vehicleSelection", "_force"];

private _hits = []; 
private _points = getAllHitPointsDamage _vehicle; 
{_hits pushBack [_points select 0 select _foreachindex,_vehicle selectionPosition (_points select 1 select _foreachindex)]} forEach (_points select 0); 
private _hitWheels = _hits select {['wheel',(_x select 0)] call bis_fnc_inString}; 
{
	[_vehicle,[_hitWheels select _foreachindex select 0,1]] remoteExec ['setHitPointDamage',_vehicle];
} forEach _hitWheels;
deleteVehicle _spikeStrip;