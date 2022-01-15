#include "script_component.hpp"
/*======================================
    Oh God, what have I done!
	Author: QuantX
======================================*/
if ! (hasInterface) exitWith {};

[QGVAR(doOwO), {
    params ["_unit", "_instigator"];

    if (_unit == ACE_player) then {
        addCamShake [4, 0.5, 5];
        private _message = parseText format [ "%1 has noticed your bulge", name _instigator ];
        [_message] call ace_common_fnc_displayTextStructured;
    };
}] call CBA_fnc_addEventHandler;