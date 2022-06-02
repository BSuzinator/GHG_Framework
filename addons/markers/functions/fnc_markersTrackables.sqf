#include "script_component.hpp"
/*======================================
	ghg_markers_fnc_markersTrackablesInit
	Spawns moving markers for trackables according to unit side
	Author: BSuz
======================================*/
if !(hasInterface) exitWith {};
_unit = player;

private _getscreenname = {
	// with thanks to hoverguy and tryteyker
	private ["_suppliedType","_type", "_cfgType","_data"];
	params ["_suppliedType"];
	if ((typeName _suppliedType) == "OBJECT") then {
		_type = (typeof _suppliedType);
	} else {
		_type = _suppliedType;
    };
	//assume classname is provided. if object is provided, get its classname
    switch (true) do
    {
        case(isClass(configFile >> "CfgMagazines" >> _type)): {_cfgType = "CfgMagazines"};
        case(isClass(configFile >> "CfgWeapons" >> _type)): {_cfgType = "CfgWeapons"};
        case(isClass(configFile >> "CfgVehicles" >> _type)): {_cfgType = "CfgVehicles"};
        case(isClass(configFile >> "CfgGlasses" >> _type)): {_cfgType = "CfgGlasses"};
    };
    
	getText (configFile >> _cfgType >> _type >> "displayName");
};

//Get all trackables from config
private _ghgCfg = missionConfigFile >> "CfgGHG";
private _allTrackables = [];
private _bluTrackables = [];
private _opfTrackables = [];
private _indTrackables = [];
private _civTrackables = [];

{
	private _side = _x;
	private _sideTrackables = getArray ( _ghgCfg >> (switch (_side) do {
		case west: {"bluTrackables"};
		case east: {"opfTrackables"};
		case resistance: {"indTrackables"};
		case civilian: {"civTrackables"};
		default {""};
	}));
	{_allTrackables pushBackUnique _x;} forEach _sideTrackables;
	switch (_side) do {
		case west: {_bluTrackables = _sideTrackables;};
		case east: {_opfTrackables = _sideTrackables;};
		case resistance: {_indTrackables = _sideTrackables;};
		case civilian: {_civTrackables = _sideTrackables;};
	};
} forEach [west,east,resistance,civilian];

if ((side _unit) isEqualTo sideLogic) then
{
    {
        _cache = _x;
		_mkrText = _cache getVariable "ace_cargo_customname";
		if (isNil _mkrText || _mkrText isEqualTo "") then {_mrkText = _cache call _getscreenname;};
        _mkrName = ((str _cache) + "_mkr");
        _mkr = createMarkerLocal [_mkrName, position _cache];
        _mkr setMarkerShapeLocal "ICON";
        _mkr setMarkerTypeLocal "waypoint";
        _mkr setMarkerSizeLocal [1, 1];
		_mkrColor = "ColorUNKNOWN";
		if (_cache in _bluTrackables) then {_mkrColor = [blufor,  true] call BIS_fnc_sideColor;};
		if (_cache in _opfTrackables) then {_mkrColor = [east,  true] call BIS_fnc_sideColor;};
		if (_cache in _indTrackables) then {_mkrColor = [resistance,  true] call BIS_fnc_sideColor;};
		if (_cache in _civTrackables) then {_mkrColor = [civilian,  true] call BIS_fnc_sideColor;};
		_mkr setMarkerColorLocal _mkrColor;
        _mkr setMarkerTextLocal _mkrText;
        [_cache,_mkr] spawn {
            params ["_cache","_mkr"];
            while {alive _cache} do {
                _mkr setMarkerPosLocal getPos _cache;
                sleep 5;
            };
        };
    } forEach _allTrackables;
} else {
	private _trackables = getArray ( _ghgCfg >> (switch (_side) do {
		case west: {"bluTrackables"};
		case east: {"opfTrackables"};
		case resistance: {"indTrackables"};
		case civilian: {"civTrackables"};
		default {""};
	})); 
	{
        _cache = _x;
		_mkrText = _cache getVariable "ace_cargo_customname";
		if (isNil _mkrText || _mkrText isEqualTo "") then {_mrkText = _cache call _getscreenname;};
        _mkrName = ((str _cache) + "_mkr");
        _mkr = createMarkerLocal [_mkrName, position _cache];
        _mkr setMarkerShapeLocal "ICON";
        _mkr setMarkerTypeLocal "waypoint";
        _mkr setMarkerSizeLocal [1, 1];
		_mkrColor = "ColorUNKNOWN";
		if (_cache in _bluTrackables) then {_mkrColor = [blufor,  true] call BIS_fnc_sideColor;};
		if (_cache in _opfTrackables) then {_mkrColor = [east,  true] call BIS_fnc_sideColor;};
		if (_cache in _indTrackables) then {_mkrColor = [resistance,  true] call BIS_fnc_sideColor;};
		if (_cache in _civTrackables) then {_mkrColor = [civilian,  true] call BIS_fnc_sideColor;};
		_mkr setMarkerColorLocal _mkrColor;
        _mkr setMarkerTextLocal _mkrText;
        [_cache,_mkr] spawn {
            params ["_cache","_mkr"];
            while {alive _cache} do {
                _mkr setMarkerPosLocal getPos _cache;
                sleep 5;
            };
        };
    } forEach _trackables;
};

