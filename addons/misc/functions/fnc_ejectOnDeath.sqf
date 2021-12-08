#include "script_component.hpp"
/*======================================
	ghg_fnc_ejectOnDeath
	Force ejects players from vehicles on vehicle death
	Author: BSuz
======================================*/
if (!isServer) exitWith {};
{
[_x, "killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	if ((_unit isKindOf "AllVehicles") && !(_unit isKindOf "Man")) then {
			{
				(_x select 0) action ["eject", _unit];
				[objNull, (_x select 0)] call ace_medical_treatment_fnc_unloadUnit;
			} forEach fullCrew [_unit,"",true];
	};
}] call CBA_fnc_addBISEventHandler;
} forEach vehicles;