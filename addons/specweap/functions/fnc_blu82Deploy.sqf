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
private _alt = (_pos # 2) - 50;

deleteVehicle _bomb;

// Only spawn the bomb if the payload was high enough
if ( _alt >= 150 ) then
{
    [_pos, _alt, objNull, currentPilot _plane] call vn_fnc_bomb_blu82;
};