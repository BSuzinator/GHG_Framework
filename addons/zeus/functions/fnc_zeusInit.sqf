#include "script_component.hpp"
/*======================================
	ghg_fnc_zeusInit
	Handles Zeus slot management
	Author: Quantx
======================================*/
if ( isServer ) then
{
    addMissionEventHandler ["HandleDisconnect", FUNC(zeusCleanup)];

    GVAR(zeusGroup) = createGroup sideLogic;

    // Failsafe if ghg_zeus_fnc_zeusInitObjects is not run
    [{ time > 10 }, {
        if ( isNil QGVAR(zeusObjects) ) then
        {
            GVAR(zeusObjects) = [];
        };
    }] call CBA_fnc_waitUntilAndExecute;
};

if ( !hasInterface ) exitWith {};

GVAR(zeusLogic) = objNull;

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
				_handle call CBA_fnc_removePerFrameHandler;
			};
		};
	}, 0.25, []] call CBA_fnc_addPerFrameHandler;
};

[{ time > 0 }, {
    [player] remoteExecCall [QFUNC(zeusSetup), 2];
}] call CBA_fnc_waitUntilAndExecute;