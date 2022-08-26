#include "script_component.hpp"
/*======================================
	ghg_game_fnc_endGame
	Ends the Game and displays message.
	Author: BSuz
======================================*/
private _civPlayers = call FUNC(getSidesPlayers) select 4;

if (count _civPlayers < 1) exitWith {

	private _endingText = format ["All Civilians are Dead"];

	RscDisplayDebriefing_params = _endingText;
	publicvariable "RscDisplayDebriefing_params";
	
	["EveryoneLost"] remoteExec ["BIS_fnc_endMissionServer",2];
	
};

private _winningPlayer = _civPlayers select 0;

_winningPlayer addScore 99999;

private _endingText = format ["%1 has won THE GAME", name _winningPlayer];

RscDisplayDebriefing_params = _endingText;
publicvariable "RscDisplayDebriefing_params";

[_endingText, "PLAIN"] remoteExec ["titleText",-2];

remoteExec [QFUNC(deInit),0];

[] spawn {
	sleep 5;
	["PlayerScore",_endingText] remoteExec ["BIS_fnc_endMission",0];
};