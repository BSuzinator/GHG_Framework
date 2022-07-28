#include "script_component.hpp"
/*======================================
	ghg_game_fnc_targetMarkerInit
	Draws markers for target
	Author: BSuz
======================================*/
if !(hasinterface) exitWith {};

GVAR(markersInit) = true;

private _pname = name player;
private _markerName = format ["markerTarget_%1",_pname];
private _markerAreaName = format ["markerTargetArea_%1",_pname];

[{ typeName GVAR(target) isEqualTo "OBJECT" }, {
	
	private _targetMarkerText = format ["Target: %1", name GVAR(Target)];
	private _targetMarker = createMarkerLocal [_markerName, position GVAR(target)];
	private _targetAreaMarker = createMarkerLocal [_markerAreaName, position GVAR(target)];
	
	_targetMarker setMarkerShapeLocal "ICON";
	_targetMarker setMarkerTypeLocal "mil_dot";
	_targetMarker setMarkerTextLocal _targetMarkerText;
	_targetMarker setMarkerColorLocal "colorOPFOR";
	
	_targetAreaMarker setMarkerShapeLocal "ELLIPSE";
	_targetAreaMarker setMarkerSizeLocal [25, 25];
	_targetAreaMarker setMarkerColorLocal "colorOPFOR";
	
	GVAR(targetMarker) = _targetMarker;
	GVAR(targetAreaMarker) = _targetAreaMarker;
	
	[FUNC(targetMarker), 5, []] call CBA_fnc_addPerFrameHandler;
	
}, []] call CBA_fnc_waitUntilAndExecute;