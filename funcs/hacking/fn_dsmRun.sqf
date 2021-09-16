/*======================================
	ghg_fnc_runDSM
	Called by ghg_fnc_dsmPlant
	Author: Quantx
======================================*/
params ["_out","_caller"];

// Reveal the DSM
DSM hideObject false;
// Add the action
DSM_DONE = false;
DSM addAction ["Take DSM", ghg_fnc_dsmTake];

_str = format ["Player: %1 has started the hack!: %2", name _caller, side _caller];
_str remoteExec ["systemChat", sideLogic];
_str2 = format ["Player: %1 has started the hack!", name _caller];
_str2 remoteExec ["systemChat", side _caller]; 

//Get file count to upload / download
private _dsmFiles = getNumber (missionConfigFile >> "CfgGHG" >> "dsmFiles");
// Grab the main display
_dsp = findDisplay 46;

_box = _dsp ctrlCreate ["RscStructuredText", 3891];
_box ctrlSetPosition [safeZoneX + safeZoneW - 0.5, 0, 0.5, 0.5];
_box ctrlCommit 0;

_zbox = controlNull;

_sum = 0;
{
	//ERROR HERE
	_sum = _sum + _x;
	if ( _sum > _dsmFiles ) then
	{
		_sum = _dsmFiles;
	};
	
	_speed = [random [0, 20, 40], 2] call BIS_fnc_cutDecimals;
	_time = round ( ( 40 - _speed ) / 5 );
	_box ctrlSetStructuredText parseText format ["<t color='#00ff00' size='2'>Files copied: %1/%2</t><br /><t color='#00cc00' size='1'>Time Left: %3 mins at %4 Mbps</t>", _sum, _dsmFiles, _time, _speed];
	
	
	_zdsp = findDisplay 312;
	
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

DSM_DONE = true;
publicVariable "DSM_DONE";

_str3 = format ["Player: %1 has completed the hack!: %2", name _caller, side _caller];
_str3 remoteExec ["systemChat", sideLogic];
_str4 = format ["Player: %1 has completed the hack!", name _caller];
_str4 remoteExec ["systemChat", side _caller];