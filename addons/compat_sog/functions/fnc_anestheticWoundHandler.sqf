#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_anestheticWoundHandler.sqf
	Called when a unit recieves anesthetic damage
======================================*/
params ["_unit", "_allDamages", "_typeOfDamage"];

diag_log ["Anesthetic Wound Handler", _this];

// Knock out the unit for a set amount of time
[_unit, true, GVAR(anestheticPeriod)] call ace_medical_fnc_setUnconscious;

[] //return, no further damage handling