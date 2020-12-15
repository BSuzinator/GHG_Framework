/*======================================
	ghg_fnc_groupMarkersInit
	Removes default markers and creates icons for each per side
	Called on mission start
	Author: Quantx
======================================*/
// Only run on real players
if ( !hasInterface ) exitWith {};

params ["_postInit", "_didJIP"];

// Setup group marker data
{
	private _mrk = "ghg_grp_" + (((groupId _x) splitString " ") joinString "_");
	
	private _mrkType = getMarkerType _mrk;
	private _mrkCol = getMarkerColor _mrk;
	
	if ( _mrkType != "" ) then
	{
		_mrkType = [_mrkType, 1] call BIS_fnc_trimString;
		
		_mrkType = switch ( side _x ) do
		{
			case west: { "b" + _mrkType };
			case east: { "o" + _mrkType };
			case resistance: { "n" + _mrkType };
			default { "b" + _mrkType };
		};
		
		private _pic = getText (configFile >> "CfgMarkers" >> _mrkType >> "icon");
		private _col = getArray (configFile >> "CfgMarkerColors" >> _mrkCol >> "color");
		
		if ( typeName (_col select 0) == "STRING" ) then
		{
			_col = _col apply { call compile _x; };
		};
		
	_x setVariable ["ghg_group_map_icon", [
            _pic,
            _col,
            [0,0],
            24,
            24,
            0,
            markerText _mrk
        ], _didJIP && (player isEqualTo leader _x) ];
	};
} forEach allGroups;

// Delete unneeded group markers\groupMarkers
{
	private _mrk = [_x, 0, 7] call BIS_fnc_trimString;
	
	if ( _mrk isEqualTo "ghg_grp_" ) then
	{
		deleteMarkerLocal _x;
	};
	
} forEach allMapMarkers;

GHG_GROUP_MARKER_EHIND = -1;

addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	
	if ( _mapIsOpened ) then {
		GHG_GROUP_MARKER_EHIND = findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", ghg_fnc_groupMarkers];
	} else {
		findDisplay 12 displayCtrl 51 ctrlRemoveEventHandler ["Draw", GHG_GROUP_MARKER_EHIND];
	};
}];