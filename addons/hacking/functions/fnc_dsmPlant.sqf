#include "script_component.hpp"
/*======================================
	ghg_hacking_fnc_dsmPlant
	Called by init box of computer, desk or laptop
	Must have a Rugged Router with model hidden nearby
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionParams"];
_actionParams params ["_fileCount", "_hostObject"];

//private _dsmFilesConfig = missionConfigFile >> "CfgGHG" >> "dsmFiles";
//if !(isNumber _dsmFilesConfig) exitWith { "DSM Files not defined in ghg_config.txt" remoteExecCall ["systemChat", -2]; };
private _dsm = nearestObject [_target, "Land_Router_01_base_F"];
if (isNull _dsm) exitWith {"No Rugged Router found within 50m" remoteExecCall ["systemChat", -2];};

//private _dsmFiles = getNumber _dsmFilesConfig;
private _dsmFiles = _fileCount;
private _i = 1;
private _out = [];
while {_i <= _dsmFiles} do
{
    private _rnd = round random[1, 10, 20];
	if (getNumber (configfile >> "CfgVehicles" >> typeOf _caller >> "uavHacker") isEqualTo 1 ) then {_rnd = round random[10, 20, 30];};
	_out pushBack _rnd;
	_i = _i + _rnd;
};

_hostObject setVariable ["ghg_hacking_hackStage", 1, true];

[_dsm, false] remoteExecCall ["hideObjectGlobal", 2];
// Start the UI script
[_out, _target, _caller, _dsm, _dsmFiles, _hostObject] remoteExec [QFUNC(dsmRun), side _caller, false];