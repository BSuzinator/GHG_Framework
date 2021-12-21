#include "script_component.hpp"
/*======================================
	Make zeus appear at the designated position
	Author: Quantx
======================================*/

if ! ( player isKindOf "VirtualCurator_F" ) exitWith { call zen_context_actions_fnc_teleportZeus };

_position set [2, 0];

private _zpo = GVAR(zeusManifestGroup) createUnit ["C_Soldier_VR_F", _position, [], 0, "NONE"];

if ( isNull _zpo ) exitWith { systemChat "Failed to create Zeus character" };

_zpo allowDamage false;

["setName", [_zpo, "Zeus"], netId _zpo] call CBA_fnc_globalEventJIP;

_zpo setVariable [QGVAR(zeusMainfest), true];

[_zpo] call zen_remote_control_fnc_start;