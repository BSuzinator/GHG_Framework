#include "script_component.hpp"
/*======================================
	ghg_specweap_fnc_blu82Deploy
	Called on the machine where the bomb is local
======================================*/
params [
    ["_plane", objNull, [objNull]],
    ["_bomb", objNull, [objNull]] // _bomb is local
];
private _pos = getPosATL _bomb;

deleteVehicle _bomb;

[_pos, (_pos select 2) - 50, objNull, currentPilot _plane] call vn_fnc_bomb_blu82;