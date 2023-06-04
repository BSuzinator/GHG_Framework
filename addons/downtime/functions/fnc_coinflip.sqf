#include "script_component.hpp"
/*======================================
	ghg_downtime_fnc_coinflip
	
	Flip a coin!
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _coinBool = [[0, 1] call BIS_fnc_randomInt] call ghg_fnc_toBool;
private _coinSide = switch (_coinBool) do
{
	case true: { "Heads" };
	case false: { "Tails" };
	default { "Error" };
};
private _resultSTR = format ["It's %1!", _coinSide];
_resultSTR call CBA_fnc_notify;