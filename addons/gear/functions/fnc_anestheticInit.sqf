#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_anestheticInit
	Initializes anesthetics
======================================*/

GVAR(anestheticPeriod) = 60; // 1 minute

["CAManBase", "init", {
    params ["_unit"];

    // Check if last hit point is our dummy.
    private _allHitPoints = getAllHitPointsDamage _unit param [0, []];
    reverse _allHitPoints;

    if (_allHitPoints param [0, ""] == "ACE_HDBracket") then {
        // Spawn darts
        _unit addEventHandler ["HitPart", {_this call FUNC(anestheticHandler)}];
        
        // Despawn darts
        ["ace_unconscious", {
            params ["_unit", "_unconscious"];
            
            if ( _unconscious ) exitWith {};
            
            {
                if ( _x isKindOf "ghg_anesthetic_dart" ) then { deleteVehicle _x };
            } forEach attachedObjects _unit;
            
        }] call CBA_fnc_addEventHandler;
    };
}, nil, ["B_UAV_AI", "O_UAV_AI", "UAV_AI_base_F"], true] call CBA_fnc_addClassEventHandler;

// Do this manually, because ACE STILL DOESN'T SUPPORT THIS!
// https://github.com/acemod/ACE3/blob/master/addons/medical_damage/functions/fnc_parseConfigForInjuries.sqf#L71
[{"anesthetic" in ace_medical_damage_damageTypeDetails}, {
    private _anes = ace_medical_damage_damageTypeDetails get "anesthetic";
    _anes set [2, [FUNC(anestheticWoundHandler)]];
    ace_medical_damage_damageTypeDetails set ["anesthetic", _anes];
}] call CBA_fnc_waitUntilAndExecute;