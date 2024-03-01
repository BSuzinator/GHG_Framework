#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonChainCondition
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _nearPontoon = nearestObject [_target, "rhs_pontoon_float"];
private _boatDir = getDir _target;
private _floatDir = getDir _nearPontoon;

private _headOnCheck = (
	((_floatDir - 5) < _boatDir) &&
	(_boatDir < (_floatDir + 5))
);

private _reverseFloat = _floatDir - 180;
if (_reverseFloat < 0) then {_reverseFloat = _reverseFloat + 360};

private _backsideCheck = (
	((_reverseFloat - 5) < _boatDir) &&
	(_boatDir < (_reverseFloat + 5))
);

private _okay = (
	!(isNull _nearPontoon) && 
	((_target distance _nearPontoon) < 8.5) &&
	(isNull (_target getVariable ["ghg_pontoon_chainedPontoon",objNull])) &&
	( _headOnCheck || _backsideCheck )
);

_okay // return