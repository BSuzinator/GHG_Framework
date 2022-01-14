#include "script_component.hpp"
/*======================================
	ghg_fnc_ejectOnDeath
	Force ejects players from vehicles
	Author: BSuz
======================================*/
params ["_unit"];
{
	(_x select 0) action ["eject", _unit];
	[objNull, (_x select 0)] call ace_medical_treatment_fnc_unloadUnit;
} forEach fullCrew [_unit,"",true];

