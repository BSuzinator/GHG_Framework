/*======================================
	ghg_fnc_scopeChoice
    Adds ACE option to choose varients of scopes during safe mode
	Called from ghg_fnc_gearUp
	Author: BSuz
======================================*/
if ( !hasInterface ) exitWith {};
params ["_unit", "_unitType", "_faction"];

//List of units excluded from scope selection
_excludeList = [
	"soldier_sl_f",
	"soldier_tl_f",
	"officer_f",
	"sniper_f",
	"soldier_uav_f",
	"support_MG_f"
	];
if (_unitType in _excludeList) exitWith {};

//Get respawn marker for distance check
_pside = side _unit;
_respawnMkr = format ["respawn_%1",_pside];
_respawnPos = markerPos _respawnMkr;
_player = _unit;

//Condition for changing scopes
_actionCondition = {SAFE_MODE_ENABLED};

//Add root action
_action = ["GHG_Scopes","Scope Selection","\a3\ui_f\data\gui\rsc\rscdisplayarsenal\itemoptic_ca.paa",{systemChat ""},_actionCondition] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

//Private funtion to get displayname of scopes
tky_fnc_getscreenname = {
	// with thanks to hoverguy and tryteyker
	private ["_suppliedtype","_type", "_cfg_type","_data", "_ret"];
	params ["_suppliedtype"];
	if ((typeName _suppliedtype) == "OBJECT") then
		{
		_type = (typeof _suppliedtype);
		}
		else
		{
		_type = _suppliedtype;
		};
	//assume classname is provided. if object is provided, get its classname
    switch (true) do
    {
        case(isClass(configFile >> "CfgMagazines" >> _type)): {_cfg_type = "CfgMagazines"};
        case(isClass(configFile >> "CfgWeapons" >> _type)): {_cfg_type = "CfgWeapons"};
        case(isClass(configFile >> "CfgVehicles" >> _type)): {_cfg_type = "CfgVehicles"};
        case(isClass(configFile >> "CfgGlasses" >> _type)): {_cfg_type = "CfgGlasses"};
    };
	_ret = getText (configFile >> _cfg_type >> _type >> "displayName");
	_ret
};

//US Backed Forces
_usScopes = 
[
"rhsusf_acc_g33_t1",	//red dot with magnifier
"rhsusf_acc_g33_xps3",	//holo with magnifier
"rhsusf_acc_eotech_xps3", //holo
"rhsusf_acc_eotech_552", //holo but different
"rhsusf_acc_eotech_552_d", //holo but desert camo
"rhsusf_acc_eotech_552_wd", //holo but woodland camo
"rhsusf_acc_compm4" //red dot
];


//RU Backed Forces
_ruScopes = 
[
"rhs_acc_1p78",	//magnifier
"rhs_acc_pkas", //red dot
"rhs_acc_okp7_dovetail", //reflex
"rhs_acc_1p63" //varient red dot
];

_scopeChoice = [];
_scopeFlag = "";

//Set available scopes based on faction
switch (_faction select 0) do
{
	case "usArmy": {_scopeChoice = _usScopes;_scopeFlag = "us";};
	case "usArmySF": {_scopeChoice = _usScopes;_scopeFlag = "us";};
	case "usMC": {_scopeChoice = _usScopes;_scopeFlag = "us";};
	case "serbian": {_scopeChoice = _usScopes;_scopeFlag = "us";};
	case "russian": {_scopeChoice = _ruScopes;_scopeFlag = "ru";};
	default {_scopeChoice = _usScopes;_scopeFlag = "us";};
};

{
	_scopeClass = _x;
	_displayName = [_scopeClass] call tky_fnc_getscreenname;
	
	_scopeIcon = switch (_scopeFlag) do
	{
		case "ru": {format ["\rhsafrf\addons\rhs_inventoryicons\data\accessories\%1_ca.paa", _scopeClass]};
		case "us": {format ["\rhsusf\addons\rhsusf_inventoryicons\data\accessories\%1_ca.paa", _scopeClass]};
		default {format ["\rhsusf\addons\rhsusf_inventoryicons\data\accessories\%1_ca.paa", _scopeClass]};
	};

	_statement = {
		params ["_target", "_player", "_actionParams"];
		_scopeClass = _actionParams select 0;
		_player removePrimaryWeaponItem (primaryWeaponItems _player select 2);
		_player addPrimaryWeaponItem _scopeClass;
		};
	
	_actionName = format ["ghg_scopes_%1", _scopeClass];
	_action = [_actionName,_displayName,_scopeIcon,_statement,{true}, {}, [_scopeClass]] call ace_interact_menu_fnc_createAction;
	[_unit, 1, ["ACE_SelfActions","GHG_Scopes"], _action] call ace_interact_menu_fnc_addActionToObject;
	
} forEach _scopeChoice;

_statement = {
		_player removePrimaryWeaponItem ((primaryWeaponItems _player) select 2);
	};

_action = ["ghg_scopes_clear","Remove Scope","\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_exit_cross_ca.paa",_statement,{true}] call ace_interact_menu_fnc_createAction;
[_unit, 1, ["ACE_SelfActions","GHG_Scopes"], _action] call ace_interact_menu_fnc_addActionToObject;