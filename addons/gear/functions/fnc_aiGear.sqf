#include "script_component.hpp"
/*======================================
	ghg_fnc_aiGear
    Applies loadouts to AI from Zeus
	Called by ghg_fnc_aiGearModule
	Author: BSuz
======================================*/
params ["_modulePos","_attachedObject"];
[_attachedObject] call FUNC(gearUp);