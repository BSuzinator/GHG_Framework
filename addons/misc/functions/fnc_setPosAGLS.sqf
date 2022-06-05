#include "script_component.hpp"
/*======================================
	ghg_fnc_setPosAGLS
    Set position in AGLS format
	Author: Quantx
======================================*/
params ["_obj", "_pos"];
private _offset = _pos select 2;
if (isNil "_offset") then {_offset = 0};
_pos set [2, worldSize];
_obj setPosASL _pos;
_pos set [2, vectorMagnitude (_pos vectorDiff getPosVisual _obj) + _offset];
_obj setPosASL _pos;
_pos;