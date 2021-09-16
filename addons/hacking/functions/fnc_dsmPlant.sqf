/*======================================
	ghg_fnc_plantDSM
	Called by init box of computer, desk or laptop
	this addAction["Setup DSM", ghg_fnc_dsmPlant];
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionId", "_arguments"];

_i = 1;
_out = [];
private _dsmFiles = getNumber (missionConfigFile >> "CfgGHG" >> "dsmFiles");
if ((isNil "_dsmFiles") || (_dsmFiles isEqualTo "")) exitWith{"DSM Files not defined in ghg_config.txt" remoteExec ["systemChat", -2];};
while {_i <= _dsmFiles} do
{
    _rnd = round random[1, 10, 20];
	_out pushBack _rnd;
	_i = _i + _rnd;
};

// Remove the action
_target remoteExecCall ["removeAllActions", 0];
// Start the UI script
[_out,_caller] remoteExec [QFUNC(dsmRun), side _caller, false];