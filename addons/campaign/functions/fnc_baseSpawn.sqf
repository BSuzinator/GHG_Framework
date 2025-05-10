#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_baseSpawn
	Author: BSuz
======================================*/
(_this select 0) params ["_exportData", "_deleteInstead", "_deleteAfter"];
(_this select 1) params ["_modulePos","_attachedObject"];
private _profileExportData = profileNamespace getVariable [QGVAR(base_exports), []];
private _exportIndex = _profileExportData find _exportData;

if (_deleteInstead && _exportIndex > -1) exitWith {
	_profileExportData deleteAt _exportIndex;
	profileNamespace setVariable [QGVAR(base_exports), _profileExportData];
};

{
	_objectData = _x;
	_objectData params ["_objClass","_objPos","_objDir","_objVectorUp"];
	private _obj = createVehicle [_objClass, [0,0,0], [], 0, "CAN_COLLIDE"];
	_obj enableSimulation false;
	_obj setDir _objDir;
	_obj setPosASL _objPos;
	_obj setVectorUp _objVectorUp;
	_obj enableSimulation true;
	clearItemCargoGlobal _obj;
	clearMagazineCargoGlobal _obj;
	clearWeaponCargoGlobal _obj;
	clearBackpackCargoGlobal _obj;
	{
	_x addCuratorEditableObjects [[_obj], true];
	} forEach allCurators;
} forEach _exportData # 3;

if (_deleteAfter && _exportIndex > -1) then {
	_profileExportData deleteAt _exportIndex;
	profileNamespace setVariable [QGVAR(base_exports), _profileExportData];
};