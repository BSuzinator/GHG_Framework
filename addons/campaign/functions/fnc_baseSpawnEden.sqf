#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_baseSpawnEden
	Author: BSuz
======================================*/
(_this select 0) params ["_exportData", "_deleteInstead", "_deleteAfter"];
(_this select 1) params ["_modulePos","_attachedObject"];

/*
Function for Object to editor rotation
BTH_fnc_getPitchBankYawAccurate = {
    params ["_v"];

    private _y = vectorNormalized vectorDir _v;
    private _z = vectorNormalized vectorUp _v;
    private _x = vectorNormalized (_y vectorCrossProduct _z);

    private _ay = -asin(_z#0);
    private _az = _y#0 atan2 _x#0;
    private _ax = _z#1 atan2 _z#2;
    [_ax, _ay, _az]
};
*/

/*
MODIFIED OF ABOVE
Function for Object to editor rotation
*/
private _vectorsToRotation = {
    params ["_vUp","_vDir"];

    private _y = vectorNormalized _vDir;
    private _z = vectorNormalized _vUp;
    private _x = vectorNormalized (_y vectorCrossProduct _z);

    private _ay = -asin(_z#0);
    private _az = _y#0 atan2 _x#0;
    private _ax = _z#1 atan2 _z#2;
    [_ax, _ay, _az]
};




//If no export available, exit.
if (typeName _exportData == "STRING" ) exitWith {};

private _profileExportData = profileNamespace getVariable [QGVAR(base_exports), []];
private _exportIndex = _profileExportData find _exportData;

if (_deleteInstead && _exportIndex > -1) exitWith {
	_profileExportData deleteAt _exportIndex;
	profileNamespace setVariable [QGVAR(base_exports), _profileExportData];
};

{
	_objectData = _x;
	_objectData params ["_objClass","_objPos","_objDir","_objVectorUp", "_objVectorDir", "_objPosAGLS"];
	private _obj = create3DENEntity ["Object", _objClass, _objPosAGLS, true];
	_obj setDir _objDir;
	_obj setVectorUp _objVectorUp;
	
	//TEMP WHILE TESTING
	_objVectorUp = vectorUp _obj;
	_objVectorDir = vectorDir _obj;
	//END TEMP
	
	_obj set3DENAttribute ["rotation", ([_objVectorUp,_objVectorDir] call _vectorsToRotation)];
	
	clearItemCargoGlobal _obj;
	clearMagazineCargoGlobal _obj;
	clearWeaponCargoGlobal _obj;
	clearBackpackCargoGlobal _obj;
} forEach _exportData # 3;

if (_deleteAfter && _exportIndex > -1) then {
	_profileExportData deleteAt _exportIndex;
	profileNamespace setVariable [QGVAR(base_exports), _profileExportData];
};