#include "script_component.hpp"
/*======================================
	ghg_medical_fnc_extinguishUnitModule.sqf
    Extinguishes all fire from object
	Author: BSuz
======================================*/
private _function = {
	params ["_modulePos","_attachedObject"];
	_attachedObject setVariable ["ace_fire_intensity", 0, true];
	systemChat format ["%1 extinguished",str _attachedObject];
};
["Ghost Hawk Gaming", "Extinguish Unit", _function] call zen_custom_modules_fnc_register;