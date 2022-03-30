#include "script_component.hpp"
/*======================================
	Make zeus appear at the designated position
	Author: Quantx
======================================*/
params ["_pos", "_unit"];

if ( ! isNull (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]) ) exitWith {};

_pos set [2, 0];

private _zeusClass = "C_Soldier_VR_F";

if ! ( isNull _unit ) then {
    // Notify the player that zeus has arrived
    "Zeus has answered your pleas" remoteExecCall ["systemChat", _unit];
    
    _zeusClass = (switch (side _unit) do {
        case blufor: {"B_Soldier_VR_F"};
        case opfor: {"O_Soldier_VR_F"};
        case independent: {"I_Soldier_VR_F"};
        default {"C_Soldier_VR_F"};
    });
};

private _zpo = GVAR(zeusManifestGroup) createUnit [_zeusClass, _pos, [], 0, "NONE"];

if ( isNull _zpo ) exitWith { systemChat "Failed to create Zeus character" };

_zpo allowDamage false;
_zpo enableStamina false;
_zpo enableFatigue false;
_zpo setCaptive true; // All AI will ignore zeus

["setName", [_zpo, "Zeus"], netId _zpo] call CBA_fnc_globalEventJIP;

_zpo setVariable [QGVAR(zeusManifest), true];

[_zpo] call zen_remote_control_fnc_start;