/*======================================
	ghg_fnc_resupplyModule
	Adds module for zeus to spawn resupply crates
	Author: BSuz
======================================*/
_function = {
	params ["_modulePos","_attachedObject"];

	private _baseCratesList = parseSimpleArray (preprocessFile format ["ghg\loadouts\baseCrateList.sqf"]);
	
	private _baseCrateName = ["Medical"];
	private _baseCrateFile = ["ghg_medical_placeholder"];

	{
		_baseCrateName pushBack (_x select 0);
		_baseCrateFile pushBack (_x select 1);
	} forEach _baseCratesList;

	[
		"Spawn Resupply",
		[
			[
				"SIDES",
				"Select Side of resupply crate",
				[west]
			],
			[
				"LIST",
				"Choose a resupply package",
				[
					_baseCrateFile,
					_baseCrateName,
					0,
					(10 min ((count _baseCrateName) + 0.5))
				]
			],
			[
					"CHECKBOX",
					"Airdrop Crate",
					false
			]
		],
		ghg_fnc_zeusSpawnResupplyCrate,
		{},
		[
			_modulePos,
			_attachedObject
		]
	] call zen_dialog_fnc_create;	

};
["Resupply", "Spawn Crate", _function] call zen_custom_modules_fnc_register;