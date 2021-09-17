#include "script_component.hpp"
/*======================================
	ghg_fnc_spectrumDeviceOverride
	Compute and distribute the most powerful override signal
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

if ( isNil QGVAR(jammer_overrides) ) then { GVAR(jammer_overrides) = createHashMap; };

params ["_player", "_jammer", "_override"];

private _values = GVAR(jammer_overrides) getOrDefault [netId _jammer, createHashMap, true ];

_values set [netId _player, _override];

{
	private _jVals = _y;
	private _jObj = objectFromNetId _x;
	
	private _maxOverride = 0;
	{
		_maxOverride = _maxOverride max _y;
	} forEach _jVals;
	
	_jObj setVariable [ "acre_jamming_override", _maxOverride, true ];
	
} forEach GVAR(jammer_overrides);