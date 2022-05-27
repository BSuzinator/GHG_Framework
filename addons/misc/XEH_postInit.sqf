#include "script_component.hpp"
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/

[] call FUNC(addMinesToZeus);
[] call FUNC(ejectOnDeath);
[] call FUNC(vehicleActions);
[] call FUNC(treatmentNotify);
[] spawn FUNC(failDeadly);
[] spawn FUNC(makeBreifings);

[] call FUNC(initOWO);

[] call FUNC(cameraInit);
[] spawn FUNC(dynamicGroups);
[] call FUNC(footsteps);

if (hasInterface) then {
    [missionNamespace, "OnDisplayRegistered", FUNC(registerJukeboxTracks)] call BIS_fnc_addScriptedEventHandler;
};

if ( getText(configfile >> "CfgPatches" >> "diw_armor_plates_main" >> "versionStr") isEqualTo "0.6.0.0" ) then {
    // ace medical
    ["CAManBase", "InitPost", {
        params ["_unit"];
        _unit setVariable ["ace_medical_engine_$#structural", [0, 0]];
        [{
            (_this getVariable ["aps_HandleDamageEHID", -1]) > -1
        }, {
            private _oldEHID = _this getVariable ["aps_HandleDamageEHID", -1];
            _this removeEventHandler ["HandleDamage", _oldEHID];
            private _id = _this addEventHandler ["HandleDamage", {_this call FUNC(fixAPS)}];
            _this setVariable ["ace_medical_HandleDamageEHID", _id];
            _this setVariable ["aps_HandleDamageEHID", _id];
        }, _unit, 10] call CBA_fnc_waitUntilAndExecute;
    }, true, [], true] call CBA_fnc_addClassEventHandler;
} else {
    private _msg = "DIW Armor Plates System has updated, remove the FIX!";
    systemChat _msg;
    diag_log _msg;
};