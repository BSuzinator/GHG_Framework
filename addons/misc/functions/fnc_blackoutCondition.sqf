#include "script_component.hpp"
/*======================================
	ghg_fnc_blackoutCondition
	Checks state of transfer switch

	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _enabled = _target getVariable ["ghg_blackout_tswitch_state", true];
_enabled