#include "script_component.hpp"
/*======================================
	ghg_fnc_addMinesToZeus
	Converts and replaces 3den placed mines to zeus compatible ones
	Author: BSuz
======================================*/

if ( !isServer ) exitWith {};

private _mineModules = createHashMap;

{
    private _exp = _x >> "explosive";
    if ( isText _exp ) then {
        private _expText = getText _exp;
        
        private _asp = (toLower _expText) find "_scripted";
        if ( _asp >= 0 ) then {
            _expText = [_expText, 0, _asp - 1] call BIS_fnc_trimString;
        };
        
        _mineModules set [_expText, configName _x];
    };
} forEach ("true" configClasses (configFile >> "CfgVehicles")) select {(configName _x) isKindOf "ModuleMine_F"};

{
	private _mine = _x;
    private _mineType = typeOf _mine;
	private _minePos = getPosATL _mine;
    private _mineDirUp = [vectorDir _mine, vectorUp _mine];
	_minePos set [2, 0.01];
    
    if (_mineType in _mineModules) then {
        deleteVehicle _mine;
        private _newMine = createVehicle [_mineModules get _mineType, _minePos, [], 0, "CAN_COLLIDE"];
        _newMine setVectorDirAndUp _mineDirUp;
        
        ["addZeusObject", _newMine] call CBA_fnc_serverEvent;
    };
} foreach allMines;