#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_deleteScopes
	Called upon a units death
======================================*/
["removePrimaryWeaponItem", {(_this # 0) removePrimaryWeaponItem (_this # 1)}] call CBA_fnc_addEventHandler;
["addPrimaryWeaponItem", {(_this # 0) addPrimaryWeaponItem (_this # 1)}] call CBA_fnc_addEventHandler;

if ! (isServer) exitWith {};

// Temporarily remove scope from unconscious units
["ace_unconscious", {
    params ["_unit", "_unconscious"];
    if !(isPlayer _unit) then {
        if (_unconscious) then {
            private _scope = (primaryWeaponItems _unit) select 2;
            if ( _scope isNotEqualTo "" ) then {
                _unit setVariable [QGVAR(deletedOptic), _scope];
                ["removePrimaryWeaponItem", [_unit, _scope], owner _unit] call CBA_fnc_ownerEvent;
            };
        } else {
            private _scope = _unit getVariable [QGVAR(deletedOptic), ""];
            if ( _scope isNotEqualTo "" ) then {
                _unit setVariable [QGVAR(deletedOptic), nil];
                ["addPrimaryWeaponItem", [_unit, _scope], owner _unit] call CBA_fnc_ownerEvent;
            };
        };
    };
}] call CBA_fnc_addEventHandler;

// Permanently remove scopes from dead units
addMissionEventHandler ["EntityKilled", {
    params ["_unit", "_killer", "_instigator", "_useEffects"];
    if !(isPlayer _unit) then {
        private _scope = (primaryWeaponItems _unit) select 2;
        if ( _scope isNotEqualTo "" ) then {
            ["removePrimaryWeaponItem", [_unit, _scope], owner _unit] call CBA_fnc_ownerEvent;
        };
    };
}];