/*======================================
	ghg_fnc_spectrumDeviceOverride
	Compute and distribute the most powerful override signal
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

if ( isNil "ACRE_JAMMER_OVERRIDES" ) then { ACRE_JAMMER_OVERRIDES = createHashMap; };

params ["_player", "_jammer", "_override"];

private _values = ACRE_JAMMER_OVERRIDES getOrDefault [netId _jammer, createHashMap, true ];

_values set [netId _player, _override];

{
	private _jVals = _y;
	private _jObj = objectFromNetId _x;
	
	private _maxOverride = 0;
	{
		_maxOverride = _maxOverride max _y;
	} forEach _jVals;
	
	_jObj setVariable [ "acre_jamming_override", _maxOverride, true ];
	
} forEach ACRE_JAMMER_OVERRIDES;