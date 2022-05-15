#include "script_component.hpp"
/*======================================
	ghg_fnc_rff
	Reverse Friendly Fire
	Called on init
	Author: BSuz
======================================*/
params [
    ["_unit", player, [objNull]]
];

[_unit, "HandleDamage", { // Does not persist on death
    params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
    if ((_unit isEqualTo _instigator) || (side _unit != side _instigator) || (side _instigator isEqualTo sideLogic) || (!isNull (getAssignedCuratorLogic _instigator))) exitWith {0};

    [QGVAR(rff), _this, _instigator] call CBA_fnc_targetEvent;

    0
}] call CBA_fnc_addBISEventHandler;

// Only run this once per client
if ( isNil QGVAR(rff_damage) && hasInterface ) then
{
    #define DAMAGE_PENALTY 10
    #define MAX_PENALTY 180
    
    GVAR(rff_damage) = 0;
    GVAR(rff_npda) = DAMAGE_PENALTY;
    GVAR(rff_penalty) = 15;

    [QGVAR(rff), {
        params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
        /*
        private _damageType = ["_projectile"] call ace_medical_damage_fnc_getTypeOfDamage;
        
        //Set correct hitpoint for ACE
        private _aceHitPoint = (switch _hitPoint do {
            //Null out other
            case "#structural";
            case "incapacitated";
            case "ace_hdbracket":{""};
            //Head
            case "hithead";
            case "hitface";
            case "hitneck";
            case "face_hub";
            case "neck";
            case "head":{"head"};
            //Torso
            case "body";
            case "hitpelvis";
            case "hitabdomen";
            case "hitdiaphragm";
            case "hitchest";
            case "hitbody";
            case "pelvis";
            case "spine1";
            case "spine2";
            case "spine3":{"body"};
            //Arms
            case "hitarms";
            case "hithand";
            case "arms";
            case "hands":{selectRandom ["hand_l","hand_r"]};
            //Legs
            case "legs";
            case "hitlegs":{selectRandom ["leg_l","leg_r"]};
            case "hitleftleg":{"leg_l"};
            case "hitrightleg":{"leg_r"};
            default {"body"};			
        });
        */
        
        // Update stats
        GVAR(rff_damage) = GVAR(rff_damage) + _damage;
        GVAR(rff_npda) = GVAR(rff_npda) - _damage;
        
        "ghg_rff" cutText [ format [ "Friendly Damage Dealt %1", GVAR(rff_damage) toFixed 2 ], "PLAIN" ];
        
        // Apply Damage to instigator
        //[_instigator, _damage, _aceHitPoint, _damageType, _instigator, false] call ace_medical_fnc_addDamageToUnit;
        
        // Make goggles dirty
        //[] call ace_goggles_fnc_applyDirtEffect;
        
        if ( GVAR(rff_npda) <= 0 ) then
        {
            GVAR(rff_npda) = DAMAGE_PENALTY;
            
            [GVAR(rff_penalty), "Friendly Fire"] call FUNCMAIN(skull);
            
            GVAR(rff_penalty) = (GVAR(rff_penalty) * 2) min MAX_PENALTY;
        };
        
    }] call CBA_fnc_addEventHandler;
};