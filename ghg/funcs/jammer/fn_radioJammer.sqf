if ( !hasInterface ) exitWith {};

params ["_jammer", "_range"];

if ( isNil "ACRE_RADIO_JAMMERS" ) then
{
	ACRE_RADIO_JAMMERS = [];
};

_jammer setVariable ["ACRE_JAMMING_RANGE", _range];

ACRE_RADIO_JAMMERS pushBackUnique _jammer;