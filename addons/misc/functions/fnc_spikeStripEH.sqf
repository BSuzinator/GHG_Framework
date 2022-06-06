#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripEH
	Event Handler for spike strips
	Author: BSuz
======================================*/
params ["_object1", "_object2", "_selection1", "_selection2", "_force"];
private _spikeStrip = _object1;
private _vehicle = _object2;

_hits =[]; 
_points = getAllHitPointsDamage _vehicle; 
{_hits pushBack [_points select 0 select _foreachindex,_vehicle selectionPosition (_points select 1 select _foreachindex)]} forEach (_points select 0); 
_hitWheels = _hits select {['wheel',(_x select 0)] call bis_fnc_inString}; 
{
	[_vehicle,[_hitWheels select _foreachindex select 0,1]] remoteExec ['setHitPointDamage',_vehicle];
} forEach _hitWheels;
deleteVehicle _spikeStrip;