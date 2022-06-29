#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_assignTraits
    Reads config of unit and assigns ACE Trait levels.
	Called from ghg_gear_fnc_gearUp
	Author: BSuz
======================================*/

params ["_unit", "_unitType"];

private _medicLevel = getNumber (configfile >> "CfgVehicles" >> _unitType >> "attendant");
private _engineerLevel = getNumber (configfile >> "CfgVehicles" >> _unitType >> "engineer");
private _isEOD = getNumber (configfile >> "CfgVehicles" >> _unitType >> "canDeactivateMines") call EFUNC(database,toBool);
//private _isUAVHacker = [ getNumber (configfile >> "CfgVehicles" >> _unitType >> "uavHacker"), 0 ];

_unit setVariable ["ACE_medical_medicClass", _medicLevel, true];
_unit setVariable ["ACE_isEOD", _isEOD, true];
_unit setVariable ["ACE_isEngineer", _engineerLevel, true];

_unit setUnitTrait ["medic", _medicLevel call EFUNC(database,toBool)];
_unit setUnitTrait ["engineer ", _engineerLevel call EFUNC(database,toBool)];
_unit setUnitTrait ["explosiveSpecialist", _isEOD];

true