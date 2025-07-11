#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_baseDump
	Author: BSuz
======================================*/
(_this select 0) params ["_exportRadius"];
(_this select 1) params ["_modulePos","_attachedObject"];
systemChat format ["Base Dump: Export Radius: %1", _exportRadius];
private _exportData = [ systemTime,worldName,briefingName,[] ];

{
	private _searchType = _x;
	{
		_obj = _x;
		_objArray = [typeOf _obj, getPosASL _obj, getDir _obj, vectorUp _obj, vectorDir _obj, getPos _obj];
		_exportData # 3 pushBack _objArray;
	}forEach ((ASLToAGL _modulePos) nearObjects [_searchType, _exportRadius]);
} forEach ["LandVehicle", "Air", "Ship", "Thing"];

private _profileExportData = profileNamespace getVariable [QGVAR(base_exports), []];

_profileExportData pushBack _exportData;

profileNamespace setVariable [QGVAR(base_exports), _profileExportData];