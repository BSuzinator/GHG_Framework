#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripDeploy
	Action of Deploying spike strip
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _result = [_player, "GHG_spikeStripItem"] call CBA_fnc_removeItem;

if (_result isNotEqualTo true) exitWith {systemChat "No spike strip in inventory...how TF did you access this?"};
[_player] call ace_weaponselect_fnc_putWeaponAway;
private _stripLocal = "Land_Razorwire_F" createVehicleLocal [0,0,0];
_stripLocal attachTo [player, [0, 5.5, 0]];
_stripLocal setDir 90;

["Place Spike Strip", "Cancel"] call ace_interaction_fnc_showMouseHint;

waitUntil {inputMouse 0 isEqualTo 1 || inputMouse 1 isEqualTo 1};
if (inputMouse 0 isEqualTo 1) then {
	private _stripPos = getPos _stripLocal;
	_stripPos set [2,0];
	private _stripDir = getDir _stripLocal;
	deleteVehicle _stripLocal;
	private _spikeStrip = createVehicle ["ghg_spikestrip", _stripPos, [], 0, "CAN_COLLIDE"];
	_spikeStrip setDir _stripDir;
	_spikeStrip setVectorUp surfaceNormal position _spikeStrip;	
} else {
	systemChat "Canceled placement";
};

[] call ace_interaction_fnc_hideMouseHint;
