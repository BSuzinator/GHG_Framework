#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_blu82Init
	Called on init
======================================*/
if !(hasInterface) exitWith {};

#define BLU82_Base_Class "vn_prop_blu82_01"
#define BLU82_C130_Base_Class "RHS_C130J_Base"
#define BLU82_C130_Load_Pos [0, -0.9, -4.6]
#define BLU82_M54_Base_Class "vn_wheeled_m54_01_base"
#define BLU82_M54_Load_Pos [0, -1.8, -0.5]
#define BLU82_M54_Hide_List ["user_sparewheel_hide", "user_ammoboxes_hide", "user_canopy_rear_hide", "user_canopy_rear_frame_hide", "user_canopy_rear_frame_02_hide", "user_bench_hide"]
#define BLU82_Load_Distance 25
#define BLU82_Act_Pos [0, 0, 1]
#define BLU82_Act_Dist 5


private _statement = {
    params ["_bomb", "_player", "_args"];
    _args params ["_unload"];
    
    if (_unload) then
    {
        private _veh = attachedTo _bomb;
        /*
        private _pos = (getPos _veh) findEmptyPosition [0, BLU82_Load_Distance, BLU82_Base_Class];
        
        if (count _pos == 0) exitWith {
            systemChat "Failed to unload BLU-82";
        };
        */
        
        detach _bomb;
        
        private _pos = [0, 0, 0];
        
        if (_veh isKindOf BLU82_C130_Base_Class) then
        {
            _pos = _veh modelToWorld [0, -12, 0];
        }
        else
        {
            ["lockCargoList", [_veh, false, []], owner _veh] call CBA_fnc_localEvent;
            
            {
                private _name = BLU82_M54_Hide_List select _forEachIndex;
                _veh animate [_name, _x, true];
            } forEach (_veh getVariable [QGVAR(blu82_hide), []]);
            
            _pos = _veh modelToWorld [0, -7, 0];
        };
        
        _pos set [2, 0];
        _bomb setPos _pos;
    }
    else
    {
        private _pos = getPos _bomb;
    
        private _vehList = nearestObjects [_pos, [BLU82_M54_Base_Class, BLU82_C130_Base_Class], BLU82_Load_Distance, false];
        if ( (count _vehList) == 0 ) exitWith {
            systemChat "Failed to load BLU-82";
        };
        private _veh = _vehList select 0;
        
        if (!alive _veh) exitWith {
            systemChat "Failed to load BLU-82";
        };
        
        _bomb setVariable [QGVAR(airdrop_deploy), QUOTE(_this spawn FUNC(blu82Deploy)), true];
        
        if (_veh isKindOf BLU82_C130_Base_Class) then
        {
            _bomb attachTo [_veh, BLU82_C130_Load_Pos];
            _bomb setDir 180;
            _bomb setPosATL getPosATL _bomb;
        }
        else
        {
            _bomb attachTo [_veh, BLU82_M54_Load_Pos];
            
            // Lock all cargo seats since the bomb is now occupying them (slot 10 is the front passenger seat)
            ["lockCargoList", [_veh, true, [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12]], owner _veh] call CBA_fnc_localEvent;
            
            private _oldHide = [];
            {
                _oldHide pushBack (_veh animationPhase _x);
                _veh animate [_x, 1, true];
                
            } forEach BLU82_M54_Hide_List;
            _veh setVariable [QGVAR(blu82_hide), _oldHide, true];
        };
    };
};

private _condition = {
    params ["_bomb", "_player", "_args"];
    _args params ["_unload"];
    
    private _veh = attachedTo _bomb;
    private _loaded = !(isNull _veh);
    
    private _pos = getPos _bomb;
    if !(_loaded) then {
        private _vehList = nearestObjects [_pos, [BLU82_M54_Base_Class, BLU82_C130_Base_Class], BLU82_Load_Distance, false];
        
        // No vehicles in range
        if ( (count _vehList) == 0 ) exitWith {false};
        
        _veh = _vehList select 0;
    };
    
    // Vehicle must exist and be stationary
    if ( (isNull _veh) || {!alive _veh} || {(speed _veh >= 1)} ) exitWith {false};

    // Plane's ramp is not down
    if ( (_veh isKindOf BLU82_C130_Base_Class) && {(_veh animationSourcePhase "ramp") != 1} ) exitWith {false};
    
    //systemChat "HERE";
    
    private _ret = false;
    
    if  (_unload && _loaded) then {_ret = true}; // Bomb is loaded, and we're unloading it
    if !(_unload || _loaded) then // Bomb is NOT loaded and we're loading it
    {
        // Only one bomb per vehicle
        if (((attachedObjects _veh) findIf {_x isKindOf BLU82_Base_Class}) < 0) then {_ret = true};
    };
    
    _ret;
};

["lockCargoList", {
    params [
        ["_veh", objNull, [objNull]],
        ["_lock", false, [true]],
        ["_slots", [], [[]]]
    ];
    if (isNull _veh) exitWith {};
    
    if ((count _slots) > 0) then
    {
        {
            _veh lockCargo [_x, _lock];
        } forEach _slots;
    }
    else
    {
        _veh lockCargo _lock;
    };
}] call CBA_fnc_addEventHandler;
 
// Add the main action ourselves to ensure it is in the right spot
private _mainAction = ["ACE_MainActions", localize "STR_ACE_Interaction_MainAction", "", {}, {true}, {}, [], {BLU82_Act_Pos}, BLU82_Act_Dist] call ace_interact_menu_fnc_createAction;
[BLU82_Base_Class, 0, [], _mainAction] call ace_interact_menu_fnc_addActionToClass;

private _loadAct =   [  "loadPackage",   "Load BLU-82", "", _statement, _condition, {}, [false]] call ace_interact_menu_fnc_createAction;
private _unloadAct = ["unloadPackage", "Unload BLU-82", "", _statement, _condition, {}, [true ]] call ace_interact_menu_fnc_createAction;

[BLU82_Base_Class, 0, ["ACE_MainActions"],   _loadAct, true] call ace_interact_menu_fnc_addActionToClass;
[BLU82_Base_Class, 0, ["ACE_MainActions"], _unloadAct, true] call ace_interact_menu_fnc_addActionToClass;

[BLU82_C130_Base_Class, "init", {
    params ["_unit"];
    _unit enableVehicleCargo false;
}, nil, [], true] call CBA_fnc_addClassEventHandler;