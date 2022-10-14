#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_spawnVehicle
	
	Author: BSuz
======================================*/
params ["_target","_player","_actionParams"];

//Testing spawn vehicle
private _vehClass = "B_Truck_01_mover_F";

//Get Nearest Spawnpoint
private _spawnPoint = nearestObject [_target, "ghg_servicePoint"];
if (isNull _spawnPoint) exitWith {systemChat "No valid spawn point found";};
private _spawnPos = ASLToAGL (getPosASL _spawnPoint);
_spawnPos set [2,1];
private _spawnDir = getDir _spawnPoint;

private _closestLand = nearestObject [_spawnPoint, "LandVehicle"];
private _closestShip = nearestObject [_spawnPoint, "Ship"];
private _closestAir = nearestObject [_spawnPoint, "Air"];

if ( !(isNull _closestLand) || !(isNull _closestShip) || !(isNull _closestAir) ) then {
	{
		private _closestVehicle = _x;
		
		if (_closestVehicle distance _spawnPoint > 12) exitWith {};
		
		private _crew = fullCrew [_closestVehicle,"",false];
		
		{
			private _unit = _x select 0;
			_unit moveOut _closestVehicle;
			_unit leaveVehicle _closestVehicle;
		} forEach _crew;
		
		deleteVehicle _closestVehicle;
		
	} forEach [_closestLand,_closestShip,_closestAir];
};


private _vehicle = createVehicle [_vehClass, _spawnPos, [], 0, "CAN_COLLIDE"];
_vehicle setDir _spawnDir;
_vehicle setPos getPos _vehicle;
_vehicle setVectorUp surfaceNormal _spawnPos;
systemChat format ["Spawned %1",getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];