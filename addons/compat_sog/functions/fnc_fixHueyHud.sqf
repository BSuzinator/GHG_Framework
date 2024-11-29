#include "script_component.hpp"
/*======================================
	Fix the non-working HUD on the SOG Hueys, easiest way to do this
	Author: QuantX
======================================*/
if ! (hasInterface) exitWith {};

["vn_air_uh1_01_base", "init", {
    params ["_unit"];
    
    // Make sure helicopter has a HUD and doesn't already have actions for it
    private _cfg = configOf _unit;
    if (((_unit animationsourcePhase 'm60_sight_rot') > 0) && {!isClass(_cfg >> "UserActions" >> "enableM60")}) then
    {
        // Enable HUD
        _unit addAction [
            "M60 Sight",
            {(_this # 0) animateSource ['m60_sight_rot', 0]},
            [],
            -11,
            false,
            true,
            "LockTargets",
            "alive _target && (driver _target == player) && ((_target animationsourcePhase 'm60_sight_rot') >= 0.5)",
            3.5
        ];
        
        // Disable HUD
        _unit addAction [
            "M60 Sight",
            {(_this # 0) animateSource ['m60_sight_rot', 1]},
            [],
            -11,
            false,
            true,
            "LockTargets",
            "alive _target && (driver _target == player) && ((_target animationsourcePhase 'm60_sight_rot') < 0.5)",
            3.5
        ];
    };
}, nil, [], true] call CBA_fnc_addClassEventHandler;
