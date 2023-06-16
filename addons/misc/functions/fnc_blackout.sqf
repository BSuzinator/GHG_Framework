#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_blackout
	Handles disable / enable -ing of lamps within given radius of tswitch
	Use on "GHG_TransferSwitch_F"
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _radius = _target getVariable ["GHG_Blackout_Radius",3000];
private _hostObject = _target;

private _lampList = [
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

private _jipTag = format ["GHG_JIP_Blackout_%1",str _hostObject];
private _lamps = nearestObjects [_hostObject, _lampList, _radius];

private _enabled = _target getVariable ["ghg_blackout_tswitch_state", true];
switch (_enabled) do
{
	case true: {
		_target setVariable ["ghg_blackout_tswitch_state", false, true];
		[_hostObject, _lamps] remoteExec [QFUNC(blackoutDisable),0, _jipTag];
	};
	case false: {
		_target setVariable ["ghg_blackout_tswitch_state", true, true];
		//Do Enable
		[_hostObject, _lamps] remoteExec [QFUNC(blackoutEnable),0, _jipTag];		
	};
};