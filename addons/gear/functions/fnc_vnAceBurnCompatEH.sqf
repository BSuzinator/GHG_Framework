#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_vnAceBurnCompatEH
    Adds ACE Fire effects to units hit by flamethrowers
	Author: BSuz
======================================*/
params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit"];
private _flameProjectiles = ["vn_m7_ammo", "vn_m10_ammo", "vn_ato54_ammo"];
if (
	_projectile in _flameProjectiles 
	&&
	!(_unit call ace_fire_fnc_isBurning)
	) then {[_unit, 2.5] remoteExec ["ace_fire_fnc_burn", 0];};
0