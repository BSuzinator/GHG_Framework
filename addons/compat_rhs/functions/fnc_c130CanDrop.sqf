#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_c130Drop
	Checks if the C130 can paradrop it's cargo
======================================*/
params [
    ["_veh", objNull, [objNull]]
];
if (isNull _veh || {!alive _veh}) exitWith {false}; // Vehicle must exist and be alive

if !( local _veh ) exitWith {false}; // Must be actively flying the aircraft (this resolves a locality issue)

if ( (getPosATL _veh) # 2 < 100 ) exitWith {false}; // Enforce minimum altitude

if ( (abs((velocity _veh) # 2)) > 3 ) exitWith {false}; // Enforce level flight

if ( (speed _veh) > 300 ) exitWith {false}; // Enforce max speed

// There must be something to drop
if ( (count (attachedObjects _veh) == 0) || { 'man' countType (attachedObjects _veh) > 0 } ) exitWith {false};

// Do this last since config lookups aren't cheap
private _vehCfg = configOf _veh;
private _rampAnimName = getText(_vehCfg >> "rhs_paraRamp");
private _rampAnimPhase = getNumber(_vehCfg >> "rhs_paraPhase");

// Ramp must be level to drop
if ((_veh animationSourcePhase _rampAnimName) != _rampAnimPhase) exitWith {false};

true;