#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_c130DropPayload
	Run where the payload is local as part of the drop
======================================*/
if !(canSuspend) exitWith {diag_log QUOTE(Cannot execute FUNC(c130DropPayload) in an unscheduled environment)};
params [
    ["_plane", objNull, [objNull]],
    ["_payload", objNull, [objNull]] // _payload is local
];
if (isNull _payload || {!local _payload}) exitWith {diag_log ["Warning payload is not local", _payload]};

_payload allowDamage false;
_payload disableCollisionWith _plane;

private _crew = fullCrew _payload;

{ // Make sure crew doesn't take damage
    _x params ["_unit", "_role", "_cargoIndex", "_turretPath", "_personTurret"];
    [_unit, false] remoteExec ["allowDamage", _unit];
} forEach _crew;

systemChat "[PAYLOAD] Deploying chute!";

private _cable = createSimpleObject ["PowerCable_01_StraightLong_F", [0, 0, 0], true];
private _com = getCenterOfMass _payload;
_com set [1, ((0 boundingBoxReal _payload) select 1) select 1];
_cable attachTo [_payload, _com vectorAdd [0, 2, 0]];

_chute = createVehicle ["Steerable_Parachute_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
_chute attachTo [_payload, _com vectorAdd [0, 4, 0]];
_chute setVectorDirAndUp [[0,0,1], [0,1,0]];
_chute setPosATL getPosATL _chute; // Apply rotation

sleep 3; // Wait for parachute to deploy

detach _payload; // Actually release the cargo
_payload enableSimulation false; // Prevent payload from being knocked around
private _dir = (getDir _plane) + 180;

systemChat "[PAYLOAD] Payload detached!";

// Object hidden syncronization check (in case both _payload and _plane are local)
waitUntil {(!isObjectHidden _payload) && {(_payload distance _plane) > 20}};

systemChat "[PAYLOAD] Payload clear!";

_payload enableCollisionWith _plane;
_payload enableSimulation true;

_payload setVelocity velocity _plane; // Match velocity

// Wait until the payload has decelerated
waitUntil {
    // Give the object a slight down spin to enhance the effect
    //_payload addTorque (_payload vectorModelToWorld [1,0,0]);
    _payload setDir _dir;
    
    // Decelerate payload by 1m/s
    private _vel = velocity _payload;
    private _accel = (vectorNormalized _vel) vectorMultiply 0.5;
    _payload setVelocity (_vel vectorDiff _accel);
    
    // MUST BE LAST
    abs(speed _payload) < 3
};

_payload allowDamage true;

{ // Crew can now take damage again
    _x params ["_unit", "_role", "_cargoIndex", "_turretPath", "_personTurret"];
    [_unit, true] remoteExec ["allowDamage", _unit];
} forEach _crew;

systemChat format ["[PAYLOAD] Deploying main chute, payload speed %1km/h", abs(speed _payload)];

deleteVehicle _cable;
deleteVehicle _chute;

// Custom deploy function
private _deployFunc = _payload getVariable [QGVAR(airdrop_deploy), ""];
if (_deployFunc != "") exitWith {
    [_plane, _payload] call compile _deployFunc;
};

private _cargoChute = createVehicle ["B_Parachute_02_F", [0,0,0], [], 0, "CAN_COLLIDE"];

// Recompute attachment point
_com = getCenterOfMass _payload;
_com set [2, ((0 boundingBoxReal _payload) select 1) select 2];

_cargoChute setPos (_payload modelToWorld _com);
_payload attachTo [_cargoChute]; // Keep offset

waitUntil { ((getPos _payload) # 2) < 3 };

detach _payload;