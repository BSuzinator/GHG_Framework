/*======================================
	ghg_fnc_plantDSM
	Called by init box of computer, desk or laptop
	this addAction["Setup DSM", ghg_fnc_dsmPlant];
	Author: Quantx
======================================*/

_object = _this select 0;
_caller = _this select 1;
_id = _this select 2;

_i = 1;
_out = [];
private _dsmFiles = getText (missionConfigFile >> "CfgGHG" >> "dsmFiles");
if ((isNil _dsmFiles) || (_dsmFiles isEqualTo "")) exitWith{"DSM Files not defined in ghg_config.txt" remoteExec ["systemChat", -2];};
while {_i <= _dsmFiles} do
{
    _rnd = round random[1, 10, 20];
	_out pushBack _rnd;
	_i = _i + _rnd;
};

// Remove the action
[_object, "removeAllActions", true, true] call BIS_fnc_MP;
// Start the UI script
[[_out, ghg_fnc_dsmRun], "BIS_fnc_execVM"] call BIS_fnc_MP;