#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_spawnVehicle
	
	Author: BSuz
======================================*/
params ["_target","_player","_actionParams"];

private _vehClass = _actionParams;

//Testing spawn vehicle
//_vehClass = "B_Truck_01_mover_F";

//Get Nearest Spawnpoint
private _spawnPoint = nearestObject [_target, "ghg_servicePoint"];
if (isNull _spawnPoint) exitWith {systemChat "No valid spawn point found";};
private _spawnPos = ASLToAGL (getPosASL _spawnPoint);
if !(surfaceIsWater _spawnPos) then {_spawnPos set [2,1];};
private _spawnDir = getDir _spawnPoint;

private _closestLand = nearestObject [_spawnPoint, "LandVehicle"];
private _closestShip = nearestObject [_spawnPoint, "Ship"];
private _closestAir = nearestObject [_spawnPoint, "Air"];

if !( (isNull _closestLand) && (isNull _closestShip) && (isNull _closestAir) ) then {
	{
		private _closestVehicle = _x;
		
		if (_closestVehicle distance _spawnPoint < 12) then {
			
			private _crew = fullCrew [_closestVehicle,"",false];
			
			{
				private _unit = _x select 0;
				_unit moveOut _closestVehicle;
				_unit leaveVehicle _closestVehicle;
			} forEach _crew;
			
			deleteVehicle _closestVehicle;
		};
	} forEach [_closestLand,_closestShip,_closestAir];
};


private _vehicle = createVehicle [_vehClass, _spawnPos, [], 0, "CAN_COLLIDE"];
_vehicle setDir _spawnDir;
_vehicle setPos getPos _vehicle;
_vehicle setVectorUp surfaceNormal _spawnPos;

clearItemCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearWeaponCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;

private _diagStr = format ["%1 spawned %2", name _player,getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];
diag_log "[GHG]: " + _diagStr;
//systemChat format ["Spawned %1",getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];
_diagStr remoteExec ["systemChat", side _player, false];
_diagStr remoteExec ["systemChat", sideLogic, false];
if (_vehicle isKindOf "Air") then {_vehicle call FUNC(clearPylons);};
_vehicle animateSource ["BFT_Hide", 1];