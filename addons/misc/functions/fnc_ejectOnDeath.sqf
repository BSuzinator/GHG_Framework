#include "script_component.hpp"
/*======================================
	ghg_fnc_ejectOnDeath
	Force ejects players from vehicles
	Author: BSuz
======================================*/
params ["_unit"];
private _vehPos = ASLtoAGL getPosASL _unit;
private _getRandomPosition = {
	params ["_unit"];
	private _randDir = random 360;
	private _randDist = random 5;
	private _totalDist = 5 + _randDist;
	
	private _teleportPos = _unit getRelPos [_totalDist,_randDir];
	_teleportPos = _teleportPos vectorAdd [0, 0, 0.1];
	[_teleportPos,_randDir]
};
{
	private _crewMember = _x select 0;
	private _tpInfo = [_unit] call _getRandomPosition;
	_crewMember setPos _tpInfo select 0;
	_crewMember setDir _tpInfo select 1;
	
	//(_x select 0) action ["eject", _unit];
	//[objNull, (_x select 0)] call ace_medical_treatment_fnc_unloadUnit;
} forEach fullCrew [_unit,"",true];

private _loadedCargo = _vehicle getVariable [ace_cargo_loaded, []];
{
	_crate = _x;
	[_crate, objNull] call ace_cargo_fnc_unloadItem;
	private _tpInfo = [_unit] call _getRandomPosition;
	_crate setPos _tpInfo select 0;
	_crate setDir _tpInfo select 1;
} forEach _loadedCargo;