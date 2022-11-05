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

private _actionString = "";

_actionString = (str (_objPos # 0)) + (str (_objPos # 1)) + (str (_objPos # 2)) + "_plantDSM";

_hostObject setVariable ["ghg_hacking_hackStage", 0, true];

private _condition = {

	private _hackStage = _target getVariable "ghg_hacking_hackStage";
	(_hackStage isEqualTo 0)
};

private _action = [_actionString,"Plant DSM","",FUNC(dsmPlant),_condition,{},[_fileCount, _hostObject], [0,0,0], 10] call ace_interact_menu_fnc_createAction;

[_hostObject, 0, ["ACE_MainActions"], _action] remoteExec["ace_interact_menu_fnc_addActionToObject",0];