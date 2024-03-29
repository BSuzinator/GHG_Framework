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
    
    addMissionEventHandler ["EntityRespawned", {
        params ["_unit", "_corpse"];
        // Transfer zeus module to new unit
        private _logic = getAssignedCuratorLogic _corpse;
        
        diag_log ["Player died", getPlayerUID _unit, _unit, _corpse, _logic];
        
        if ! ( isNull _logic ) then
        {
            unassignCurator _logic;
            [ // Wait until the Zeus connection has been destroyed before reasigning it
                {isNull (getAssignedCuratorUnit (_this # 1))},
                {
                    diag_log ["Reassigned curator logic to new unit", _this];
                    (_this # 0) assignCurator (_this # 1);
                    
                },
                [_unit, _logic],
                10,
                {diag_log ["Failed to reasign curator logic to new unit", _this];}
            ] call CBA_fnc_waitUntilAndExecute;
        };
    }];

    // Failsafe if ghg_zeus_fnc_zeusInitObjects is not run
    [
        {!(isNil QGVAR(zeusObjects))}, {}, // Do nothing if zeusObjects is defined
        [], // No args
        10, {GVAR(zeusObjects) = [];} // Timeout code
    ] call CBA_fnc_waitUntilAndExecute;
};

if ( !hasInterface ) exitWith {};

//Add death Icons for each player
[player] call bis_fnc_drawCuratorDeaths;

["zeusAssigned", FUNC(zeusAssigned)] call CBA_fnc_addEventHandler;

// Ensure virtual Zeus players are invincible and force interface
if ( player isKindOf "VirtualCurator_F" ) then
{
    // Starting pos for the camera
    private _zeusPos = getPosASL player;
    // Prevent zeus slot from being fucked with
	player allowDamage false;
    player setPosASL [0, 0, 1000]; // Allows zeus modules to talk with each other, while staying out of the combat zone
	bis_fnc_forceCuratorInterface_force = true;
	
	[{
		if ( time > 0 ) then
		{
			params ["_args", "_handle"];
            _args params ["_zeusPos"];
		
			if ( isNull curatorCamera ) then
			{
				openCuratorInterface;
			}
			else
			{
                curatorCamera setPosASL (_zeusPos  vectorAdd [0, 0, 20]); // Move the camera back to the start pos
				_handle call CBA_fnc_removePerFrameHandler;
			};
		};
	}, 0.25, [_zeusPos]] call CBA_fnc_addPerFrameHandler;
    
    // Cleanup manifested zeus characters
    ["zen_remoteControlStopped", {
        params ["_unit"];
        
        if ( _unit getVariable [QGVAR(zeusManifest), false] ) then
        {
            deleteVehicle _unit;
        };
    }] call CBA_fnc_addEventHandler;

    ["zen_curatorDisplayLoaded", {
        _this displayAddEventHandler [ "KeyDown", {
            params ["_disp", "_key", "_shift", "_ctrl", "_alt"];
            
            private _lpp = missionnamespace getVariable ["bis_fnc_curatorPinged_player", objNull];
            
            if ( (!isNull _lpp) && (_key == 57) /* Spacebar */ && _ctrl ) exitWith
            {
                [[0, 0, 0], _lpp, vehicle _lpp] call FUNC(zeusManifest);
                
                true;
            };
            
            false;
        }];
    }] call CBA_fnc_addEventHandler;
};

[{ time > 0 }, {
    [player] remoteExecCall [QFUNC(zeusSetup), 2];
}] call CBA_fnc_waitUntilAndExecute;

[ "setName", {(_this select 0) setName (_this select 1);}] call CBA_fnc_addEventHandler;