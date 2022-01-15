#include "script_component.hpp"
/*======================================
	ghg_fnc_scopeChoice
    Adds ACE option to choose varients of scopes during safe mode
	Called from ghg_fnc_gearUp
	Author: BSuz
======================================*/
if ( !hasInterface ) exitWith {};
params ["_unit", "_cfg", "_camoId"];
if ( _unit getVariable [QGVAR(hasScopeChoice), false] ) exitWith {};

//Get respawn marker for distance check
//private _respawnPos = markerPos format ["respawn_%1", side _unit];

//Condition for changing scopes
private _actionCondition = (if (GVARMAIN(is_training)) then {
	{true};
} else {
	{
        params ["_unit"];
        private _checkTime = (_unit getVariable[QEGVAR(respawn,last_respawn_time), 0]) + 60;
        ((EGVAR(safemode,safe)) || (time <= _checkTime))
	};
});

//Add root action
private _action = ["GHG_Scopes","Scope Selection","\a3\ui_f\data\gui\rsc\rscdisplayarsenal\itemoptic_ca.paa",{},_actionCondition] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

//Private funtion to get displayname of scopes
private _getscreenname = {
	// with thanks to hoverguy and tryteyker
	private ["_suppliedType","_type", "_cfgType","_data"];
	params ["_suppliedType"];
	if ((typeName _suppliedType) == "OBJECT") then {
		_type = (typeof _suppliedType);
	} else {
		_type = _suppliedType;
    };
	//assume classname is provided. if object is provided, get its classname
    switch (true) do
    {
        case(isClass(configFile >> "CfgMagazines" >> _type)): {_cfgType = "CfgMagazines"};
        case(isClass(configFile >> "CfgWeapons" >> _type)): {_cfgType = "CfgWeapons"};
        case(isClass(configFile >> "CfgVehicles" >> _type)): {_cfgType = "CfgVehicles"};
        case(isClass(configFile >> "CfgGlasses" >> _type)): {_cfgType = "CfgGlasses"};
    };
    
	getText (configFile >> _cfgType >> _type >> "displayName");
};

private _camoField = {
    params ["_cfg"];
    if ( isArray _cfg ) then { (getArray _cfg) select _camoId; } else { getText _cfg; };
};

private _changeScope = {
    params ["_target", "_scopeUnit", "_args"];
    _args params ["_wepInd", ["_scopeClass", ""]];
    
    switch (_wepInd) do {
        case 0: { _scopeUnit removePrimaryWeaponItem   ((primaryWeaponItems _scopeUnit  ) # 2); _scopeUnit addPrimaryWeaponItem   _scopeClass };
        case 1: { _scopeUnit removeHandgunItem         ((handgunItems _scopeUnit        ) # 2); _scopeUnit addHandgunItem         _scopeClass };
        case 2: { _scopeUnit removeSecondaryWeaponItem ((secondaryWeaponItems _scopeUnit) # 2); _scopeUnit addSecondaryWeaponItem _scopeClass };
    };
};

{
    private _wepCfg = _cfg >> _x;
    private _wepInd = _forEachIndex;
    
    private _scopeChoices = [];
    
    {
        private _field = [_x] call _camoField;
        if ( _field isNotEqualTo "" ) then { _scopeChoices pushBack _field; };
    } forEach configProperties [_wepCfg >> "Scopes"];
    
    if ( (count _scopeChoices) > 0 ) then
    {
        private _wepClass = [_wepCfg >> "classname"] call _camoField;
        private _wepName = [_wepClass] call _getscreenname;
        private _wepIcon = "";
        
        {
            private _path = format[_x, _wepClass];
            if ( fileExists _path ) exitWith { _wepIcon = _path; };
        } forEach [
            "\rhsafrf\addons\rhs_inventoryicons\data\weapons\%1_ca.paa",
            "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\%1_ca.paa",
            "\rhsgref\addons\rhsgref_inventoryicons\data\weapons\%1_ca.paa",
            "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\%1_ca.paa"
        ];
    
    
        private _wepAction = [format ["GHG_Scopes_Weapon%1", _wepInd], _wepName, _wepIcon, {}, {true}] call ace_interact_menu_fnc_createAction;
        [_unit, 1, ["ACE_SelfActions","GHG_Scopes"], _wepAction] call ace_interact_menu_fnc_addActionToObject;

        private _actPath = ["ACE_SelfActions","GHG_Scopes",format ["GHG_Scopes_Weapon%1", _wepInd]];

        {
            private _scopeClass = _x;
            private _displayName = [_scopeClass] call _getscreenname;
            private _scopeIcon = "";
            
            {
                private _path = format[_x, _scopeClass];
                if ( fileExists _path ) exitWith { _scopeIcon = _path; };
            } forEach [
                "\rhsafrf\addons\rhs_inventoryicons\data\accessories\%1_ca.paa",
                "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\%1_ca.paa",
                "\rhsgref\addons\rhsgref_inventoryicons\data\accessories\%1_ca.paa",
                "\rhssaf\addons\rhssaf_inventoryicons\data\accessories\%1_ca.paa"
            ];

            private _action = [format ["ghg_scopes_%1", _scopeClass], _displayName, _scopeIcon, _changeScope, {true}, {}, [_wepInd, _scopeClass]] call ace_interact_menu_fnc_createAction;
            [_unit, 1, _actPath, _action] call ace_interact_menu_fnc_addActionToObject;
        } forEach _scopeChoices;
        
        private _remAction = ["ghg_scopes_clear", "Remove Scope", "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_exit_cross_ca.paa", _changeScope, {true}, {}, [_wepInd, ""]] call ace_interact_menu_fnc_createAction;
        [_unit, 1, _actPath, _remAction] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach ["Weapon_1", "Weapon_2", "Weapon_3"];

_unit setVariable [QGVAR(hasScopeChoice), true];