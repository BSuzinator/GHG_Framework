#include "script_component.hpp"
/*======================================
	Make zeus appear at the designated position
	Author: Quantx
======================================*/
if ( ! isNull (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]) ) exitWith {};

// Position is always in ASL
params ["_pos", "_unit", "_vehicle"];

// Ensure _vehicle is valid
if ! (_vehicle isEqualType objNull && {_vehicle isKindOf "AllVehicles"} && {!(_vehicle isKindOf "CAManBase")}) then {
    _vehicle = objNull;
};

if (isNull _unit) then { // We're teleporting to a random position or vehicle
    if ! (isNull _vehicle) then { // A vehicle was provided, so use it's position instead
        _pos = getPosASL _vehicle;
    };

    private _dist = 100; // Find the nearest unit to determine the team
    {
        private _unitPos = ASLToAGL (getPosASL _x);
        private _nd = _unitPos distance (ASLToAGL _pos);
        if ( _nd < _dist ) then
        {
            _dist = _nd;
            _unit = _x;
        };
    } forEach allPlayers;
} else { // We're responding to a specific zeus ping
    "Zeus has answered your pleas" remoteExecCall ["systemChat", _unit];
    
    _pos = getPosASL _unit;
};

private _zeusClass = "C_Soldier_VR_F";
private _side = civilian;

if ! ( isNull _unit ) then { // _unit might still be objNull if no player was within _dist
    _side = _unit getVariable [QGVARMAIN(unitSide), side _unit];
    
    _zeusClass = (switch (_side) do {
        case blufor: {"B_Soldier_VR_F"};
        case opfor: {"O_Soldier_VR_F"};
        case independent: {"I_Soldier_VR_F"};
        default {"C_Soldier_VR_F"};
    });
};

// Set spoken language to that of the side
if !(isNil QEGVAR(acre,babelLangsSide)) then {
    private _langs = EGVAR(acre,babelLangsSide) getOrDefault [_side, []];
    
    if ( (count _langs) > 0 ) then {
        private _ln = _langs select 0;
        
        if ( _ln == "all" ) then {
            _ln = (GVAR(babelLangs) select 0) select 0;
        };
        
        [_ln] call acre_api_fnc_babelSetSpeakingLanguage;
    };
};

// Group will be auto-deleted when manifest terminates
private _grp = createGroup [_side, true];
_grp setGroupIdGlobal ["Zeus"];
private _zpo = _grp createUnit [_zeusClass, _pos, [], 0, "NONE"];

if ( isNull _zpo ) exitWith { systemChat "Failed to create Zeus character" };

_zpo allowDamage false;
_zpo enableStamina false;
_zpo enableFatigue false;
_zpo setCaptive true; // All AI will ignore zeus

_zpo linkItem "ItemMap";
_zpo linkItem "ItemCompass";

// Teleport the zeus player object into a vehicle if one was selected
if (_vehicle isEqualType objNull && {_vehicle isKindOf "AllVehicles"} && {!(_vehicle isKindOf "CAManBase")}) then {
    [[_zpo], _vehicle] call zen_common_fnc_teleportIntoVehicle;
} else {
    _zpo setPosASL _pos;
};

private _jipID = ["setName", [_zpo, "Zeus"], "ghg_zeus_manifest_" + netId _zpo] call CBA_fnc_globalEventJIP;
[_jipID, _zpo] call CBA_fnc_removeGlobalEventJIP; // Cleanup after ourselves

_zpo setVariable [QGVAR(zeusManifest), true];

[_zpo] call zen_remote_control_fnc_start;