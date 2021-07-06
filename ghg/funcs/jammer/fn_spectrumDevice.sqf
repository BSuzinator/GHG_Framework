/*======================================
	ghg_fnc_spectrumDevice
	Simulates the spectrum device
	Author: Quantx
======================================*/
private _transmit = ((currentWeapon player) isEqualTo "hgun_esd_01_F") && (inputAction "defaultAction" > 0);

if ( _transmit ) then
{
	ACRE_SPECTRUM_OVERRIDE = (ACRE_SPECTRUM_OVERRIDE - diag_deltaTime) max 0;
}
else
{
	ACRE_SPECTRUM_OVERRIDE = (ACRE_SPECTRUM_OVERRIDE + diag_deltaTime) min ACRE_SPECTRUM_OVERRIDE_MAX;
};

private _progress = ACRE_SPECTRUM_OVERRIDE / ACRE_SPECTRUM_OVERRIDE_MAX;

missionNamespace setVariable ["#EM_Transmit", _transmit];
missionNamespace setVariable ["#EM_Progress", _progress];

private _sigs = [];
{
	private _jrng = (_x getVariable ["acre_jamming_range", 0]) * 2;

	private _dist = player distance _x;
	
	private _override = 0;
	
	if ( _jrng > 0 && _dist < _jrng && (getDammage _x) < 0.95 ) then {
		private _freq = 433 + (_forEachIndex + 1) * 0.1;
		private _inBand = ((missionNamespace getVariable "#EM_SelMin") < _freq) && (_freq < (missionNamespace getVariable "#EM_SelMax"));
		
		private _power = (((_jrng - _dist) / _jrng) max 0) min 1;
		
		private _lookAng = player weaponDirection currentWeapon player;
		private _diffAng = (getPos player) vectorFromTo (getPos _x);
		private _angle = (_lookAng vectorCos _diffAng) max 0;
		
		if ( _transmit && _inBand ) then
		{
			_override = (_angle ^ 20) * _progress;
		};
		
		_sigs pushBack _freq;
		_sigs pushBack (-60 + (50 * _power * _angle));
	};
	
	// Let the server know our new override status
	if ( (_x getVariable ["acre_jamming_override_last", 0]) != _override ) then
	{
		[player, _x, _override] remoteExecCall ["ghg_fnc_spectrumDeviceOverride", 2];
		_x setVariable ["acre_jamming_override_last", _override];
	};
	
} forEach ACRE_RADIO_JAMMERS;

missionNamespace setVariable ["#EM_Values", _sigs];