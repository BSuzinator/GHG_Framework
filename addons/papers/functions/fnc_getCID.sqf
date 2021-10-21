#include "script_component.hpp"
/*======================================
	Register current vehicle
	Author: Quantx
======================================*/
params ["_unit", objNull, [objNull]];

if ! ( _unit isKindOf "CAManBase" ) exitWith {""};

private _ret = _unit getVariable [QGVAR(cid), ""];

if ( _ret == "" ) then
{
    private _format = "###-##-####";
    
    {
        _ret = _ret + (switch (_x) do {
            case "#": { selectRandom ["0","1","2","3","4","5","6","7","8","9"] };
            default {_x};
        });
    } forEach _format;

    _unit setVariable [QGVAR(cid), _ret, true];
};

_ret;