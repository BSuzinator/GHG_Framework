#include "script_component.hpp"
/*======================================
	ghg_game_fnc_killedEH
	Eventhandler for being killed in THE GAME
	Author: BSuz
======================================*/
if !(GVARMAIN(is_game)) exitWith {};
params ["_unit", "_killer", "_instigator", "_useEffects"];

remoteExec [QFUNC(targetKilled), civilian];

private _civCount = count ((call FUNC(getSidesPlayers)) select 4);

[GVAR(poisonEHID)] call CBA_fnc_removePerFrameHandler;

if (_civCount > 1) exitWith {};
if ((_unit isEqualTo _unit) && (getClientState isEqualTo "BRIEFING READ") && (_civCount <= 1)) then {remoteExec [QFUNC(endGame),2];};
