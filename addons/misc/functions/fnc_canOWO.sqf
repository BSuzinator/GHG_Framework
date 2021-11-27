#include "script_component.hpp"
/*======================================
    Oh God, what have I done!
	Author: QuantX
======================================*/

params ["_target", "_player", "_params"];

GVAR(canOWO) && {[_player, _target] call ace_interaction_fnc_canTapShoulder};