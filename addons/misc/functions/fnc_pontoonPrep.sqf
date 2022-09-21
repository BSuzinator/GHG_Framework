#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonPrep
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _static = _target;
if !(typeOf _static isEqualTo "rhs_pontoon_end_static") exitWith {};

_static setVectorUp [0,0,1];

[_static,"rhs_pontoon_static_base"] call FUNC(pontoonSnap);