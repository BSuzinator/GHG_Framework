#include "script_component.hpp"
/*======================================
	ghg_fnc_rff
	Reverse Friendly Fire
	Called on init
	Author: BSuz
======================================*/

// NOTE: ACE3 medical event handler is added here https://github.com/acemod/ACE3/blob/master/addons/medical_engine/XEH_postInit.sqf#L27

// Only run this once per client
if ( isNil QGVAR(rff_damage) && hasInterface ) then
{
    #define DAMAGE_PENALTY 10
    #define MAX_PENALTY 180
    
    GVAR(rff_damage) = 0;
    GVAR(rff_npda) = DAMAGE_PENALTY;
    GVAR(rff_penalty) = 15;
    GVAR(rff_penalty_next) = 0;

    [QGVAR(rff), {
        params ["_unit", "_damage", "_shooter", "_ammo"];

        if ( (!alive _unit) || {_shooter isNotEqualTo player} ) exitWith {}; // Sanity check
        
        // Update stats
        GVAR(rff_damage) = GVAR(rff_damage) + _damage;
        "ghg_rff" cutText [ format [ "Friendly Damage Dealt %1", GVAR(rff_damage) toFixed 2 ], "PLAIN" ];
        
        // Check that player is not already being penalized
        if ( diag_tickTime > GVAR(rff_penalty_next) ) then
        {
            private _veh = objectParent player;
            // Vehicle drivers should be immune to prevent crashes
            if !( (!isNull _veh) && { ((driver _veh) isEqualTo player) || {(currentPilot _veh) isEqualTo player} } ) then {
                GVAR(rff_npda) = GVAR(rff_npda) - _damage;
            };
            
            if ( GVAR(rff_npda) <= 0 ) then {
                GVAR(rff_penalty_next) = diag_tickTime + GVAR(rff_penalty);
                GVAR(rff_npda) = DAMAGE_PENALTY;
                
                [GVAR(rff_penalty), "Friendly Fire"] call FUNCMAIN(skull);
                GVAR(rff_penalty) = (GVAR(rff_penalty) * 2) min MAX_PENALTY;
            };
        };
    }] call CBA_fnc_addEventHandler;
};

// Do this only after ensuring RFF has been initiated on the client
params [
    ["_unit", player, [objNull]]
];

if ( isNull _unit || {(side _unit) isEqualTo sideLogic} ) exitWith {}; // Make sure a valid unit is provided

["ace_medical_woundReceived", {
    params ["_unit", "_allDamages", "_shooter", "_ammo"];
    
    // Exit if this was NOT friendly fire
    if ((_unit isEqualTo _shooter) || (side _unit != side _shooter) || (side _shooter isEqualTo sideLogic) || (!isNull (getAssignedCuratorLogic _shooter))) exitWith {};
    
    private _totalDamage = 0;
    
    {
        _x params ["_realDamage", "_hitPoint", "_damage"];
        
        _totalDamage = _totalDamage + _realDamage;
    } forEach _allDamages;
    
    [QGVAR(rff), [
        _unit,
        _totalDamage,
        _shooter,
        _ammo
    ], _shooter] call CBA_fnc_targetEvent; // Initiate RFF on offending client
}] call CBA_fnc_addEventHandler;