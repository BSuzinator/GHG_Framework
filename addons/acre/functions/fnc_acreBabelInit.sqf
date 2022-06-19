#include "script_component.hpp"
/*======================================
	ghg_fnc_acreBabelInit
	Sets up Babel
	Author: BSuz
======================================*/
//Check if system enabled
private _ghgCfg = missionConfigFile >> "CfgGHG";
if (getNumber(_ghgCfg >> "useBabel") == 0) exitWith {diag_log "[GHG]: Babel not enabled"};

if ( isNil QGVAR(babelLangs) ) then // Only initialize this once
{
    // https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes

    GVAR(babelLangs) = [
        ["en", "English"],
        ["fr", "French" ],
        ["el", "Greek"  ],
        ["fa", "Farsi"  ],
        ["ru", "Russian"],
        ["es", "Spanish"],
        ["zh", "Chinese"],
        ["ar", "Arabic" ]
    ];
    
    { _x call acre_api_fnc_babelAddLanguageType; } forEach GVAR(babelLangs);
    
    // Load spoken languages from config
    GVAR(babelLangsSide) = createHashMap;
    
    GVAR(babelLangsSide) set [west, getArray(_ghgCfg >> "bluLanguages")];
    GVAR(babelLangsSide) set [east, getArray(_ghgCfg >> "opfLanguages")];
    GVAR(babelLangsSide) set [resistance, getArray(_ghgCfg >> "indLanguages")];
    GVAR(babelLangsSide) set [civilian, getArray(_ghgCfg >> "civLanguages")];
    GVAR(babelLangsSide) set [sideLogic, ["all"]]; //Zeus speaks all languages
};

//Get Type of Unit for interpreters
params [ 
    ["_unit", player, [objNull]],
    ["_unitType", "", [""]]
];
if ( _unitType isEqualTo "" ) then {
    _unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
};

if ( isNull _unit ) exitWith { systemChat "No unit specified for babelInit" };

private _side = side _unit;
if ( _unit isEqualTo player ) then { _side = playerSide }; // Handles a weird edge case where "side _unit" is not valid

//Switch spoken languages from config
private _ghgCfg = missionConfigFile >> "CfgGHG";
private _langs = GVAR(babelLangsSide) getOrDefault [_side, []];

if (_unitType isEqualTo "ghg_plt_interp") then {
    // Append additional languages to the ones spoken by the side
    _langs append getArray(_ghgCfg >> "interpLanguages");
};

private _sl = [];

// Ensure that all languages are added in the order in which they appear in babelLangs
if ( "all" in _langs ) then {
    _sl = GVAR(babelLangs) apply {_x select 0};
} else {
    {
        _x params ["_tag", "_name"];
        if (_tag in _langs) then {_sl pushBack _tag};
    } forEach GVAR(babelLangs);
};

if ( (count _sl) == 0 ) then {
    diag_log ["Unit speaks no languages!", _unit, _side];
};

//Set the spoken languages
_sl call acre_api_fnc_babelSetSpokenLanguages;

//Set first spoken language as currently speaking
[_sl select 0] call acre_api_fnc_babelSetSpeakingLanguage;