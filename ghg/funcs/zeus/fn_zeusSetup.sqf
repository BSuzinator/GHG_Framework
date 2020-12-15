/*======================================
	ghg_fnc_zeusSetup
	Creates zeus module for unit
	Author: Quantx
======================================*/
if ( !isServer ) exitWith {};

params ["_unit", "_uid"];

private _virtual = _unit isKindOf "VirtualCurator_F";
private _authZeus = getArray( missionConfigFile >> "enableZeusInterface" );

if ( _uid in _authZeus || _virtual ) then
{
	private _logic = (group (missionNamespace getvariable ["BIS_functions_mainscope",objnull])) createUnit ["ModuleCurator_F", [0,0,0], [], 0, "CAN_COLLIDE"];
	_logic setVariable ["BIS_fnc_initModules_disableAutoActivation", true];
	
	_logic setVariable ["owner", _uid, true];
	_logic setVariable ["addons", 3, true];
	_logic setVariable ["forced", parseNumber _virtual, true];
	_logic setVariable ["birdType", "", true];
	
	[_logic, [], true] call BIS_fnc_modulecurator;
	
	if ( _virtual ) then // Fix blackscreen issue
	{
		unassignCurator _logic;
		[_unit, _logic] spawn {
			params ["_unit", "_logic"];
			waitUntil { time > 0 };
			_unit assignCurator _logic ;
		};
	};
};