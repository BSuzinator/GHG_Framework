#include "script_component.hpp"
/*======================================
	ghg_fnc_blackoutEnable
	Enables given lights

	Author: BSuz
======================================*/
//Do Enable
params ["_hostObject", "_lamps"];

_hostObject animateSource ["switchposition",1];
_hostObject animateSource ["light",1];  
_hostObject setObjectTextureGlobal [1,"#(argb,0,0.8,0)color(1,0,0,0.05,ca)"];

{
	for "_i" from 0 to count getAllHitPointsDamage _x do
	{
		_x setHitIndex [_i, 0];
		_x switchLight "ON";
	};
	_x switchLight "ON";
} forEach _lamps;