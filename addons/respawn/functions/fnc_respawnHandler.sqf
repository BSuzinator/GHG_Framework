#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnHandler
	Called on respawn
	Author: Quantx
======================================*/
params ["_unit", "_corpse"];

private _setPosAGLS = {
	params ["_obj", "_pos", "_offset"];
	_offset = _pos select 2;
	if (isNil "_offset") then {_offset = 0};
	_pos set [2, worldSize]; 
	_obj setPosASL _pos;
	_pos set [2, vectorMagnitude (_pos vectorDiff getPosVisual _obj) + _offset];
	_obj setPosASL _pos;
};

private _respawnPos = markerPos (switch (side _unit) do {
			case west: {"respawn_west"};
			case east: {"respawn_east"};
			case resistance: {"respawn_guerilla"};
			case civilian: {"respawn_civilian"};
		});

// Transfer zeus module to new unit
private _logic = getAssignedCuratorLogic _corpse;
if ( ! isNull _logic ) then
{
    unassignCurator _logic;
    _unit assignCurator _logic;
};

//Respawn all units as rifleman
[_unit, "soldier_f"] call FUNC_INNER(gear,gearUp);
_unit setUnitTrait ["engineer", false];
_unit setUnitTrait ["explosiveSpecialist", false];
_unit setUnitTrait ["Medic", false];
_unit setUnitTrait ["UAVHacker", false];
_unit setVariable ["ace_medical_medicClass", 0, true];
_unit setVariable ["ACE_isEOD", false, true];
_unit setVariable ["ACE_isEngineer", false, true];

//Sets respawn time
if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then
{
	setPlayerRespawnTime 30;
} 
else
{
	setPlayerRespawnTime 5000;
};


[_unit, _respawnPos] call _setPosAGLS;