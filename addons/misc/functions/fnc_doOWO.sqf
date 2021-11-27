#include "script_component.hpp"
/*======================================
    Oh God, what have I done!
	Author: QuantX
======================================*/

params ["_target", "_player", "_params"];

if (_player == ACE_player) then {
    addCamShake [4, 0.5, 5];
};

[_player, "gesturePoint"] call ace_common_fnc_doGesture;

[QGVAR(doOwO), [_target, _player], _target] call CBA_fnc_targetEvent;