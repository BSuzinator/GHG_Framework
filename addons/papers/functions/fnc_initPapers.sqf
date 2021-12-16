#include "script_component.hpp"
/*======================================
	Initialize papers
	Author: Quantx
======================================*/
GVAR(identity) = []; GVAR(identity) set [PAPERS_ID_LIST_LEN - 1, nil];
GVAR(work) = []; GVAR(work) set [PAPERS_ID_LIST_LEN - 1, nil];
GVAR(entry) = []; GVAR(entry) set [PAPERS_ID_LIST_LEN - 1, nil];
GVAR(vehicle) = []; GVAR(vehicle) set [PAPERS_ID_LIST_LEN - 1, nil];

["registerIdentity", {GVAR(identity) set _this}] call CBA_fnc_addEventHandler;
["registerWork",     {GVAR(work) set _this}    ] call CBA_fnc_addEventHandler;
["registerEntry",    {GVAR(entry) set _this}   ] call CBA_fnc_addEventHandler;
["registerVehicle",  {GVAR(vehicle) set _this} ] call CBA_fnc_addEventHandler;

if ( hasInterface ) then
{
    private _viewPlate = ["viewPlate", "Check License Plate", "", {hint getPlateNumber _target}, {!((getPlateNumber _target) == "" || "spz" in (selectionNames _target))}] call ace_interact_menu_fnc_createAction;
    ["Car", 0, ["ACE_MainActions"], _viewPlate, true] call ace_interact_menu_fnc_addActionToClass;
    
    private _regVeh = ["regVeh", "Register Vehicle", "", FUNC(registerVehicle), {"GHG_Papers_Vehicle" in ([_player] call FUNC(getPapers))}] call ace_interact_menu_fnc_createAction;
    ["Car", 0, ["ACE_MainActions"], _regVeh, true] call ace_interact_menu_fnc_addActionToClass;
    
    private _regId = ["regId", "Register Identity", "", FUNC(registerIdentity), {"GHG_Papers_Identity" in ([_player] call FUNC(getPapers))}] call ace_interact_menu_fnc_createAction;
    ["CAManBase", 1, ["ACE_SelfActions"], _regId, true] call ace_interact_menu_fnc_addActionToClass;
};