#include "script_component.hpp"
/*======================================
	ghg_fnc_blackout
	Adds action to object to turn off all lights within the given radius
	Use on "Land_TransferSwitch_01_F"
	Author: BSuz
	
	[_hostObject,0,["ACE_MainActions","blackoutDisable"]] call ace_interact_menu_fnc_removeActionFromObject;
	[_hostObject,0,["ACE_MainActions","blackoutEnable"]] call ace_interact_menu_fnc_removeActionFromObject;
	
	Example:
	[_hostObject, _radius] call ghg_misc_fnc_blackout;
======================================*/
params ["_hostObject", "_radius"];

private _lampList = [
	//"Lamps_base_F", 
	"PowerLines_base_F", 
	"PowerLines_Small_base_F",
	"Land_fs_roof_F",
	"Land_FuelStation_01_roof_F",
	"Land_FuelStation_02_roof_F",
	"Land_FuelStation_01_roof_malevil_F",
	"Land_NavigLight",
	"Land_Flush_Light_green_F",
	"Land_Flush_Light_red_F",
	"Land_Flush_Light_yellow_F",
	"Land_NavigLight_3_F",
	"Land_runway_edgelight",
	"Land_runway_edgelight_blue_F",
	"Land_Runway_PAPI",
	"Land_Runway_PAPI_2",
	"Land_Runway_PAPI_3",
	"Land_Runway_PAPI_4",
	"Land_Cyt_WallLight_Cream_01_A",
	"Land_Cyt_WallLight_Cream_01_B",
	"Land_Cyt_WallLight_Cream_01_C",
	"Land_Cyt_TubeLight_White_01_A",
	"Land_Cyt_TubeLight_White_01_B",
	"Land_Cyt_TubeLight_White_01_C",
	"Land_Cyt_BowlLight_White_01_A",
	"Land_Cyt_BowlLight_White_01_B",
	"Land_Cyt_BowlLight_White_01_C",
	"Land_Cyt_FloorLight_White_01_E"
	
];


private _statementDisable = {
	params ["_hostObject", "_player", "_actionParams"];
	_actionParams params ["_radius", "_lampList"];
	
	_hostObject animateSource ["switchposition",0];
	_hostObject setDamage 0.97;
	_hostObject animateSource ["light",1];  
	_hostObject setObjectTextureGlobal [1,"#(argb,8,8,3)color(1,0,0,0.05,ca)"];
	
	
	private _lamps = nearestObjects [_hostObject, _lampList, _radius];
	
	{
		for "_i" from 0 to count getAllHitPointsDamage _x do
		{
			_x setHitIndex [_i, 0.97];
			[_x, "OFF"] remoteExec ["switchLight",0,true];
		};
	} forEach _lamps;
	
	
};

private _statementEnable = {
	params ["_hostObject", "_player", "_actionParams"];
	_actionParams params ["_radius", "_lampList"];
	
	_hostObject animateSource ["switchposition",1];
	_hostObject setDamage 0;
	_hostObject animateSource ["light",1];  
	_hostObject setObjectTextureGlobal [1,"#(argb,0,0.8,0)color(1,0,0,0.05,ca)"];
	
	
	private _lamps = nearestObjects [_hostObject, _lampList, _radius];
	
	{
		for "_i" from 0 to count getAllHitPointsDamage _x do
		{
			_x setHitIndex [_i, 0];
			[_x, "ON"] remoteExec ["switchLight",0,true];
		};
	} forEach _lamps;
	
};

private _actionDisable = ["blackoutDisable","Switch Off","\a3\modules_f_curator\data\portraitlightning_ca.paa",_statementDisable,{damage _target < 0.9},{},[_radius, _lampList], [0,0,0], 100] call ace_interact_menu_fnc_createAction;

private _actionEnable = ["blackoutEnable","Switch On","\a3\modules_f_curator\data\portraitlightning_ca.paa",_statementEnable,{damage _target > 0},{},[_radius, _lampList], [0,0,0], 100] call ace_interact_menu_fnc_createAction;

[_hostObject, 0, ["ACE_MainActions"], _actionDisable] call ace_interact_menu_fnc_addActionToObject;
[_hostObject, 0, ["ACE_MainActions"], _actionEnable] call ace_interact_menu_fnc_addActionToObject;