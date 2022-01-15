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

//Handle if Training Server or not
if (GVARMAIN(is_training)) then
{
	["setPlayerRespawnTime", [10]] call CBA_fnc_localEvent;
	["gearUp", [_unit]] call CBA_fnc_localEvent;
} 
else
{
    ["setPlayerRespawnTime", [DUMMY_WAIT_TIME]] call CBA_fnc_localEvent;
};

//Set Player Scope Select time
_unit setVariable[QGVAR(last_respawn_time), time, true];

[_unit, _respawnPos] call _setPosAGLS;