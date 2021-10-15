#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_wreckRecover
    Recovers vehicle wrecks
	Called by ghg_gear_fnc_wreckInit
	Returns: _scrapObject
	Author: BSuz
======================================*/
params ["_target"];
_wreck = _target;
_wreckDir = getDir _wreck;
_wreckPos = [getPosATL _wreck select 0, getPosATL _wreck select 1, 0];
_wreckClassName = typeOf _wreck;
_wreckDisplayName = getText (configFile >>  "CfgVehicles" >> _wreckClassName >> "displayName");
_wreckInfo = [_wreckClassName,_wreckDisplayName];
deleteVehicle _wreck;
_scrapObject = createVehicle ["Land_ScrapHeap_1_F", _wreckPos, [], 0, "CAN_COLLIDE"];
_scrapObject setVariable ["ghg_wreck_info", _wreckInfo, true];
_scrapObject setDir _wreckDir;
[_scrapObject, 8] call ace_cargo_fnc_setSize;
_checkInfoStatement = {
	_targetInfo = _target getVariable "ghg_wreck_info";
	_string = format ["Wreck of %1",_targetInfo select 1];
	systemChat _string;
	hint _string;
};
_checkInfoAction = ["checkWreckInfo", "Wreck Info", "", _checkInfoStatement, {true}] call ace_interact_menu_fnc_createAction;
[_scrapObject, 0, ["ACE_MainActions"], _checkInfoAction] remoteExec ["ace_interact_menu_fnc_addActionToObject",-2];
{
	_x addCuratorEditableObjects [[_scrapObject], false];
	[_x, [[_scrapObject], false]] remoteExec ["addCuratorEditableObjects", 2];
} forEach allCurators;
_scrapObject