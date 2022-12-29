#include "script_component.hpp"
/*======================================
	ghg_medical_fnc_canGiveFullTreatment
	Checks if player can give full treatment at medical station
	Returns: bool
	Author: BSuz
======================================*/
params ["_target","_player","_actionParams"];
private _resupplyDistance = 6;

// [[xmin, ymin, zmin], [xmax, ymax, zmax], boundingSphereDiameter] = boundingBox _object
// clippingType boundingBoxReal object
// private _bbReal = 0 boundingBoxReal _rsupObj;

private _isMedic = [_player, 2] call ace_medical_treatment_fnc_isMedic;

if (!_isMedic) exitWith {false};

private _okay = false;
{
	private _rsupObj = nearestObject [_target, _x];
	private _bbReal = 0 boundingBoxReal _rsupObj;
	private _bbRealMin = _rsupObj modelToWorld (_bbReal # 0);
	private _bbRealMax = _rsupObj modelToWorld (_bbReal # 1);
	private _targetPos = ASLToAGL getPosASL _target;
	
	private _targetInside = (
		(((_targetPos # 0) > (_bbRealMin # 0)) && ((_targetPos # 0) < (_bbRealMax # 0)))
		&&
		(((_targetPos # 1) > (_bbRealMin # 1)) && ((_targetPos # 1) < (_bbRealMax # 1)))
		&&
		(((_targetPos # 2) > (_bbRealMin # 2)) && ((_targetPos # 2) < (_bbRealMax # 2)))
	)
	
	
	if ( _isMedic && !isNull _rsupObj && _targetInside ) exitwith {
		_okay = true;
	};
	
} forEach ["ghg_medicalStation"];

_okay