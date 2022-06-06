#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_spikeStripPack
	Pack spike strip and add it to inventory
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _result = [_player, "GHG_spikeStripItem"] call CBA_fnc_addItem;

if (_result) exitWith {
	deleteVehicle _target;
	diag_log "[GHG]: Packed Spike Strip";
};

systemChat "Unable to pack spike strip. No room in inventory.";