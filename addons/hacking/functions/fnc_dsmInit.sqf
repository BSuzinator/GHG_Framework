#include "script_component.hpp"
/*======================================
	ghg_hacking_fnc_dsmInit
	Called by init box of computer, desk or laptop
	Must have a Rugged Router with model hidden nearby
	
	Usage: [host_object, file_count] call ghg_hacking_fnc_dsmInit;
	
	Author: Quantx
======================================*/
params ["_hostObject", ["_fileCount", -1, [3]]];

private _objPos = getPosASL _hostObject;

private _dsm = nearestObject [_hostObject, "Land_Router_01_base_F"];
if (isNull _dsm) exitWith {"No Rugged Router found within 50m" remoteExecCall ["systemChat", -2];};

private _actionStringPlant = "";

_actionStringPlant = (str (_objPos # 0)) + (str (_objPos # 1)) + (str (_objPos # 2)) + "_plantDSM";

_hostObject setVariable ["ghg_hacking_hackStage", 0, true];

private _conditionPlant = {
	params ["_target", "_player", "_actionParams"];
	_actionParams params ["_fileCount", "_hostObject", "_dsm"];
	private _hackStage = _hostObject getVariable "ghg_hacking_hackStage";
	(_hackStage isEqualTo 0)
};

private _actionPlant = [_actionStringPlant,"Plant DSM","",FUNC(dsmPlant),_conditionPlant,{},[_fileCount, _hostObject, _dsm], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

[_hostObject, 0, ["ACE_MainActions"], _actionPlant] remoteExec["ace_interact_menu_fnc_addActionToObject",0];

private _conditionTake = {
	params ["_target", "_player", "_actionParams"];
	_actionParams params ["_hostObject"];
	private _hackStage = _hostObject getVariable "ghg_hacking_hackStage";
	(_hackStage isEqualTo 2)
};

private _objPos = getPosASL _hostObject;

private _actionStringTake = (str (_objPos # 0)) + (str (_objPos # 1)) + (str (_objPos # 2)) + "_takeDSM";

private _actionTake = [_actionStringTake,"Take DSM","", FUNC(dsmTake),_conditionTake,{},[_hostObject], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

[_dsm, 0, ["ACE_MainActions"], _actionTake] remoteExec["ace_interact_menu_fnc_addActionToObject",0];
