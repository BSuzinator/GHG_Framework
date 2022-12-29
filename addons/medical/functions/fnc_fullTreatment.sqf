#include "script_component.hpp"
/*======================================
	ghg_medical_fnc_fullTreatment
    Gives unit full heal
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
[_player, _target] call ace_medical_treatment_fnc_fullHeal;