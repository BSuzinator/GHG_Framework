#include "script_component.hpp"
/*======================================
	ghg_detainment_fnc_canStrip
	
	Checks if unit can be stripped
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
(
	(_target getVariable ["ace_captives_isSurrendering", false]) || 
	(_target getVariable ["ace_captives_isHandcuffed", false]) || 
	(_target getVariable ["ACE_isUnconscious", false]) ||
	!(alive _target)
)