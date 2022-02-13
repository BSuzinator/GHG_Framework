#include "script_component.hpp"
/*======================================
	ghg_zeus_fnc_aiSetAwareness
	Toggles AI Awareness
	Called from: ghg_zeus_fnc_aiSetAwarenessModule
	Author: BSuz
======================================*/
params ["_modulePos","_attachedObject"];
private _target = _attachedObject;
if !(_target isKindOf "Man") then {_target = crew _target select 0};
private _group = group _target;
if (combatMode _group isNotEqualTo "BLUE") then {
	_group setCombatMode "BLUE";
	_group setBehaviourStrong "CARELESS";
} else {
	_group setCombatMode "RED";
	_group setBehaviourStrong "COMBAT";	
};