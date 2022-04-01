#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_wreckRebuild
    Recovers vehicle wrecks
	Called by ghg_gear_fnc_wreckInit
	Returns: _newVehicle
	Author: BSuz
======================================*/
params ["_target"];
_wreckInfo = _target getVariable "ghg_wreck_info";
_scrapPos = getPosATL _target;
_scrapPos set [2,1];
_scrapDir = getDir _target;
deleteVehicle _target;
_newVehicle = createVehicle [_wreckInfo select 0, _scrapPos, [], 0, ""];
_newVehicle setDir _scrapDir;
clearItemCargoGlobal _newVehicle;
clearMagazineCargoGlobal _newVehicle;
clearWeaponCargoGlobal _newVehicle;
clearBackpackCargoGlobal _newVehicle;
["ACE_Track", _newVehicle] call ace_cargo_fnc_removeCargoItem;
["ACE_Wheel", _newVehicle] call ace_cargo_fnc_removeCargoItem;
_newVehicle setVehicleAmmo 0;
_newVehicle setFuel 0;
{
	_x addCuratorEditableObjects [[_newVehicle], false];
	[_x, [[_newVehicle], false]] remoteExec ["addCuratorEditableObjects", 2];
} forEach allCurators;
_newVehicle