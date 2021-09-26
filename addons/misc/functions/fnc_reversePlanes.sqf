#include "script_component.hpp"
/*======================================
	ghg_fnc_reversePlanes
	Allows planes to reverse when on ground and stopped
	Called on mission start
	
======================================*/
if (!hasInterface) exitwith {};

[{
    private _vehicle = vehicle player;
    if (
        (_vehicle != player) &&
        (_vehicle isKindOf "Plane") &&
        {
            (isTouchingGround (_vehicle)) && 
            (driver (_vehicle) == player) &&
            (speed _vehicle < 1) &&
            (1 in [(inputAction "HeliDown"),(inputAction "AirPlaneBrake")])
        }
    ) then {
        _vel = velocity _vehicle; 
        _dir = direction _vehicle;
        if ((speed (_vehicle)) > -5) then { 
            _speed = -1; 
            _vehicle setVelocity [ 
                (_vel select 0) + (sin _dir * _speed),  
                (_vel select 1) + (cos _dir * _speed),  
                (_vel select 2) - 0.1
            ];
        };
    };
}, 0, []] call CBA_fnc_addPerFrameHandler;