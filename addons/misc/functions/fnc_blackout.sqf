#include "script_component.hpp"
/*======================================
	ghg_fnc_blackout
	Adds action to object to turn off all lights within the given radius
	Use on "Land_TransferSwitch_01_F"
	Author: BSuz
	
	Example:
	[_hostObject, _radius] call ghg_fnc_blackout;
======================================*/
params ["_hostObject", "_radius"];

private _statement = {
	params ["_hostObject", "_player", "_actionParams"];
	_actionParams params ["_radius"];
	
	_hostObject animateSource ["switchposition",0];
	_hostObject setDamage 1;
	_hostObject setObjectTextureGlobal [1,"#(argb,8,8,3)color(1,0,0,0.05,ca)"];
	
	_lampList = [
		"Lamps_base_F", 
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
		"Land_Runway_PAPI_4"
	];
	
	private _lamps = nearestObjects [_hostObject, _lampList, _radius];
	
	{
		for "_i" from 0 to count getAllHitPointsDamage _x do
		{
			_x setHitIndex [_i, 0.97];
			[_x, "OFF"] remoteExec ["switchLight",0,true];
		};
	} forEach _lamps;
	
	[_hostObject,0,["ACE_MainActions","blackout"]] call ace_interact_menu_fnc_removeActionFromObject;
	
};

private _action = ["blackout","Switch Off","\a3\modules_f_curator\data\portraitlightning_ca.paa",_statement,{true},{},[_radius], [0,0,0], 100] call ace_interact_menu_fnc_createAction;

[_hostObject, 0, ["ACE_MainActions"], _action] remoteExec["ace_interact_menu_fnc_addActionToObject",2];