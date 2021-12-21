#include "script_component.hpp"
/*======================================
	Make zeus appear at the designated position
	Author: Quantx
======================================*/
params ["_pos"];

if ( ! isNull (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]) ) exitWith {};

_pos set [2, 0];

private _zpo = GVAR(zeusManifestGroup) createUnit ["C_Soldier_VR_F", _pos, [], 0, "NONE"];

if ( isNull _zpo ) exitWith { systemChat "Failed to create Zeus character" };

_zpo allowDamage false;

["setName", [_zpo, "Zeus"], netId _zpo] call CBA_fnc_globalEventJIP;

_zpo setVariable [QGVAR(zeusManifest), true];

[_zpo] call zen_remote_control_fnc_start;