#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammerInit
	Called on mission start to activate all jammers
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

[{
	params ["_f", "_mW", "_receiverClass", "_transmitterClass"];

	// Remember our custom signal function
	private _tempFunc = acre_sys_signal_customSignalFunc;
	acre_sys_signal_customSignalFunc = nil;

	// Call original jammer function
	private _baseSignal = _this call acre_sys_signal_fnc_getSignal;

	// Restore custom signal function
	acre_sys_signal_customSignalFunc = _tempFunc;

	_baseSignal params ["_Px", "_maxSignal"];

	if ( ! isNil QGVAR(jammers) && _Px > 0.01 ) then
	{
		private _jam = 1;

		private _rxPos = [_receiverClass] call acre_sys_radio_fnc_getRadioPos;
		private _txPos = [_transmitterClass] call acre_sys_radio_fnc_getRadioPos;

		{
			private _jrng = _x getVariable ["acre_jamming_range", 0];
			
			private _rxDist = _rxPos distance _x;
			private _txDist = _txPos distance _x;
			
			if ( _jrng > 0 && (getDammage _x) < 0.95 ) then
			{	
				private _rxJam = ( ( _rxDist - _jrng ) / _jrng ) max (_x getVariable ["acre_jamming_override", 0]);
				private _txJam = ( ( _txDist - _jrng ) / _jrng ) max (_x getVariable ["acre_jamming_override", 0]);
			
				_jam = _jam min (_txJam min _rxJam);
			};
		} forEach GVAR(jammers);

		_Px = (_Px * _jam) max 0.01;
	};

	[_Px, _maxSignal];
}] call acre_api_fnc_setCustomSignalFunc;

diag_log "*** QuantX's ACRE2 Jammer Signal Processor Running ***";