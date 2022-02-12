#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyMenu
	Creates list of crates availible to players based on faction
	Author: Quantx
======================================*/
params ["_target", "_player", "_args"];
_args params ["_building"];

// This is why 'private' is important!
private ["_factionLoadout", "_loadout", "_camoId"];
[] call FUNC(getLoadout);

if ( isNull _factionLoadout ) exitWith {};

private _crateList = configProperties [ _factionLoadout >> "Crates", "isClass _x", true ];
private _crateCfg  = [];
private _crateName = [];

diag_log _crateList;

{
    // Skip crates with no classname
    private _cfgn = configName _x;
    if ( (_cfgn != "crate_base") && { (getText (_x >> "classname")) != "" } ) then
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
	FUNC(resupplyCreate),
	{},
	[
		_target,
		_player,
		_building,
		_camoId
	]
] call zen_dialog_fnc_create;
