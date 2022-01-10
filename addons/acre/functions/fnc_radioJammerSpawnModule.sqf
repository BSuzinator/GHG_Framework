#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammerSpawnModule
	Called on mission Init
	Author: BSuz
======================================*/

private _function = {
	params ["_modulePos","_attachedObject"];

	private _jammerFriendlyNames = ["CDF ZiL-131"];
	private _jammerClassNames = ["rhsgref_cdf_b_zil131_flatbed"];

	[
		"Spawn Jammer",
		[
			[
				"SLIDER:RADIUS",
				"Select range of jammer",
				[
					0,
					5000,
					500,
					0,
					_modulePos,
					[255,0,0,0.8]
				],
				true
			],
			[
				"LIST",
				"Choose a Jammer Vehicle",
				[
					_jammerClassNames,
					_jammerFriendlyNames,
					0,
					(10 min ((count _jammerFriendlyNames) + 0.5))
				]
			]
		],
		FUNC(radioJammerSpawn),
		{},
		[
			_modulePos,
			_attachedObject
		]
	] call zen_dialog_fnc_create;	

};
["Ghost Hawk Gaming", "Jammer - Spawn New", _function] call zen_custom_modules_fnc_register;