#include "script_component.hpp"
/*======================================
	ghg_fnc_radioJammerEquip
	Called from radioJammer
	Author: BSuz
======================================*/
params ["_jammer","_range"];
_tswitch = objNull;
_satAnt = objNull;
_gen = objNull;
_omniAnt = objNull;

_jammer setVariable ["ghg_jammer_maxRange",_range, true];

private _greenHumvees = ["CUP_B_M1152_USMC", "CUP_B_M1152_WDL_USA"];

private _sandHumvees = [ "CUP_B_M1152_USA" ];

private _blackHumvees = ["LOP_ISTS_OPF_M998_D_4DR","LOP_ISTS_M998_D_4DR"];

if (_jammer isKindOf "CUP_Boxer_Base_Empty") then {
	_tswitch = "Land_TransferSwitch_01_F" createVehicle [0,0,0]; 
	_tswitch setVariable ["BIS_enableRandomization", true]; 
	_satAnt = "SatelliteAntenna_01_Mounted_Olive_F" createVehicle [0,0,0]; 
	_satAnt setVariable ["BIS_enableRandomization", true]; 
	_gen = "PowerGenerator" createVehicle [0,0,0]; 
	_gen setVariable ["BIS_enableRandomization", true]; 
	_omniAnt = "OmniDirectionalAntenna_01_olive_F" createVehicle [0,0,0]; 
	_omniAnt setVariable ["BIS_enableRandomization", true]; 
	_tswitch attachTo[_jammer,[-1.176,1.222,-0.9]]; 
	_tswitch setVectorDirAndUp [[1,0,0], [0,0,1]];
	_satAnt attachTo[_jammer,[0,1.411,0.77]]; 
	_gen attachTo[_jammer,[0,-0.224,0.22]]; 
	_omniAnt attachTo[_jammer,[0.034,-2.132,1.5]];
	_tswitch animateSource ["switchposition",1];
};

if (_jammer isKindOf "CUP_Ural_Empty_Base") then {
	_tswitch = "Land_TransferSwitch_01_F" createVehicle [0,0,0]; 
	_tswitch setVariable ["BIS_enableRandomization", true]; 
	_satAnt = "SatelliteAntenna_01_Mounted_Olive_F" createVehicle [0,0,0]; 
	_satAnt setVariable ["BIS_enableRandomization", true]; 
	_gen = "PowerGenerator" createVehicle [0,0,0]; 
	_gen setVariable ["BIS_enableRandomization", true]; 
	_omniAnt = "OmniDirectionalAntenna_01_olive_F" createVehicle [0,0,0]; 
	_omniAnt setVariable ["BIS_enableRandomization", true]; 
	_tswitch attachTo[_jammer,[-1.176,1.222,-0.9]]; 
	_tswitch setVectorDirAndUp [[1,0,0], [0,0,1]];
	_satAnt attachTo[_jammer,[0,1.411,0.77]]; 
	_gen attachTo[_jammer,[0,-0.224,0.22]]; 
	_omniAnt attachTo[_jammer,[0.034,-2.132,1.5]];
	_tswitch animateSource ["switchposition",1];
};

if (typeOf _jammer in _greenHumvees) then {
	_tswitch = "Land_TransferSwitch_01_F" createVehicle [0,0,0]; 
	_tswitch setVariable ["BIS_enableRandomization", true]; 
	_satAnt = "SatelliteAntenna_01_Mounted_Olive_F" createVehicle [0,0,0]; 
	_satAnt setVariable ["BIS_enableRandomization", true]; 
	_gen = "Land_Portable_generator_F" createVehicle [0,0,0]; 
	_gen setVariable ["BIS_enableRandomization", true]; 
	_omniAnt = "OmniDirectionalAntenna_01_olive_F" createVehicle [0,0,0]; 
	_omniAnt setVariable ["BIS_enableRandomization", true]; 
	_tswitch attachTo[_jammer,[-0.440748,-2.27531,-1.259]]; 
	//_tswitch setVectorDirAndUp [[1,0,0], [0,0,1]];
	_satAnt attachTo[_jammer,[0.00425148,1.44269,-0.775328]];
	_satAnt setVectorDirAndUp [[0,0,0.3], [0,1,0]];
	_gen attachTo[_jammer,[-0.320747,-1.37231,-0.57]]; 
	_omniAnt attachTo[_jammer,[0.142252,-1.62931,-0.914999]];
	_tswitch animateSource ["switchposition",1];
};

