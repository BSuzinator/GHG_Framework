#include "script_component.hpp"
/*======================================
	ghg_fnc_zeusInit
	Handles Zeus slot management
	Author: Quantx
======================================*/
if ( isServer ) then
{
    addMissionEventHandler ["HandleDisconnect", FUNC(zeusCleanup)];

    ["addZeusObject", {
        private _objs = if ( _this isEqualType [] ) then { _this } else { [_this] };
        { _x addCuratorEditableObjects [_objs, true]; } forEach allCurators;
    }] call CBA_fnc_addEventHandler;
    
    ["unitRespawn", {
        params ["_unit", "_corpse"];
        
        // Transfer zeus module to new unit
        private _logic = getAssignedCuratorLogic _corpse;
        if ( ! isNull _logic ) then
        {
            unassignCurator _logic;
            _unit assignCurator _logic;
        };
    }] call CBA_fnc_addEventHandler;

    GVAR(zeusGroup) = createGroup sideLogic;
    GVAR(zeusManifestGroup) = createGroup civilian;
    publicVariable QGVAR(zeusManifestGroup); // JIP compatible

    // Failsafe if ghg_zeus_fnc_zeusInitObjects is not run
    [{ time > 10 }, {
        if ( isNil QGVAR(zeusObjects) ) then
        {
            GVAR(zeusObjects) = [];
        };
    }] call CBA_fnc_waitUntilAndExecute;
};

if ( !hasInterface ) exitWith {};

["zeusAssigned", FUNC(zeusAssigned)] call CBA_fnc_addEventHandler;

// Ensure virtual Zeus players are invincible and force interface
if ( player isKindOf "VirtualCurator_F" ) then
{
	player allowDamage false;
	bis_fnc_forceCuratorInterface_force = true;
	
	[{
		if ( time > 0 ) then
		{
			params ["_args", "_handle"];
		
			if ( isNull curatorCamera ) then
			{
				openCuratorInterface;
			}
			else
			{
                player setPosASL [0, 0, 0];
				_handle call CBA_fnc_removePerFrameHandler;
			};
		};
	}, 0.25, []] call CBA_fnc_addPerFrameHandler;
};

[{ time > 0 }, {
    [player] remoteExecCall [QFUNC(zeusSetup), 2];
}] call CBA_fnc_waitUntilAndExecute;

[ "setName", {(_this select 0) setName (_this select 1);}] call CBA_fnc_addEventHandler;

// Cleanup manifested zeus characters
["zen_remoteControlStopped", {
    params ["_unit"];
    
    if ( _unit getVariable [QGVAR(zeusMainfest), false] ) then
    {
        deleteVehicle _unit;
    };
}] call CBA_fnc_addEventHandler;