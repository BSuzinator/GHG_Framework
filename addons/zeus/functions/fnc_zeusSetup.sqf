#include "script_component.hpp"
/*======================================
	ghg_fnc_logicSetup
	Creates zeus module for unit
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params ["_unit"];

private _uid = getPlayerUID _unit;
private _authZeus = getArray( missionConfigFile >> "enableZeusInterface" );

private _virtual = _unit isKindOf "VirtualCurator_F";

if (_virtual) then {
    _unit enableSimulationGlobal false; // Number 8 on the list of Top 10 SQF Commands You Should Never Run
};

if ( (is3DENMultiplayer || (_uid in _authZeus) || _virtual) && (isNull getAssignedCuratorUnit _unit) ) then
{
	[{ !isNil QGVAR(zeusObjects) },
	{
		params ["_unit", "_owner"];
        
        if ( isNil QGVAR(zeusGroup) || {isNull GVAR(zeusGroup)} ) then {
            GVAR(zeusGroup) = createGroup [sideLogic, false];
        };
	
        private _logic = GVAR(zeusGroup) createUnit ["ModuleCurator_F", [0,0,1000], [], 0, "CAN_COLLIDE"];
        _logic allowDamage false;

		_logic setCuratorCoef ["Place", 0];
		_logic setCuratorCoef ["Edit", 0];
		_logic setCuratorCoef ["Delete", 0];
		_logic setCuratorCoef ["Destroy", 0];
		_logic setCuratorCoef ["Group", 0];
		_logic setCuratorCoef ["Synchronize", 0];

		private _addons = [];
		private _cfgPatches = "true" configClasses (configFile >> "CfgPatches");
		{
			private _class = _x;
			if (isClass _class) then
			{
				_addons pushBack (configName _class);
			};
		} forEach _cfgPatches;

		_logic addCuratorAddons _addons;
		_logic allowCuratorLogicIgnoreAreas true;
		_logic addCuratorEditableObjects [GVAR(zeusObjects), true];
	
		_unit assignCurator _logic;
		[ _logic, "curatorUnitAssigned", [ _logic, _unit ] ] call BIS_fnc_callScriptedEventHandler;
        [ "zeusAssigned", [ _logic, _unit ], owner _unit ] call CBA_fnc_ownerEvent;
	},
	[_unit, _uid]] call CBA_fnc_waitUntilAndExecute;
};