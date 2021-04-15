/*======================================
	ghg_fnc_groupMarkersInit
	Removes default markers and creates icons for each per side
	Called on mission start
	Author: BSuz
======================================*/
// Only run on real players
if ( !hasInterface ) exitWith {};

params ["_postInit", "_didJIP"];

// Setup group marker data
{
	private _mrk = "ghg_grp_" + (((groupId _x) splitString " ") joinString "_");
	
	private _mrkType = getMarkerType _mrk;
	private _mrkCol = getMarkerColor _mrk;
	private _mrkCol = getMarkerColor _mrk;
	private _mrkSize = getMarkerSize _mrk;
	private _mrkShape = markerShape _mrk;
	private _mrkText = markerText _mrk;
	private _mrkName = format ["%1_mrk",groupID __x];
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
		
		if ( typeName (_col select 0) == "STRING" ) then
		{
			_col = _col apply { call compile _x; };
		};
		
	_x setVariable ["ghg_group_mrk_info", [
			_mrk,
			_mrkShape,
            _mrkType,
            _mrkCol,
            _mrkSize,
            _mrkText,
			_mrkName
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


{
	private _cgrp = _x;
	// Only draw markes from our side
	if ( (side _cgrp) isEqualTo playerSide || playerSide isEqualTo sideLogic ) then {
		private _mrkInfo = _cgrp getVariable ["ghg_group_mrk_info", []];
		_mrkInfo params ["_mrk", "_mrkShape", "_mrkType", "_mrkCol", "_mrkSize", "_mrkText", "_mrkName"];
		
		if ( count _mrkInfo > 0 && !isNull leader _cgrp ) then
		{
			_marker = createMarkerLocal [_mrkName,[0,0]];
			_marker setMarkerShapeLocal _mrkShape;
			_marker setMarkerTypeLocal _mrkType;
			_marker setMarkerColorLocal _mrkCol;
			_marker setMarkerSizeLocal _mrkSize;
			_marker setMarkerTextLocal _mrkText;
		};
	};
} forEach allGroups;


GHG_GROUP_MARKER_EHIND = -1;

addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	
	if ( _mapIsOpened ) then {
		GHG_GROUP_MARKER_EHIND = findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", ghg_fnc_teamMarkers];
	} else {
		findDisplay 12 displayCtrl 51 ctrlRemoveEventHandler ["Draw", GHG_GROUP_MARKER_EHIND];
	};

[] spawn {
	{
		private _cgrp = _x;
		if ( (side _cgrp) isEqualTo playerSide || playerSide isEqualTo sideLogic ) then {
		private _mrkInfo = _cgrp getVariable ["ghg_group_mrk_info", []];
		_mrkInfo params ["_mrk", "_mrkShape", "_mrkType", "_mrkCol", "_mrkSize", "_mrkText", "_mrkName"];
		_mrkName setMarkerPosLocal (getPos (leader _cgrp);		
	} forEach allGroups;
	sleep 1;
};

