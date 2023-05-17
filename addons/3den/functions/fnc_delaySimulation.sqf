#include "script_component.hpp"
/*======================================
	ghg_3den_fnc_delaySimulation
	Delays vehicle simulation and damage by 30 seconds
	Author: BSuz
======================================*/
params ["_object","_enabled"];
systemChat str ([_object, _enabled] + "BEFORE WAIT");
if !(_enabled) exitWith {};
if (simulationEnabled _object) then {_object enableSimulationGlobal false;};
if (isDamageAllowed _object) then {_object allowDamage false;};
waitUntil {getClientState isEqualTo "BRIEFING READ"};
sleep 30;
systemChat str ([_object, _enabled] + "AFTER WAIT");
_object allowDamage true;
_object enableSimulationGlobal true;