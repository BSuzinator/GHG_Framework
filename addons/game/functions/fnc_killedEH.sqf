#include "script_component.hpp"
/*======================================
	ghg_game_fnc_killedEH
	Eventhandler for being killed in THE GAME
	Author: BSuz
======================================*/
params ["_unit", "_killer", "_instigator", "_useEffects"];

if !(_unit in call BIS_fnc_listPlayers;) exitWith {};

remoteExec [QFUNC(targetKilled), civilian];

private _civCount = count ((call FUNC(getSidesPlayers)) select 4);

[GVAR(poisonEHID)] call CBA_fnc_removePerFrameHandler;

if (_civCount > 1) exitWith {};
if (time > 300) then {remoteExec [QFUNC(endGame),2];};
