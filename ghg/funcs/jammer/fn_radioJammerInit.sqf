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

	if ( ! isNil "ACRE_RADIO_JAMMERS" && _Px > 0.01 ) then
	{
		private _rxJam = 1;
		private _txJam = 1;

		private _rxPos = [_receiverClass] call acre_sys_radio_fnc_getRadioPos;
		private _txPos = [_transmitterClass] call acre_sys_radio_fnc_getRadioPos;

		{
			private _jrng = _x getVariable ["ACRE_JAMMING_RANGE", -1];
			
			private _rxDist = _rxPos distance2D _x;
			private _txDist = _txPos distance2D _x;
			
			if ( _jrng >= 0 && (getDammage _x) < 0.95 ) then
			{
				_rxJam = ( ( ( _rxDist - _jrng ) / _jrng ) max 0 ) min _rxJam;
				_txJam = ( ( ( _txDist - _jrng ) / _jrng ) max 0 ) min _txJam;
			};
		} forEach ACRE_RADIO_JAMMERS;
		
		// Don't completely block out the transmission
		_Px = (_Px * _rxJam * _txJam) max 0.01;
	};

	[_Px, _maxSignal];
}] call acre_api_fnc_setCustomSignalFunc;

diag_log "*** QuantX's ACRE2 Jammer Signal Processor Running ***";