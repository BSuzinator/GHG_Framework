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
		[ [_logic, _unit], {
			params ["_logic", "_unit"];
			
			_logic addEventHandler [ "curatorFeedbackMessage", bis_fnc_showCuratorFeedbackMessage ];
			_logic addEventHandler [ "curatorPinged",          bis_fnc_curatorPinged ];
			_logic addEventHandler [ "curatorObjectPlaced",    bis_fnc_curatorObjectPlaced ];
			_logic addEventHandler [ "curatorObjectEdited",    bis_fnc_curatorObjectEdited ];
			_logic addEventHandler [ "curatorWaypointPlaced",  bis_fnc_curatorWaypointPlaced ];

			private _attrib = { (_this # 1) call bis_fnc_showCuratorAttributes; };
			_logic addEventHandler ["curatorObjectDoubleClicked",   _attrib];
			_logic addEventHandler ["curatorGroupDoubleClicked",    _attrib];
			_logic addEventHandler ["curatorWaypointDoubleClicked", _attrib];
			_logic addEventHandler ["curatorMarkerDoubleClicked",   _attrib];
			
			[ _logic, "curatorUnitAssigned", [ _logic, _unit ] ] call BIS_fnc_callScriptedEventHandler;
		}] remoteExecCall ["call", _unit];
	},
	[_unit, _uid]] call CBA_fnc_waitUntilAndExecute;
};