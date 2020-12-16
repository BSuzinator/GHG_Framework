/*======================================
	ghg_fnc_deployInit
	Adds map event handlers and adds actions to vehicles able to deploy.
	Author: BSuz
======================================*/
if !(hasInterface) exitWith{};
if (getMarkerColor "deployZone" isEqualTo "") exitWith {"deployZone Marker not found" remoteExec ["systemChat", 0];};
private _deployType = getText (missionConfigFile >> "CfgGHG" >> "deployType");
if !((_deployType isEqualTo "LALO") || (_deployType isEqualTo "HALO") || (_deployType isEqualTo "WATER")) exitWith{"deployType not defined in ghg_config.txt" remoteExec ["systemChat", 0];};
private _deployRange = getText (missionConfigFile >> "CfgGHG" >> "deployRange");

private _deployEventID = addMissionEventHandler ["MapSingleClick", ghg_fnc_deploy];

private _deployMapID = addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	if (!_mapIsOpened) then {deployParams = nil;};
}];

hasDeployed = false;

private _condition = {
	params ["_target", "_player", "_actionParams"];
		!hasDeployed &&
	{(driver _target) isEqualTo _player} && {
	_target distance2D markerPos (switch (side _player) do {
		case west: {"respawn_west"};
		case east: {"respawn_east"};
		case resistance: {"respawn_guerilla"};
		case civilian: {"respawn_civilian"};
		}) <= _deployRange}
};

private _statement = {openMap true;deployParams = _this;};

private _action = ["deploy","Deploy Vehicle","",_statement,_condition,{},[_deployEventID,_deployMapID]] call ace_interact_menu_fnc_createAction;
{[_x, 1, ["ACE_SelfActions"], _action,true] call ace_interact_menu_fnc_addActionToClass;} foreach ["Ship","Tank","Car","Submarine","Armored","Support","rhs_vehclass_apc","rhs_vehclass_ifv","rhs_vehclass_car","rhs_vehclass_truck","rhs_vehclass_tank","rhs_vehclass_artillery"];
nil;