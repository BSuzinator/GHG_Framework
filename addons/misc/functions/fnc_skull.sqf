#include "script_component.hpp"
/*======================================
    ghg_fnc_skull
	HA HA HA HA HA HA HA HA HA HA HA HA
    Author: QuantX
======================================*/
if !(hasInterface) exitWith {};
params [
    ["_seconds", 10, [0]],
    ["_message", "", [""]]
];
_seconds = _seconds max 0;

GVAR(skull_time) = diag_tickTime + _seconds;
GVAR(skull_msg) = _message;

if ! ( isNull findDisplay 55359 ) exitWith {}; // Only open one display
if ! ( createDialog "RscSkull" ) exitWith {};

#ifndef DISABLE_COMPILE_CACHE
    disableUserInput true; // Lockdown
#endif

"skull_layer" cutText ["", "BLACK", 0.001];

GVAR(skull_last) = diag_tickTime + 0.5;
GVAR(skull_frame) = true;

[player, true] call ace_captives_fnc_setSurrendered;

[{
    private _disp = findDisplay 55359;

    if ( (isNull _disp) || (diag_tickTime > GVAR(skull_time)) ) exitWith {
        if ! ( isNull _disp ) then { closeDialog 0; };
        "skull_layer" cutText ["", "PLAIN", 0.001];
        disableUserInput false;
        disableUserInput true;  // Fix stuck inputs
        disableUserInput false;
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    
    private _skull = _disp displayCtrl 3;
    private _timer = _disp displayCtrl 4;
    private _message = _disp displayCtrl 5;
    
    if ( diag_tickTime > GVAR(skull_last) ) then
    {
        GVAR(skull_last) = diag_tickTime + 0.5;
        
        _skull ctrlSetText format ["x\ghg\addons\misc\ui\skull\skull_%1.paa", [0, 1] select GVAR(skull_frame)];
        
        if ( GVAR(skull_frame) ) then { playSoundUI [ "SkullLaugh" ] };
        
        GVAR(skull_frame) = !GVAR(skull_frame);
    };
    
    _timer ctrlSetText format ["%1", (GVAR(skull_time) - diag_tickTime) toFixed 3];
    _message ctrlSetText GVAR(skull_msg);
    
    #ifndef DISABLE_COMPILE_CACHE
        setMousePosition [0.5, 0.8];
    #endif
    
}, 0, []] call CBA_fnc_addPerFrameHandler;