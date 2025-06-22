#include "script_component.hpp"
/*======================================
	ghg_campaign_fnc_edenSpawnEntitiesMenu.sqf
	Author: BSuz
======================================*/
private _allExports = profileNamespace getVariable [QGVAR(base_exports), []];
private _allExportsDisplay = [];
{	
	
	_exportData = _x;

	private _dateInfo = (_exportData # 0);
	private _missionName = (_exportData # 2);
	private _terrainName = (_exportData # 1);
	private _dateString = format ["%1-%2-%3 %4:%5:%6",(_dateInfo # 0), (_dateInfo # 1), (_dateInfo #2), (_dateInfo #3), (_dateInfo #4), (_dateInfo #5)];
	
	private _listString = format ["%1 | %2 | %3", _dateString, _missionName, _terrainName];
	_allExportsDisplay pushback _listString;

} forEach _allExports;
if (count _allExports == 0) then {
	_allExports = ["Null"];
	_allExportsDisplay = ["No Exports Found"];
};

[
	"Spawn Base",
	[
		[
			"LIST",
			"Available Exports",
			[
				_allExports,
				_allExportsDisplay,
				0,
				(10 min ((count _allExports) + 0.5))
			]
		],
		[
			"CHECKBOX",
			"Delete INSTEAD of Spawning",
			[
				false					
			]
		],
		[
			"CHECKBOX",
			"Delete AFTER Spawning",
			[
				false					
			]
		]
	],
	FUNC(baseSpawnEden),
	{},
	[
		[0,0,0],
		objNull
	]
] call zen_dialog_fnc_create;