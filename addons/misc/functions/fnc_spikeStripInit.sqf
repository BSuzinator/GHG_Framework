#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripInit
	Init for spike stripls
	Author: BSuz
======================================*/
params ["_strip"];

if (isSimpleObject _strip) exitWith {}; // Do nothing if this is just the placement guide

_strip setDamage 1;

[{ // Wait until the spike strip despawns or a vehicle is in range
    params ["_strip"];
    
    if (isNull _strip) exitWith {true}; // Strip was deleted abort
    
    
    private _vehicleList = nearestObjects [ASLToAGL getPosASL _strip, ["Car"], 6];
    if (count _vehicleList == 0) exitWith {false}; // No vehicles yet
    
    private _foundTarget = false;
    
    {
        if (isSimpleObject _x || {(netId _x) isEqualTo "0:0"} || {!local _x} ) then {continue};
        
        _strip setVariable [QGVAR(vehicleHit), _x];
        diag_log ["Found local vehicle in range", _x, netId _x];
        _foundTarget = true;
        
    } forEach _vehicleList;
    
    _foundTarget; // Only proceed if the vehicle is local to us
}, { // Damage the vehicle's tires
    params ["_strip"];
    
    private _vehicle = _strip getVariable [QGVAR(vehicleHit), objNull];
    
    diag_log ["Spike strip triggered", _strip, _vehicle];
    
    if (isNull _strip) exitWith {};
    if (isNull _vehicle) exitWith {
        diag_log ["Spike strip was hit with a null vehicle", _strip];
    };

	(getAllHitPointsDamage _vehicle) params ["_pointNameList", "_selectionNameList", "_damageList"];
    for [{private _i = 0}, {_i < count _pointNameList}, {_i = _i + 1}] do {
        private _pointName = _pointNameList select _i;
        private _selectionName = _selectionNameList select _i;
        private _damage = _damageList select _i;
        
        if (['wheel', _pointName] call bis_fnc_inString) then {
            _vehicle setHitPointDamage [_pointName, 1, true, _strip];
        };
    };
    
	deleteVehicle _strip;
}, [_strip]] call CBA_fnc_waitUntilAndExecute;