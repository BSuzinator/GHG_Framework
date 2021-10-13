#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_wreckRebuildModule
    Creates Zeus Module for ghg_gear_fnc_wreckRebuild
	Called at mission start, JIP, and respawn
	Author: BSuz
======================================*/
["Ghost Hawk Gaming", "Wreck Rebuild", {params ["_modulePos", "_attachedObject"];[_attachedObject] call FUNC(wreckRebuild)}] call zen_custom_modules_fnc_register;