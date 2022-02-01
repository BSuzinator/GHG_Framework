#include "script_component.hpp"
/*======================================
	ghg_zeus_fnc_endMissionModule
	Adds module for zeus to end mission with more types availible
	Author: BSuz
======================================*/

private _function = {
	params ["_modulePos","_attachedObject"];
	private _endArray = ["allLost","allVictory","westVictory","eastVictory","indVictory","civVictory","multipleVictory"];
	private _endNames = ["All Mission Fail","All Mission Complete","BLUFOR Victory","OPFOR Victory","INDFOR Victory","CIVILIAN Victory","Multiple Sides Victory"];
	[
		"End Mission",
		[
			[
				"LIST",
				"End Types",
				[
					_endArray,
					_endNames,
					0,
					(10 min ((count _endNames) + 0.5))
				]
			],
			[
				"SIDES",
				"Multiple Side Victory",
				[],
				false
			],
			[
				"EDIT:MULTI",
				"Debriefing Text",
				[
					"",
					{},
					2
				],
				false
			]
		],
		FUNC(endMission),
		{},
		[
			_modulePos,
			_attachedObject
		]
	] call zen_dialog_fnc_create;	

};
["Ghost Hawk Gaming", "End Mission", _function] call zen_custom_modules_fnc_register;