#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_resupplyActions
	Adds actions to vehicles to resupply when close to a resupply point
	
	Author: BSuz	
======================================*/
if (!hasInterface) exitwith {};

// This is why 'private' is important!
private _factionLoadout = [playerSide] call FUNC(getFactionLoadout);
if ( isNull _factionLoadout ) exitWith {};

private _crateList = configProperties [ _factionLoadout >> "Crates", "true", true ];
private _crateCfg  = [];
private _crateName = [];

{
    // Skip crates with no classname
    private _cfgn = configName _x;
    if ( (_cfgn != "ghg_crate_base") && { (getText (_x >> "classname")) != "" } ) then
    {
        private _dn = _x >> "displayname";
        _crateName pushBack (if ( isText _dn ) then { getText _dn } else { _cfgn });
        _crateCfg  pushBack _x;
    };
} forEach _crateList;

//Add root action
private _resupplyCondition = {
	params ["_target", "_player", "_actionParams"];
	private _resupplyDistance = 30;
	if (_target isKindOf "Ship") then {_resupplyDistance = 50;};

    private _okay = false;
    {
        private _rsupObj = nearestObject [_target, _x];
        if ( !isNull _rsupObj && { (_target distance _rsupObj) < _resupplyDistance } ) exitwith {
            _okay = true;
        };
    } forEach ["Land_Ammostore2", "Land_Cargo20_military_green_F", "Land_Cargo20_sand_F","ghg_servicePoint"];

	_okay // return
};
//Original Logo: "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa"
//Alt logo: "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa"
private _mainAction = ["ghg_resupplyLoad", "Load Resupply", "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa", {}, _resupplyCondition] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _mainAction, true] call ace_interact_menu_fnc_addActionToClass;

//Add actions for each crate
{
	private _cfg = _x;
	private _name = _crateName select _forEachIndex;
	
	private _statement = {
		params ["_target", "_player", "_actionParams"];
		_actionParams params ["_cfg","_name"];
        private _crate = [_cfg, [0, 0, 1000], 0] call FUNC(resupplyCreate);
        
        if !(isNull _crate) then {
            private _didLoad = [_crate, _target, true] call ace_cargo_fnc_loadItem;
            if (_didLoad) then
            {
                systemChat format ["Loaded %1", _name];
            }
            else
            {
                deleteVehicle _crate;
				systemChat format ["Unable to Load %1", _name];
            };
        };
	};
	private _action = [format ["ghg_resupplyLoad_%1", _cfg], format ["Load %1", _name], "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa", _statement, {true},{},[_cfg,_name]] call ace_interact_menu_fnc_createAction;
	["LandVehicle", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	["Air", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	["Ship", 0, ["ACE_MainActions","ghg_resupplyLoad"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	
} forEach _crateCfg;

//Service Point actions

private _serviceCondition = {
	private _resupplyDistance = 10;

    private _okay = false;
    {
        private _rsupObj = nearestObject [_target, _x];
        if ( !isNull _rsupObj && { (_target distance _rsupObj) < _resupplyDistance } ) exitwith {
            _okay = true;
        };
    } forEach ["ghg_servicePoint"];

	_okay // return
};

private _mainServiceAction = ["ghg_serviceRoot", "Vehicle Service", "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {}, _serviceCondition] call ace_interact_menu_fnc_createAction;

["LandVehicle", 0, ["ACE_MainActions"], _mainServiceAction, true] call ace_interact_menu_fnc_addActionToClass;
["Air", 0, ["ACE_MainActions"], _mainServiceAction, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _mainServiceAction, true] call ace_interact_menu_fnc_addActionToClass;

private _pylonAction = ["ghg_servicePylons", "Configure Pylons", "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {[_target] call ace_pylons_fnc_showDialog;}, {[_player] call ace_repair_fnc_isEngineer}] call ace_interact_menu_fnc_createAction;

private _rearmAction = ["ghg_serviceRearm", "Rearm", "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa", {[_target,1] remoteExecCall ["setVehicleAmmo", _target];}, {true}] call ace_interact_menu_fnc_createAction;

private _refuelAction = ["ghg_serviceRefuel", "Refuel", "\a3\ui_f\data\igui\cfg\simpletasks\types\refuel_ca.paa", {[_target,1] remoteExecCall ["setFuel", _target];}, {true}] call ace_interact_menu_fnc_createAction;

private _repairAction = ["ghg_serviceRepair", "Repair", "\a3\ui_f\data\igui\cfg\simpletasks\types\repair_ca.paa", {[_target,0] remoteExecCall ["setDamage", _target];}, {true}] call ace_interact_menu_fnc_createAction;

private _dismantleAction = ["ghg_serviceDismantle", "Dismantle", "\a3\ui_f\data\igui\cfg\simpletasks\types\container_ca.paa", {_target remoteExecCall ["deleteVehicle", _target];}, {!isNull nearestObject [_target, "GHG_Vehicle_Factory"]}] call ace_interact_menu_fnc_createAction;

["Air", 0, ["ACE_MainActions","ghg_serviceRoot"], _pylonAction, true] call ace_interact_menu_fnc_addActionToClass;

{
	private _spa = _x;
	["LandVehicle", 0, ["ACE_MainActions","ghg_serviceRoot"], _spa, true] call ace_interact_menu_fnc_addActionToClass;
	["Air", 0, ["ACE_MainActions","ghg_serviceRoot"], _spa, true] call ace_interact_menu_fnc_addActionToClass;
	["Ship", 0, ["ACE_MainActions","ghg_serviceRoot"], _spa, true] call ace_interact_menu_fnc_addActionToClass;
} forEach [_rearmAction,_refuelAction,_repairAction,_dismantleAction];


diag_log "[GHG]: Vehicle Resupply Actions Loaded";














