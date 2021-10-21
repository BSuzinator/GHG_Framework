#include "script_component.hpp"
/*======================================
	Register current vehicle
	Author: Quantx
======================================*/
params ["_target", "_player", "_params"];

private _papers = [_player] call FUNC(getPapers);

if ( "GHG_Papers_Identity" in _papers ) then
{
    // Remove unbound ID
    _player removeItem "GHG_Papers_Identity";
    
    private _id = GVAR(identity) call FUNC(getFreeIndex);
    
    if ( _id < 0 ) exitWith { systemChat "Unable to register identity, all IDs bound"; };

    private _cid = [_player] call FUNC(getCID);
    
    // Compute expiration date
    private _day = random 1;
    private _year = date select 0;
    if ( _day < dateToNumber date ) then { _year = _year + 1; };
    
    private _expire = numberToDate [_year, _day];
    
    private _card = [
        [_player], // Garbage collection info
        _cid,
        _expire,
        face _player
    ];
    
    // Bind new id
    private _item = format ["GHG_Papers_Identity_ID_%1", _id];
    ["registerIdentity", [_id, _card], _item] call CBA_fnc_globalEventJIP;
    _player addItem _item;
};