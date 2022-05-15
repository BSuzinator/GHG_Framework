#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyModule
	Adds module for zeus to spawn resupply crates
	Author: BSuz
======================================*/

if ( isServer ) then
{
    GVAR(crateList) = [];

    ["addCrateList", {
        if ( _this isEqualType [] ) then
        {
            GVAR(crateList) append _this;
            
            { ["lockCrate", [_x, EGVAR(safemode,safe)], "lockCrate_" + (netId _x)] call CBA_fnc_globalEventJIP; } forEach _this;
        }
        else
        {
            GVAR(crateList) pushBack _this;
            ["lockCrate", [_this, EGVAR(safemode,safe)], "lockCrate_" + (netId _this)] call CBA_fnc_globalEventJIP;
        };
    }] call CBA_fnc_addEventHandler;
};

["lockCrate", {(_this # 0) lockInventory (_this # 1)}] call CBA_fnc_addEventHandler;

private _function = {
	params ["_modulePos","_attachedObject"];

	[
		"Spawn Resupply",
		[
			[
				"SIDES",
				"Select Side of resupply crate",
				[],
				true
			],
			[
                "CHECKBOX",
                "Airdrop Crate",
                false,
                true
			]
		],
        {
            (_this select 0) params ["_factionSide", "_isAirdrop"];
            (_this select 1) params ["_modulePos","_attachedObject"];
            
            if ((count _factionSide) != 1) exitWith {
                systemChat "Pick one faction";
            };
            
            [_factionSide select 0, FUNC(zeusSpawnResupplyCrate), [_modulePos, _attachedObject, _isAirdrop]] call FUNC(resupplyMenu);
        },
		{},
		[
			_modulePos,
			_attachedObject
		]
	] call zen_dialog_fnc_create;
};
["Ghost Hawk Gaming", "Resupply - Spawn Crate", _function] call zen_custom_modules_fnc_register;