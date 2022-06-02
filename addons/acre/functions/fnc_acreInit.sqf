#include "script_component.hpp"
/*======================================
	ghg_fnc_acreInit
	Sets long range radio channel names
	Author: Quantx
======================================*/
GVAR(labels) = [
    "COMMAND",
    "ARMOR 1",
    "ARMOR 2",
    "AIR 1",
    "AIR 2",
    "LOGISTICS",
    "AUX 1",
    "AUX 2"
];

{
	private _preset = _x;
	{
		private _radio = _x;
		{
			private _name = _x;
            private _label = _x; // Used for radios without a screen
			private _channel = _forEachIndex + 1;
			
			[_radio, _preset, _channel, _label, _name] call acre_api_fnc_setPresetChannelField;
		} forEach GVAR(labels);
    } forEach ["ACRE_PRC152", "ACRE_PRC148", "ACRE_PRC117F"];
} forEach ["default", "default2", "default3", "default4"];

//Adds all players to God Mode Group 1
[allPlayers, 0] call acre_api_fnc_godModeModifyGroup;
//Adds all Officers to God Mode Group 2
if ( isServer ) then
{
    ["SELECT steamID64 FROM users WHERE isOfficer=1 OR isJuniorOfficer=1", QFUNC(acreOfficerGod), [], 0] call FUNCMAIN(spawnDB);
};

if ( !hasInterface ) exitWith {};

// Mute the radio
enableRadio false;
0 fadeRadio 0;

//Disables and sets channels
0 enableChannel [true, false];	//Global
1 enableChannel [true, false];	//Side
2 enableChannel [false, false];	//Command
3 enableChannel [true, false];	//Group (Cannot Be disabled)
4 enableChannel [false, false];	//Vehicle
5 enableChannel [false, false];	//Direct
6 enableChannel [false, false];	//System
setCurrentChannel 1;			//Set To Side Channel

private _freqPreset = getNumber( _ghgCfg >> (switch (playerSide) do {
    case west: {"bluFreq"};
    case east: {"opfFreq"};
    case resistance: {"indFreq"};
	case civilian: {"civFreq"};
    default {"civFreq"};
}));

if ( _freqPreset < 1 || _freqPreset > 4 ) then {
    diag_log ["Invalid frequency preset, using default", playerSide, _freqPreset];
    _freqPreset = 1;
};

private _presetName = "default";
if ( _freqPreset > 1 ) then {
    _presetName = _presetName + str _freqPreset;
};

{
    [_x, _presetName] call acre_api_fnc_setPreset;
} forEach ["ACRE_PRC343", "ACRE_PRC77", "ACRE_PRC117F", "ACRE_PRC152", "ACRE_PRC148", "ACRE_PRC77"];