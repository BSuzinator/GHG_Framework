#include "script_component.hpp"
/*======================================
	ghg_fnc_blackoutDisable
	Disables given lights

	Author: BSuz
======================================*/
//Do Disable
params ["_hostObject", "_lamps"];
_hostObject animateSource ["switchposition",0];
_hostObject animateSource ["light",1];  
_hostObject setObjectTextureGlobal [1,"#(argb,8,8,3)color(1,0,0,0.05,ca)"];

{
	for "_i" from 0 to count getAllHitPointsDamage _x do
	{
		_x setHitIndex [_i, 0.97];
		_x switchLight "OFF";
	};
	_x switchLight "OFF";
} forEach _lamps;