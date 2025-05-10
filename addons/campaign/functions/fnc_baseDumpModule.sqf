#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_exportBaseModule
	Author: BSuz
======================================*/
private _function = {
	params ["_modulePos","_attachedObject"];
	[
		"Spawn Jammer",
		[
			[
				"SLIDER:RADIUS",
				"Select range of jammer",
				[
					0,
					1000,
					300,
					0,
					_modulePos,
					[255,0,0,0.8]
				],
				true
			]
		],
		FUNC(baseDump),
		{},
		[
			_modulePos,
			_attachedObject
		]
	] call zen_dialog_fnc_create;	

};
["Ghost Hawk Gaming", "Campaign Base Dump", _function] call zen_custom_modules_fnc_register;