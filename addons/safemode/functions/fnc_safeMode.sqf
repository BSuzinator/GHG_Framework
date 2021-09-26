#include "script_component.hpp"
/*======================================
	ghg_fnc_safeMode
	Deletes projectile if fired
	Author: Quantx
======================================*/
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if ( isNil QGVAR(safe) ) exitWith {};

if ( GVAR(safe) ) then
{
	deleteVehicle _projectile;
	systemChat "Safe Mode is enabled, your weapons will not fire!";
};