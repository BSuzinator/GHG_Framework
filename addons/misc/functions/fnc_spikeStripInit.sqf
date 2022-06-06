#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripInit
	Init for spike stripls
	Author: BSuz
======================================*/
params ["_strip"];
_strip setDamage 1;

_strip spawn {
	params ["_strip"];
	
	waitUntil {nearestObjects [position _strip, ["Car"], 6] isNotEqualTo []};
	
	private _vehicle = nearestObjects [position _strip, ["Car"], 6] select 0;

	_hits =[]; 
	_points = getAllHitPointsDamage _vehicle; 
	{_hits pushBack [_points select 0 select _foreachindex,_vehicle selectionPosition (_points select 1 select _foreachindex)]} forEach (_points select 0); 
	_hitWheels = _hits select {['wheel',(_x select 0)] call bis_fnc_inString}; 
	{
		[_vehicle,[_hitWheels select _foreachindex select 0,1]] remoteExec ['setHitPointDamage',_vehicle];
	} forEach _hitWheels;
	deleteVehicle _strip;
	
};
