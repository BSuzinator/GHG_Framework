/*======================================
	ghg_fnc_acreInit
	Sets long range radio channel names
	Author: Quantx
======================================*/
{
	private _preset = _x;
	{
		private _radio = _x;
		{
			private _name = _x;
			private _channel = _forEachIndex + 1;
			
			[_radio, _preset, _channel, "label", _name] call acre_api_fnc_setPresetChannelField;
		} forEach GHG_ACRE_LABELS;
	} forEach GHG_ACRE_RADIOS;
} forEach [ "default", "default2", "default3", "default4" ];

//Adds all players to God Mode Group 1
[allPlayers, 0] call acre_api_fnc_godModeModifyGroup;
//Adds all Officers to God Mode Group 2
[["76561198080019809","76561198048060619","76561198044516211","76561198130276179","76561197991330133"], 1] call acre_api_fnc_godModeModifyGroup;
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