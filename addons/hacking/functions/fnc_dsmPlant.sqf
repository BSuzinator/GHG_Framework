#include "script_component.hpp"
/*======================================
	ghg_fnc_plantDSM
	Called by init box of computer, desk or laptop
	this addAction["Setup DSM", ghg_fnc_dsmPlant];
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionId", "_arguments"];

private _dsmFilesConfig = missionConfigFile >> "CfgGHG" >> "dsmFiles";
if !(isNumber _dsmFilesConfig) exitWith { "DSM Files not defined in ghg_config.txt" remoteExecCall ["systemChat", -2]; };
private _dsmFiles = getNumber _dsmFilesConfig;
private _i = 1;
private _out = [];
while {_i <= _dsmFiles} do
{
    private _rnd = round random[1, 10, 20];
	_out pushBack _rnd;
	_i = _i + _rnd;
};

// Remove the action
_target remoteExecCall ["removeAllActions", 0];
[DSM, false] remoteExecCall ["hideObjectGlobal", 2];
// Start the UI script
[_out, _target, _caller] remoteExec [QFUNC(dsmRun), side _caller, false];