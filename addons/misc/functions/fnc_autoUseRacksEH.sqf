/*
	fnc autoUseRacksEH
	
*/
params ["_vehicle", "_role", "_unit", "_turret"];
[_vehicle] call acre_sys_rack_fnc_initVehicle;
private _driverCheck = (_role isEqualTo "driver");
private _vehClassCheck = (_vehicle isKindOf "Air");
systemChat str [_vehicle, _role, _unit, _turret, [_driverCheck, _vehClassCheck]];
if (!_driverCheck || !_vehClassCheck) exitWith {};
private _vehRacks = [_vehicle, _unit] call acre_sys_rack_fnc_getAccessibleVehicleRacks;

{
	[ _vehicle, _unit, [_x] call acre_sys_rack_fnc_getMountedRadio ] call acre_sys_rack_fnc_startUsingMountedRadio;
} forEach _vehRacks;
