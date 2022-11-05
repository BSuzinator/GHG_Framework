#include "script_component.hpp"
/*======================================
	ghg_hacking_fnc_dsmRun
	Called by ghg_hacking_fnc_dsmRun
	Author: Quantx
======================================*/
params ["_out", "_target", "_caller", "_dsm", "_dsmFiles", "_hostObject"];

diag_Log "[GHG]: Hacking: DSM Run Called";

(format ["Player: %1 has started the hack!: %2", name _caller, side _caller]) remoteExecCall ["systemChat", sideLogic];
(format ["Player: %1 has started the hack!", name _caller]) remoteExecCall ["systemChat", side _caller]; 

//Get file count to upload / download
//private _dsmFiles = getNumber (missionConfigFile >> "CfgGHG" >> "dsmFiles");
// Grab the main display
private _dsp = findDisplay 46;

private _box = _dsp ctrlCreate ["RscStructuredText", 3891];
_box ctrlSetPosition [safeZoneX + safeZoneW - 0.5, 0, 0.5, 0.5];
_box ctrlCommit 0;

private _zbox = controlNull;

private _sum = 0;
{
	//ERROR HERE
	_sum = (_sum + _x) min _dsmFiles;
	
	private _speed = [random [_x - 20, _x, _x + 20], 2] call BIS_fnc_cutDecimals;
	private _time = round ( ( 40 - _speed ) / 5 );
	_box ctrlSetStructuredText parseText format ["<t color='#00ff00' size='2'>Files copied: %1/%2</t><br /><t color='#00cc00' size='1'>Time Left: %3 mins at %4 Mbps</t>", _sum, _dsmFiles, _time, _speed];
	
	private _zdsp = findDisplay 312;
	
	if ( ! isNull _zdsp && isNull _zbox ) then
	{
		_zbox = _zdsp ctrlCreate ["RscStructuredText", 3895];
		_zbox ctrlSetPosition [safeZoneX + safeZoneW - 0.5, 0, 0.5, 0.5];
		_zbox ctrlCommit 0;
	};
	
	if ( ! isNull _zbox ) then
	{
		_zbox ctrlSetStructuredText parseText format ["<t color='#00ff00' size='2'>Files copied: %1/%2</t><br /><t color='#00cc00' size='1'>Time Left: %3 mins at %4 Mbps</t>", _sum, _dsmFiles, _time, _speed];
	};
	uiSleep 1;
} forEach _out;

ctrlDelete _box;

if ( ! isNull _zbox ) then
{
	ctrlDelete _zbox;
};

//_dsm addAction ["Take DSM", FUNC(dsmTake)];

_hostObject setVariable ["ghg_hacking_hackStage", 2, true];

private _condition = {

	private _hackStage = _target getVariable "ghg_hacking_hackStage";
	(_hackStage isEqualTo 2)
};

private _objPos = getPosASL _hostObject;

private _actionString = (str (_objPos # 0)) + (str (_objPos # 1)) + (str (_objPos # 2)) + "_takeDSM";

private _action = [_actionString,"Take DSM","",FUNC(dsmTake),_condition,{},[_hostObject], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

[_dsm, 0, ["ACE_MainActions"], _action] remoteExec["ace_interact_menu_fnc_addActionToObject",0];


(format ["Player: %1 has completed the hack!: %2", name _caller, side _caller]) remoteExecCall ["systemChat", sideLogic];
(format ["Player: %1 has completed the hack!", name _caller]) remoteExecCall ["systemChat", side _caller];
diag_Log "[GHG]: Hacking: End Of DSM Run";