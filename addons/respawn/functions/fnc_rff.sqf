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
        params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];

        if ( (!alive _unit) || {_instigator isNotEqualTo player} ) exitWith {}; // Sanity check
        
        // Update stats
        GVAR(rff_damage) = GVAR(rff_damage) + _damage;
        "ghg_rff" cutText [ format [ "Friendly Damage Dealt %1", GVAR(rff_damage) toFixed 2 ], "PLAIN", 0.001 ];
        
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

[ // Strip the ACE3 event handler and return our own
    {((_this # 0) getVariable ["ace_medical_HandleDamageEHID", -1]) >= 0}, // Wait until ACE3 adds it's own event handler
    {
        params ["_unit"];
        
        _unit removeAllEventHandlers "HandleDamage";
        private _id = [_unit, "HandleDamage", {
            params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
            
            // Check if friendly fire has occured
            if !((_unit isEqualTo _instigator) || (side _unit != side _instigator) || (side _instigator isEqualTo sideLogic) || (!isNull (getAssignedCuratorLogic _instigator))) then
            {
                [QGVAR(rff), _this, _instigator] call CBA_fnc_targetEvent; // Initiate RFF on offending client
            };
            
            _this call ace_medical_fnc_handleDamage; // Passthrough to ACE3 (must be last)
        }] call CBA_fnc_addBISEventHandler;
        
        _unit setVariable ["ace_medical_HandleDamageEHID", _id];
        
        diag_log [
            "Added rff to unit",
            _unit,
            _id
        ];
    },
    [_unit],
    10,
    {diag_log [
        "Failed to add rff event handler to unit",
        _this # 0,
        (_this # 0) getVariable ["ace_medical_HandleDamageEHID", -1]
    ]} // Error reporting
] call CBA_fnc_waitUntilAndExecute;