#include "script_component.hpp"
/*======================================
    Callback for ghg_fnc_toBool
	Takes data and converts to boolean value.
	Supports: Array,Int,String,Scalar
	Usage: _bool = [_toCheck] call ghg_fnc_toBool;
	Author: BSuz
======================================*/
params ["_toCheck"];
_boolReturn = false;
_boolReturn = switch (typeName _toCheck) do {
	case "ARRAY" : {
		if (_toCheck isNotEqualTo []) then {true} else {false}};
	case "SCALAR" : {
		if (_toCheck > 0) then {true} else {false}};
	case "STRING" : {
		if (_toCheck isNotEqualTo "") then {true} else {false}};
	case "TEXT" : {
		if (_toCheck isNotEqualTo "") then {true} else {false}};
};
_boolReturn