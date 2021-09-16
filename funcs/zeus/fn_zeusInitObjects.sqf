/*======================================
	ghg_fnc_zeusInitObjects
	Adds synced objects to zeus module on init
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params ["_logic"];

ghg_fnc_zeusObjects = synchronizedObjects _logic;

diag_log (format ["ghg_fnc_zeusObjects initialized with %1 objects", count ghg_fnc_zeusObjects ]);

deleteVehicle _logic;