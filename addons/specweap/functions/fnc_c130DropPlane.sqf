#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_c130DropPlane
	Replaces rhs_fnc_planePara on the C130's Vehicle Drop action
======================================*/
if !(canSuspend) exitWith {diag_log QUOTE(Cannot execute FUNC(c130DropPlane) in an unscheduled environment)};
params [
    ["_plane", objNull, [objNull]] // _plane is local
];
if (isNull _plane || {!local _plane} ) exitWith {diag_log QUOTE(Non-local vehicle provided to FUNC(c130DropPlane))};
if (_plane getVariable ["rhs_paradrop", false]) exitWith {systemChat "Paradrop already in progress"};

private _planeCfg = configOf _plane;
private _rampAnimName = getText(_planeCfg >> "rhs_paraRamp");
private _rampAnimPhase = getNumber(_planeCfg >> "rhs_paraPhase");

// Find rear most attached vehicle to drop first
private _payload = objNull;
private _payloadPos = [];
{
    private _pos = _plane worldToModel ASLtoAGL getPosASL _x;
    
    if (isNull _payload) then
    {
        _payload = _x;
        _payloadPos = _pos;
    }
    else
    {
        if ( (_pos # 1) < (_payloadPos # 1) ) then {
            _payload = _x;
            _payloadPos = _pos;
        };
    };
} forEach attachedObjects _plane;

if (isNull _payload) exitWith {};

systemChat "[PLANE] Starting drop!";

// Commit to the drop
_plane setVariable ["rhs_paradrop", true, true];

_plane allowDamage false;
_plane disableCollisionWith _payload;
_payload hideObject true; // Disable all collisions on the machine where _plane is local

// Execute the payload's half of this where it is local (in a scheduled environment)
[_plane, _payload] remoteExec [QFUNC(c130DropPayload), _payload];

// Wait until the payload is clear
waitUntil {(_payload distance _plane) > 20};
_plane allowDamage true;
_plane enableCollisionWith _payload;
_payload hideObject false; // Enable all collisions on the machine where _plane is local

// Drop complete
_plane setVariable ["rhs_paradrop", false, true];
systemChat "[PLANE] Payload clear!";