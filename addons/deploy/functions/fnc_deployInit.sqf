#include "script_component.hpp"
/*======================================
	ghg_fnc_deployInit
	Adds map event handlers and adds actions to vehicles able to deploy.
	Author: BSuz
======================================*/
if ((!hasInterface) || (getMarkerColor "deployZone" isEqualTo "")) exitWith {};

private _ghg = missionConfigFile >> "CfgGHG";

private _deployType = getText( _ghg >> (switch (side player) do {
    case west: {"bluDeployType"};
    case east: {"opfDeployType"};
    case resistance: {"indDeployType"};
    default {"deployType"};
}));

if (_deployType isEqualTo "none") exitWith {};

if !((_deployType isEqualTo "LALO")
  || (_deployType isEqualTo "HALO")
  || (_deployType isEqualTo "SURFACE")
  || (_deployType isEqualTo "iHALO")
  || (_deployType isEqualTo "iLALO")
  || (_deployType isEqualTo "iSURFACE")) exitWith { systemChat "deployType not defined in ghg_config.txt" };

private _deployRange = getNumber ( missionConfigFile >> "CfgGHG" >> "deployRange" );

private _deployRange = getText( _ghg >> (switch (side player) do {
    case west: {"bluDeployRange"};
    case east: {"opfDeployRange"};
    case resistance: {"indDeployRange"};
    default {"deployRange"};
}));

private _deployEventID = addMissionEventHandler ["MapSingleClick", FUNC(deploy)];

private _deployMapID = addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	if !(_mapIsOpened) then // On map closed
	{
		GVAR(deployParams) = nil;
	};
}];

GVAR(hasDeployed) = false;

if ((_deployType isEqualTo "iHALO") || (_deployType isEqualTo "iLALO") || || (_deployType isEqualTo "iSURFACE")) then {
	private _action = [
		"deploy",
		"Deploy Group",
		"",
		{
			GVAR(deployParams) = _this;
			openMap true;
		},
		{
			params ["_target", "_player", "_actParams"];
			
			_actParams params ["_deployType", "_deployRange", "_deployEventID", "_deployMapID"];
	
			private _deployPos = markerPos (switch (side _player) do {
				case west: {"respawn_west"};
				case east: {"respawn_east"};
				case resistance: {"respawn_guerilla"};
				case civilian: {"respawn_civilian"};
			});
	
			(!GVAR(hasDeployed)) && {
				_player isEqualTo (leader group _player)
			} && {
				(_target distance2D _deployPos) <= _deployRange
			}
		},
		{},
		[
			_deployType,
			_deployRange,
			_deployEventID,
			_deployMapID
		]
	] call ace_interact_menu_fnc_createAction;
	
	{
		[
			_x,
			1,
			["ACE_SelfActions"],
			_action,
			true
		] call ace_interact_menu_fnc_addActionToClass;
	} forEach ["Man"];
	
} else {

	private _action = [
		"deploy",
		"Deploy Vehicle",
		"",
		{
			GVAR(deployParams) = _this;
			openMap true;
		},
		{
			params ["_target", "_player", "_actParams"];
			
			_actParams params ["_deployType", "_deployRange", "_deployEventID", "_deployMapID"];
	
			private _deployPos = markerPos (switch (side _player) do {
				case west: {"respawn_west"};
				case east: {"respawn_east"};
				case resistance: {"respawn_guerilla"};
				case civilian: {"respawn_civilian"};
			});
	
			(!GVAR(hasDeployed)) && {
				_player isEqualTo driver _target
			} && {
				(_target distance2D _deployPos) <= _deployRange
			}
		},
		{},
		[
			_deployType,
			_deployRange,
			_deployEventID,
			_deployMapID
		]
	] call ace_interact_menu_fnc_createAction;
	
	{
		[
			_x,
			1,
			["ACE_SelfActions"],
			_action,
			true
		] call ace_interact_menu_fnc_addActionToClass;
	} forEach [
		"Ship",
		"Tank",
		"Car",
		"Submarine",
		"Armored",
		"Support",
		"rhs_vehclass_apc",
		"rhs_vehclass_ifv",
		"rhs_vehclass_car",
		"rhs_vehclass_truck",
		"rhs_vehclass_tank",
		"rhs_vehclass_artillery"
	];
};
nil;