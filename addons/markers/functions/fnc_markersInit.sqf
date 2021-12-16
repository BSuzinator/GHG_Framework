#include "script_component.hpp"
/*======================================
	ghg_fnc_markersInit
	Removes default markers and sets up group and unit markers for each side
	Called on mission start
	Author: Quantx
======================================*/

// Hide template markers
[{ time > 0 }, {
    {
        private _mrk = [_x, 0, 7] call BIS_fnc_trimString;
    
        if ( _mrk isEqualTo "ghg_grp_" ) then
        {
            _x setMarkerAlphaLocal 0;
        };
    } forEach allMapMarkers;
}] call CBA_fnc_waitUntilAndExecute;

// Only run on real players
if ( !hasInterface ) exitWith {};

[FUNC(markersGroup), 0, []] call CBA_fnc_addPerFrameHandler;

// Draw the player markers
GVAR(group_marker_ehind) = -1;

addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];

	if ( _mapIsOpened ) then {
		GVAR(group_marker_ehind) = findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", FUNC(markersUnit)];
	} else {
		findDisplay 12 displayCtrl 51 ctrlRemoveEventHandler ["Draw", GVAR(group_marker_ehind)];
	};
}];