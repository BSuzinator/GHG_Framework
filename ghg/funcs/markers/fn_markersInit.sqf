/*======================================
	ghg_fnc_markersInit
	Removes default markers and sets up group and unit markers for each side
	Called on mission start
	Author: Quantx
======================================*/
params ["_postInit", "_didJIP"];

// Hide template markers
{
	private _mrk = [_x, 0, 7] call BIS_fnc_trimString;
	
	if ( _mrk isEqualTo "ghg_grp_" ) then
	{
		_x setMarkerAlpha 0;
	};
} forEach allMapMarkers;

// Only run on real players
if ( !hasInterface ) exitWith {};

[ghg_fnc_markersGroup, 0, _this] call CBA_fnc_addPerFrameHandler;

// Draw the player markers
GHG_GROUP_MARKER_EHIND = -1;

addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];

	if ( _mapIsOpened ) then {
		GHG_GROUP_MARKER_EHIND = findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", ghg_fnc_markersUnit];
	} else {
		findDisplay 12 displayCtrl 51 ctrlRemoveEventHandler ["Draw", GHG_GROUP_MARKER_EHIND];
	};
}];