#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammerSpawn
	Called from radioJammerSpawnModule
	Author: BSuz
======================================*/
(_this select 0) params ["_radius", "_jammerClassname"];
(_this select 1) params ["_modulePos","_attachedObject"];
private _spawnPos = ASLToATL _modulePos;
//if (_attachedObject != objNull) exitWith {systemChat "Can not spawn jammer on object."};

_spawnPos set [2, 1];

_vehicle = createVehicle [_jammerClassname, _spawnPos,[],0,"CAN_COLLIDE"];
clearItemCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearWeaponCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;	

[_vehicle,_radius] remoteExec["ghg_fnc_radioJammer",0];