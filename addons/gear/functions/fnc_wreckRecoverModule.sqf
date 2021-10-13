#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_wreckRecoverModule
    Creates Zeus Module for ghg_fnc_wreckRecover
	Called at mission start, JIP, and respawn
	Author: BSuz
======================================*/
_recoverFunction = {
	params ["_modulePos", "_attachedObject"];
	[_attachedObject] call FUNC(wreckRecover);
	_rebuildCondition = {
			_nearestBunker = nearestObject [_target,"Land_Ammostore2"];
			_nearestCrate = nearestObject [_target,"Land_Cargo20_military_green_F"];
			((_target distance _nearestBunker <= 30 || _target distance _nearestCrate <= 30) && [_player] call ace_repair_fnc_isEngineer)
		};
		_rebuildStatement = {
			params ["_target","_player","_actionParams"];
			_rebuildProgressComplete = {
				params ["_passedParams"];
				_passedParams params ["_target","_player","_actionParams"];
				_newVehicle = [_target] call FUNC(wreckRebuild);				
			};
			[30, [_target,_player,_actionParams], _rebuildProgressComplete, {_string = "Stopped Rebuilding"; hint _string;systemChat _string;}, "Rebuilding Wreck"] call ace_common_fnc_progressBar;
		};
		_rebuildAction = ["RebuildWreck", "Rebuild Wreck", "", _rebuildStatement, _rebuildCondition] call ace_interact_menu_fnc_createAction;
		[_scrapObject, 0, ["ACE_MainActions"], _rebuildAction] call ace_interact_menu_fnc_addActionToObject;
};

["Ghost Hawk Gaming", "Wreck Recover", _recoverFunction] call zen_custom_modules_fnc_register;