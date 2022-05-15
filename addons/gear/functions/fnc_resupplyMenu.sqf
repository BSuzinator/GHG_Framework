#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyMenu
	Creates list of crates availible to players based on faction
	Author: Quantx
======================================*/
params [
    ["_factionSide", sideEmpty, [sideEmpty]],
    ["_callback", {}, [{}]],
    ["_callbackArgs", [], [[]]]
];

private _factionLoadout = [_factionSide] call FUNC(getFactionLoadout);
if ( isNull _factionLoadout ) exitWith {};

private _crateList = configProperties [ _factionLoadout >> "Crates", "true", true ];
private _crateCfg  = [];
private _crateName = [];

//diag_log _crateList;

{
    // Skip crates with no classname
    private _cfgn = configName _x;
    if ( (_cfgn != "ghg_crate_base") && { (getText (_x >> "classname")) != "" } ) then
    {
        private _dn = _x >> "displayname";
        _crateName pushBack (if ( isText _dn ) then { getText _dn } else { _cfgn });
        _crateCfg  pushBack _x;
    };
} forEach _crateList;

if ( (count _crateCfg) == 0 ) exitWith { systemChat "No crates in list" };

[
	"Request Resupply",
	[
		[
			"LIST",
			"Choose a resupply package",
			[
				_crateCfg,
				_crateName,
				0,
				(10 min ((count _crateCfg) + 0.5))
			]
		]
	],
    _callback,
	{},
	_callbackArgs
] call zen_dialog_fnc_create;