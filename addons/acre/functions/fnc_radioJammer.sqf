/*======================================
	ghg_fnc_radioJammer
	Called from jammer init box
	[this, 500] call ghg_fnc_radioJammer;
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

params ["_jammer", "_range"];

if ( isNil QGVAR(jammers) ) then
{
	GVAR(jammers) = [];
};

_jammer setVariable ["acre_jamming_range", _range];

GVAR(jammers) pushBackUnique _jammer;