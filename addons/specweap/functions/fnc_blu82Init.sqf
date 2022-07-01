#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_blu82Init
	Called on init
======================================*/
if !(hasInterface) exitWith {};

#define BLU82_C130_Base_Class "RHS_C130J_Base"
#define BLU82_Base_Class "vn_prop_blu82_01"
#define BLU82_Load_Pos [0, -0.9, -4.6]
#define BLU82_Load_Distance 25
#define BLU82_Act_Pos [0, 0, 1]
#define BLU82_Act_Dist 5

private _statement = {
    params ["_bomb", "_player", "_args"];
    _args params ["_unload"];
    
    if (_unload) then
    {
        private _plane = attachedTo _bomb;
        
        private _pos = (getPos _plane) findEmptyPosition [0, BLU82_Load_Distance * 1.5, BLU82_Base_Class];
        
        if (count _pos == 0) exitWith {
            systemChat "Failed to unload BLU-82";
        };
        
        detach _bomb;
        _bomb setPos _pos;
    }
    else
    {
        private _pos = getPos _bomb;
    
        private _plane = nearestObject [_pos, BLU82_C130_Base_Class];
        
        if ((isNull _plane) || {!alive _plane}) exitWith {
            systemChat "Failed to load BLU-82";
        };
        
        _bomb setVariable [QGVAR(airdrop_deploy), QUOTE(_this spawn FUNC(blu82Deploy)), true];

        _bomb attachTo [_plane, BLU82_Load_Pos];
        
        _bomb setDir 180;
        _bomb setPosATL getPosATL _bomb;
    };
};

private _condition = {
    params ["_bomb", "_player", "_args"];
    _args params ["_unload"];
    
    private _plane = attachedTo _bomb;
    private _loaded = !(isNull _plane);
    
    private _pos = getPos _bomb;
    if !(_loaded) then {
        _plane = nearestObject [_pos, BLU82_C130_Base_Class];
    };
    
    /*  Ensure that:
        Plane exists
        Plane is alive
        Plane is stationary
        Plane is within the loading range
        Plane's ramp is fully open
        Plane does not have a bomb loaded
    */
    //diag_log [isNull _plane, !alive _plane, speed _plane >= 1, (_plane distance _pos) > BLU82_Load_Distance, (_plane animationSourcePhase "ramp") != 1];
    
    if ( (isNull _plane) || {!alive _plane} || {(speed _plane >= 1)} || {(_plane distance _pos) > BLU82_Load_Distance} || {(_plane animationSourcePhase "ramp") != 1} ) exitWith {false};
    
    //systemChat "HERE";
    
    if  (_unload && _loaded) exitWith {true}; // Bomb is loaded, and we're unloading it
    if !(_unload || _loaded) exitWith {true}; // Bomb is NOT loaded and we're loading it
    
    false;
};
 
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