#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_assignTraits
    Reads config of unit and assigns ACE Trait levels.
	Called from ghg_gear_fnc_gearUp
	Author: BSuz
======================================*/

params ["_unit", "_unitType"];

private _classHead = switch (side _unit) do {
	case west: {"b_ghg_"};
	case east: {"o_ghg_"};
	case resistance: {"i_ghg_"};
	default {"b_ghg_"};
};

if (([_unitType, 2, 4] call BIS_fnc_trimString) isNotEqualTo "ghg") then {_unitType = format ["%1%2",_classHead,_unitType];};

private _medicLevel = getNumber (configfile >> "CfgVehicles" >> _unitType >> "attendant");
private _engineerLevel = getNumber (configfile >> "CfgVehicles" >> _unitType >> "engineer");
private _isEOD = getNumber (configfile >> "CfgVehicles" >> _unitType >> "canDeactivateMines") call FUNCMAIN(toBool);
//private _isUAVHacker = [ getNumber (configfile >> "CfgVehicles" >> _unitType >> "uavHacker"), 0 ];

//{systemchat str _x;} forEach [_unitType,_medicLevel,_engineerLevel,_isEOD];

_unit setVariable ["ACE_medical_medicClass", _medicLevel, true];
_unit setVariable ["ACE_isEOD", _isEOD, true];
_unit setVariable ["ACE_isEngineer", _engineerLevel, true];

_unit setUnitTrait ["medic", (_medicLevel call FUNCMAIN(toBool)),true];
_unit setUnitTrait ["engineer ", (_engineerLevel call FUNCMAIN(toBool)),true];
_unit setUnitTrait ["explosiveSpecialist", _isEOD,true];

true