#include "script_component.hpp"
/*======================================
	ghg_fnc_respawnHandler
	Called on respawn
	Author: Quantx
======================================*/
params ["_unit", "_corpse"];

["unitRespawn", _this] call CBA_fnc_serverEvent;

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

//Handle if Training Server or not
if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then
{
	setPlayerRespawnTime 10;
	[_unit] call FUNC_INNER(gear,gearUp);
} 
else
{
	setPlayerRespawnTime 5000;
	//Respawn all units as rifleman
	[_unit, "soldier_f"] call FUNC_INNER(gear,gearUp);
	/*
	//Remove Traits from unit on respawn 
	_unit setUnitTrait ["engineer", false];
	_unit setUnitTrait ["explosiveSpecialist", false];
	_unit setUnitTrait ["Medic", false];
	_unit setUnitTrait ["UAVHacker", false];
	_unit setVariable ["ace_medical_medicClass", 0, true];
	_unit setVariable ["ACE_isEOD", false, true];
	_unit setVariable ["ACE_isEngineer", false, true];
	*/
};

//Set Player Scope Select time
_unit setVariable["ghg_last_respawn_time", time, true];

[_unit, _respawnPos] call _setPosAGLS;