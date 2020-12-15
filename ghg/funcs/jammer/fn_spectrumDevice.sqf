/*======================================
	ghg_fnc_spectrumDevice
	Sets up the spectrum device to track Jammers in the AO
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

missionNamespace setVariable ["#EM_FMin", 433];
missionNamespace setVariable ["#EM_FMax", 434];

missionNamespace setVariable ["#EM_SelMin", 433];
missionNamespace setVariable ["#EM_SelMax", 433.1];

missionNamespace setVariable ["#EM_Transmit", false];

missionNamespace setVariable ["#EM_SMin", -60];
missionNamespace setVariable ["#EM_SMax", -10];

if ( isNil "ACRE_RADIO_JAMMERS" ) then { ACRE_RADIO_JAMMERS = []; };

[{
	private _sigs = [];
	
	{
		private _jrng = (_x getVariable ["ACRE_JAMMING_RANGE", -1]) * 2;
		
		if ( _jrng >= 0 && (getDammage _x) < 0.95 ) then {
			private _freq = 433 + (_forEachIndex + 1) * 0.1;
			
			private _dist = player distance2d _x;
			private _power = (((_jrng - _dist) / _jrng) max 0) min 1;
			
			private _lookAng = player weaponDirection currentWeapon player;
			private _diffAng = (getPos player) vectorFromTo (getPos _x);
			private _angle = (_lookAng vectorCos _diffAng) max 0;
			
			_sigs pushBack _freq;
			_sigs pushBack (-60 + (50 * _power * _angle));
		};
	} forEach ACRE_RADIO_JAMMERS;
	
	missionNamespace setVariable ["#EM_Values", _sigs];
}, 0, []] call CBA_fnc_addPerFrameHandler;