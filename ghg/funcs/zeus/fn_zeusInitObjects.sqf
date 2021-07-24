/*======================================
	ghg_fnc_zeusInitObjects
	Adds synced objects to zeus module on init
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params ["_logic"];

ghg_fnc_zeusObjects = synchronizedObjects _logic;

deleteVehicle _logic;