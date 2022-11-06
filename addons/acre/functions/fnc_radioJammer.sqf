#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammer
	Called from jammer init box
	[this, 500] call ghg_acre_fnc_radioJammer;
	Author: Quantx
======================================*/
params ["_jammer", "_range"];

if (isServer) then {_this call FUNC(radioJammerEquip);};

if ( !hasInterface ) exitWith {};

if ( isNil QGVAR(jammers) ) then
{
	GVAR(jammers) = [];
};

_jammer setVariable ["acre_jamming_range", _range];

GVAR(jammers) pushBackUnique _jammer;