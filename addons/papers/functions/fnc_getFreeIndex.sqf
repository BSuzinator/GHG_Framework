#include "script_component.hpp"
/*======================================
	Check if current vehicle can be registered
	Author: Quantx
======================================*/
params ["_array", [], [[]]];

private _ind = -1;

{
    if ( isNil {_x} ) exitWith { _ind = _forEachIndex };
    /* Disabled for now
    // Preform garbage collection
    private _gc = _x select 0;
    
    private _rem = false;
    {
        if ( isNull _x ) exitWith { _rem = true; };
    } forEach _gc;
    
    if ( _rem ) exitWith { _ind = _forEachIndex; };
    */
} forEach _array;

_ind;