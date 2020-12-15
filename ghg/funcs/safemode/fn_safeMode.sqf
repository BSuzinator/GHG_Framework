/*======================================
	ghg_fnc_safeMode
	Deletes projectile if fired
	Author: Quantx
======================================*/
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if ( isNil "SAFE_MODE_ENABLED" ) exitWith {};

if ( SAFE_MODE_ENABLED ) then
{
	deleteVehicle _projectile;
	systemChat "Safe Mode is enabled, your weapons will not fire!";
};