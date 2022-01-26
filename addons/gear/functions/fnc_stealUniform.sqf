#include "script_component.hpp"
/*======================================
	ghg_fnc_stealUniform
    Adds action to steal uniform from unit
	Called from init box of unit that uniform can be stolen from
	[this] call ghg_fnc_stealUniform;
======================================*/
params ["_host"];
_fnc_switchUniform = {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_targetUniform = uniform _target;
	_unitUniform = uniform _caller;
	_unitUniformItems = uniformItems _caller;
	removeUniform _target;
	removeUniform _caller;
	_caller forceAddUniform _targetUniform;
	{_caller addItemToUniform _x;}forEach _unitUniformItems;
	[ _target, _actionId ] call BIS_fnc_holdActionRemove;
	
	_uniformPile = createVehicle["GroundWeaponHolder", position _caller,[],0,"CAN_COLLIDE"];
	_uniformPile addItemCargoGlobal [_unitUniform,1];
};

_actionIcon = "\a3\ui_f_orange\Data\CfgOrange\Missions\action_escape_ca.paa";

[_host, "Steal Uniform", _actionIcon, _actionIcon, "uniform _target isNotEqualTo """"", "true", {}, {}, _fnc_switchUniform, {}, [], 5, nil, true, false] call BIS_fnc_holdActionAdd;