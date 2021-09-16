/*======================================
	ghg_fnc_zeusInitObjects
	Adds synced objects to zeus module on init
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params ["_logic"];

GVAR(zeusObjects) = synchronizedObjects _logic;

diag_log (format ["%1 initialized with %2 objects", QGVAR(zeusObjects), count GVAR(zeusObjects) ]);

deleteVehicle _logic;