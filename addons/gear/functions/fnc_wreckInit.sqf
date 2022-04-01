#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_wreckInit
    Initializes Wreck Recovery Actions
	Called on mission start
	Author: BSuz
======================================*/
_condition = {(damage _target >= 1) && [_player] call ace_repair_fnc_isEngineer};
_statement = {
	params ["_target","_player","_actionParams"];
	_progressComplete = {
		params ["_passedParams"];
		_passedParams params ["_target","_player","_actionParams"];
		_scrapObject = [_target] call FUNC(wreckRecover);				
		_rebuildCondition = {
			_nearestBunker = nearestObject [_target,"Land_Ammostore2"];
			_nearestCrateGreen = nearestObject [_target,"Land_Cargo20_military_green_F"];
			_nearestCrateSand = nearestObject [_target,"Land_Cargo20_sand_F"];
			(((_target distance _nearestBunker <= 30) || (_target distance _nearestCrateGreen <= 30) || (_target distance _nearestCrateSand <= 30)) && ([_player] call ace_repair_fnc_isEngineer))
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
	[30, [_target,_player,_actionParams], _progressComplete, {_string = "Stopped Recovering"; hint _string;systemChat _string;}, "Recovering Wreck"] call ace_common_fnc_progressBar;

};
_action = ["RecoverWreck", "Recover Wreck", "", _statement, _condition] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

[] call FUNC(wreckRebuildModule);
[] call FUNC(wreckRecoverModule);