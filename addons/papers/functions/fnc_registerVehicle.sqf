#include "script_component.hpp"
/*======================================
	Register current vehicle
	Author: Quantx
======================================*/
params ["_target", "_player", "_params"];

private _papers = [_player] call FUNC(getPapers);

if ( "GHG_Papers_Vehicle" in _papers ) then
{
    // Remove unbound ID
    _player removeItem "GHG_Papers_Vehicle";
    
    private _id = GVAR(vehicle) call FUNC(getFreeIndex);
    
    if ( _id < 0 ) exitWith { systemChat "Unable to register vehicle, all IDs bound"; };
    
    private _plate = getPlateNumber _target;
    private _cid = [_player] call FUNC(getCID);
    
    if ( _plate == "" ) then { systemChat "Warning: registered vehicle with no license plate"; };
    
    // Compute expiration date
    private _day = random 1;
    private _year = date select 0;
    if ( _day < dateToNumber date ) then { _year = _year + 1; };
    
    private _expire = numberToDate [_year, _day];
    
    private _card = [
        [_player, _target], // Garbage collection info
        _plate,
        _cid,
        _expire
    ];
    
    // Bind new id
    private _item = format ["GHG_Papers_Vehicle_ID_%1", _id];
    ["registerVehicle", [_id, _card], _item] call CBA_fnc_globalEventJIP;
    _player addItem _item;
};