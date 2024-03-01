#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammerSpawn
	Called from radioJammerSpawnModule
	Author: BSuz
======================================*/
(_this select 0) params ["_radius", "_jammerClassname"];
(_this select 1) params ["_modulePos","_attachedObject"];
private _spawnPos = ASLToATL _modulePos;
_spawnPos set [2, 1];

_vehicle = _attachedObject;

if (_attachedObject isEqualTo objNull) then {
	_vehicle = createVehicle [_jammerClassname, _spawnPos,[],0,"CAN_COLLIDE"];
	clearItemCargoGlobal _vehicle;
	clearMagazineCargoGlobal _vehicle;
	clearWeaponCargoGlobal _vehicle;
	clearBackpackCargoGlobal _vehicle;
};

[_vehicle, _radius] remoteExecCall [QFUNCMAIN(radioJammer), 0];