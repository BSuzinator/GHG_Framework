#include "script_component.hpp"
/*======================================
	ghg_downtime_fnc_rps
	
	initial function for Rock Paper Scissors.
	
	Must be spawned, not called.
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _hostSelection = _params select 0;
private _startTime = serverTime;
private _player = _target;



//Prevent multiple games at once
private _gameInProgress = ((_player getVariable ["ghg_downtime_rps_gameInProgress",false]) || (!isNil {_target getVariable "ghg_downtime_rps_host"}));
if (_gameInProgress) exitWith {
	systemChat "RPS Game already in progress";
	//systemChat str [_player getVariable ["ghg_downtime_rps_gameInProgress",false],!isNil {_target getVariable "ghg_downtime_rps_host"}];
};
_player setVariable ["ghg_downtime_rps_gameInProgress", true, true];


//Potential Outcomes
private _rockBeats = ["scissors"];
private _scissorsBeats = ["paper"];
private _paperBeats = ["rock"];
private _gunBeats = ["rock","paper","scissors"];


_target setVariable ["ghg_downtime_rps_host", _player, true];

//Notify player
[[format ["%1 has started a game of Rock, Paper, Scissors with you.",name _player]],["ACE Self Interact within 30 seconds to play."]] call CBA_fnc_notify;


waitUntil {sleep 1;((!isNil {_target getVariable "ghg_downtime_rps_playerSelection"}) || (serverTime >= (_startTime + 30)))};

private _playerSelection = _target getVariable ["ghg_downtime_rps_playerSelection","none"];

//time out game
if (_playerSelection isEqualTo "none") exitWith {
	systemChat "RPS Game timed out.";
	_target setVariable ["ghg_downtime_rps_playerSelection", nil, true];
	_target setVariable ["ghg_downtime_rps_host", nil, true];
	_player setVariable ["ghg_downtime_rps_playerSelection", nil, true];
	_player setVariable ["ghg_downtime_rps_host", nil, true];
	_player setVariable ["ghg_downtime_rps_gameInProgress", false, true];
};

//Handle victory / loss
private _gameOutcome = switch (_hostSelection) do
{
	case "rock": {_rockBeats};
	case "paper": {_paperBeats};
	case "scissors": {_scissorsBeats};
	case "gun": {_gunBeats};
	default { systemChat "GHG_Downtime_RPS game error";_false };
};


private _endMessage = "";
if (_playerSelection in _gameOutcome) then {
	_endMessage = format ["%1 wins! (%2 / %3)", name _player, _hostSelection, _playerSelection];
} else {
	_endMessage = format ["%1 wins! (%2 / %3)", name _target, _playerSelection, _hostSelection];
};
_endMessage remoteExec ["CBA_fnc_notify", [_player, _target]];

_target setVariable ["ghg_downtime_rps_playerSelection", nil, true];
_target setVariable ["ghg_downtime_rps_host", nil, true];
_player setVariable ["ghg_downtime_rps_playerSelection", nil, true];
_player setVariable ["ghg_downtime_rps_host", nil, true];
_player setVariable ["ghg_downtime_rps_gameInProgress", false, true];