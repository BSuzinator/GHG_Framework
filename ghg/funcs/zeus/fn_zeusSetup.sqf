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

if ( (_uid in _authZeus || _virtual) && (isNull getAssignedCuratorUnit _unit) ) then
{
	[{ ! (isNil "ghg_fnc_zeusObjects" || isNil "ghg_fnc_zeusGroup") },
	{
		params ["_unit", "_owner"];
	
		private _logic = ghg_fnc_zeusGroup createUnit ["ModuleCurator_F", [0,0,0], [], 0, "CAN_COLLIDE"];

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
		_logic addCuratorEditableObjects [ghg_fnc_zeusObjects, true];
	
		_unit assignCurator _logic;
		[ _logic, "curatorUnitAssigned", [ _logic, _unit ] ] call BIS_fnc_callScriptedEventHandler;
		
		// Initialize local event handlers
		[_logic, _unit] remoteExecCall ["ghg_fnc_zeusInitEh", _unit];
	},
	[_unit, _uid]] call CBA_fnc_waitUntilAndExecute;
};