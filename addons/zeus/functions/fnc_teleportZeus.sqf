#include "script_component.hpp"
/*======================================
	Fork Zen teleport zeus if we're a logic entity
	Author: Quantx
======================================*/
if ! ( player isKindOf "VirtualCurator_F" ) exitWith { call zen_context_actions_fnc_teleportZeus };

[_position] call FUNC(zeusManifest);