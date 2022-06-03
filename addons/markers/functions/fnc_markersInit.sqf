#include "script_component.hpp"
/*======================================
	ghg_fnc_markersInit
	Removes default markers and sets up group and unit markers for each side
	Called on mission start
	Author: Quantx
======================================*/

if (isServer) then
{
    // Hide template markers
    [{ GHG_SERVER_GROUPS_READY }, {
        {
            diag_log _x;
            if ( (_x select [0, 8]) isEqualTo "ghg_grp_" ) then
            {
                _x setMarkerAlpha 0;
                diag_log "Deleted";
            };
            
        } forEach allMapMarkers;
    }] call CBA_fnc_waitUntilAndExecute;
};

// Only run on real players
if ( !hasInterface ) exitWith {};

[FUNC(markersGroup), 1, []] call CBA_fnc_addPerFrameHandler;

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