if (typeOf _jammer in _sandHumvees) then {
	_tswitch = "Land_TransferSwitch_01_F" createVehicle [0,0,0]; 
	_tswitch setVariable ["BIS_enableRandomization", true]; 
	_satAnt = "SatelliteAntenna_01_Mounted_Sand_F" createVehicle [0,0,0]; 
	_satAnt setVariable ["BIS_enableRandomization", true]; 
	_gen = "Land_Portable_generator_F" createVehicle [0,0,0]; 
	_gen setVariable ["BIS_enableRandomization", true]; 
	_omniAnt = "OmniDirectionalAntenna_01_sand_F" createVehicle [0,0,0]; 
	_omniAnt setVariable ["BIS_enableRandomization", true]; 
	
	_tswitch attachTo[_jammer,[-0.440748,-2.27531,-1.259]]; 
	
	_satAnt attachTo[_jammer,[0,1.45,0]]; 
	_satAnt setVectorDirAndUp [[0,0,0.3], [0,1,0]];
	
	_gen attachTo[_jammer,[-0.320747,-1.37231,-0.57]]; 
	_gen setVectorDirAndUp [[1,0,0], [0,0,1]];
	
	_omniAnt attachTo[_jammer,[0.142252,-1.62931,1.15]];
	
	_tswitch animateSource ["switchposition",1];
};

if (typeOf _jammer in _blackHumvees) then {
	_tswitch = "Land_TransferSwitch_01_F" createVehicle [0,0,0]; 
	_tswitch setVariable ["BIS_enableRandomization", true]; 
	_satAnt = "SatelliteAntenna_01_Mounted_Black_F" createVehicle [0,0,0]; 
	_satAnt setVariable ["BIS_enableRandomization", true]; 
	_gen = "Land_Portable_generator_F" createVehicle [0,0,0]; 
	_gen setVariable ["BIS_enableRandomization", true]; 
	_omniAnt = "OmniDirectionalAntenna_01_black_F" createVehicle [0,0,0]; 
	_omniAnt setVariable ["BIS_enableRandomization", true]; 
	_tswitch attachTo[_jammer,[-0.440748,-2.27531,-1.259]]; 
	//_tswitch setVectorDirAndUp [[1,0,0], [0,0,1]];
	_satAnt attachTo[_jammer,[0.00425148,1.44269,-0.775328]];
	_satAnt setVectorDirAndUp [[0,0,0.3], [0,1,0]];
	_gen attachTo[_jammer,[-0.320747,-1.37231,-0.57]]; 
	_omniAnt attachTo[_jammer,[0.142252,-1.62931,-0.914999]];
	_tswitch animateSource ["switchposition",1];
};


_deathWaitHandle = [_jammer,_tswitch,_satAnt,_gen,_omniAnt] spawn {
	params["_jammer","_tswitch","_satAnt","_gen","_omniAnt"];
	waitUntil {sleep 5;not alive _jammer};
	deleteVehicle _tswitch;
	deleteVehicle _satAnt;
	deleteVehicle _gen;
	deleteVehicle _omniAnt;
};

_jammer setVariable["ghg_jammer_deathWaitHandler",_deathWaitHandle,true];

private _statementDisable = {
	params ["_tswitch", "_player", "_actionParams"];
	_actionParams params ["_jammer"];
	_tswitch animateSource ["switchposition",0];
	//_target animateSource ["light",1];
	_tswitch setObjectTextureGlobal [1,"#(argb,8,8,3)color(1,0,0,0.05,ca)"];
	_jammer setVariable ["acre_jamming_range", 0, true];
};

private _statementEnable = {
	params ["_tswitch", "_player", "_actionParams"];
	_actionParams params ["_jammer"];
	_tswitch animateSource ["switchposition",1];
	//_target animateSource ["light",1]; ﻿
	_tswitch setObjectTextureGlobal [1,"#(argb,8,8,3)color(0,1,0,0.05,ca)"];
	_jammer setVariable ["acre_jamming_range", _jammer getVariable ["ghg_jammer_maxRange", 500], true];
};
private _conditionEnable = {params ["_tswitch", "_player", "_actionParams"];_actionParams params ["_jammer"];_jammer getVariable ["acre_jamming_range", 0] isEqualTo 0};
private _conditionDisable = {params ["_tswitch", "_player", "_actionParams"];_actionParams params ["_jammer"];_jammer getVariable ["acre_jamming_range", 0] isNotEqualTo 0};

private _actionDisable = ["jammerDisable","Disable","\a3\modules_f_curator\data\portraitlightning_ca.paa",_statementDisable,_conditionDisable,{},[_jammer], "controlling_handle", 10] call ace_interact_menu_fnc_createAction;
private _actionEnable = ["jammerEnable","Enable","\a3\ui_f\data\gui\rsc\rscdisplayarsenal\radio_ca.paa",_statementEnable,_conditionEnable,{},[_jammer], "controlling_handle", 10] call ace_interact_menu_fnc_createAction;

[_tswitch, 0, ["ACE_MainActions"], _actionDisable] remoteExec["ace_interact_menu_fnc_addActionToObject",0];
[_tswitch, 0, ["ACE_MainActions"], _actionEnable] remoteExec["ace_interact_menu_fnc_addActionToObject",0];