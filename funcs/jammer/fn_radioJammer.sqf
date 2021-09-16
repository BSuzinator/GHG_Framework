/*======================================
	ghg_fnc_radioJammer
	Called from jammer init box
	[this, 500] call ghg_fnc_radioJammer;
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

params ["_jammer", "_range"];

if ( isNil "ACRE_RADIO_JAMMERS" ) then
{
	ACRE_RADIO_JAMMERS = [];
};

_jammer setVariable ["acre_jamming_range", _range];

ACRE_RADIO_JAMMERS pushBackUnique _jammer;