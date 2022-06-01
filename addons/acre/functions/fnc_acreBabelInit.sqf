#include "script_component.hpp"
/*======================================
	ghg_fnc_acreBabelInit
	Sets up Babel
	Author: BSuz
======================================*/
//Check if system enabled
private _useBabel = getNumber ( missionConfigFile >> "CfgGHG" >> "useBabel" );
if (_useBabel isNotEqualTo 1) exitWith {diag_log "[GHG]: Babel not enabled"};

//Get Type of Unit for interpreters
params [
    ["_unit", player, [objNull]],
    ["_unitType", "", [""]]
];
if ( _unitType isEqualTo "" ) then {
    _unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
};

//Make sure player is loaded
waitUntil{!isNull player};

//Add languages to use
["en", "English"] call acre_api_fnc_babelAddLanguageType;
["fr", "French"] call acre_api_fnc_babelAddLanguageType;
["gr", "Greek"] call acre_api_fnc_babelAddLanguageType;
["ir", "Iranian"] call acre_api_fnc_babelAddLanguageType;
["ru", "Russian"] call acre_api_fnc_babelAddLanguageType;
["sp", "Spanish"] call acre_api_fnc_babelAddLanguageType;

//Switch spoken languages from config
private _ghgCfg = missionConfigFile >> "CfgGHG";
private _languages = getArray ( _ghgCfg >> (switch (side _unit) do {
    case west: {"bluLanguages"};
    case east: {"opfLanguages"};
    case resistance: {"indLanguages"};
	case civilian: {"civLanguages"};
    default {""};
}));

//Zeus speaks all languages
if ((side _unit) isEqualTo sideLogic) then {_languages = ["English","French","Greek","Iranian","Russian","Spanish"];};

//Interpreters have special languages
if (_unitType isEqualTo "ghg_plt_interp") then {_languages = getArray (_ghgCfg >> "interpLanguages");};



//Convert config to IDs
private _spokenKeys = [];
{
	_languageDisplayName = _x;
	_languageKey = switch (_languageDisplayName) do {
		case "English": {"en"};
		case "French": {"fr"};
		case "Greek": {"gr"};
		case "Iranian": {"ir"};
		case "Russian": {"ru"};
		case "Spanish": {"sp"};
	};
	_spokenKeys pushBackUnique _languageKey;
} forEach _languages;

//Set the spoken languages
_spokenKeys call acre_api_fnc_babelSetSpokenLanguages;

//Set first spoken language as currently speaking
[(_spokenKeys select 0)] call acre_api_fnc_babelSetSpeakingLanguage;


//Handle seperate radio frequencies per side
waitUntil {GVAR(acreInitComplete)};
if (getNumber ( missionConfigFile >> "CfgGHG" >> "useSideFreqs" ) isNotEqualTo 1) exitWith {diag_log "[GHG]: Side Freqs not configured."};

private _freq = getNumber ( _ghgCfg >> (switch (side _unit) do {
    case west: {"bluFreq"};
    case east: {"opfFreq"};
    case resistance: {"indFreq"};
	case civilian: {"civFreq"};
    default {"civFreq"};
}));

switch (_freq) do {
	case 1: {
		["ACRE_PRC343", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC117F", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC152", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC148", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default" ] call acre_api_fnc_setPreset;
	};
	case 2: {
		["ACRE_PRC343", "default2" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default2" ] call acre_api_fnc_setPreset;
		["ACRE_PRC117F", "default2" ] call acre_api_fnc_setPreset;
		["ACRE_PRC152", "default2" ] call acre_api_fnc_setPreset;
		["ACRE_PRC148", "default2" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default2" ] call acre_api_fnc_setPreset;
	};
	case 3: {
		["ACRE_PRC343", "default3" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default3" ] call acre_api_fnc_setPreset;
		["ACRE_PRC117F", "default3" ] call acre_api_fnc_setPreset;
		["ACRE_PRC152", "default3" ] call acre_api_fnc_setPreset;
		["ACRE_PRC148", "default3" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default3" ] call acre_api_fnc_setPreset;
	};
	case 4: {
		["ACRE_PRC343", "default4" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default4" ] call acre_api_fnc_setPreset;
		["ACRE_PRC117F", "default4" ] call acre_api_fnc_setPreset;
		["ACRE_PRC152", "default4" ] call acre_api_fnc_setPreset;
		["ACRE_PRC148", "default4" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default4" ] call acre_api_fnc_setPreset;
	};
	default {
		["ACRE_PRC343", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC117F", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC152", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC148", "default" ] call acre_api_fnc_setPreset;
		["ACRE_PRC77", "default" ] call acre_api_fnc_setPreset;
	};
};