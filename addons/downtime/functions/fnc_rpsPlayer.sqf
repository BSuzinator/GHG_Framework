#include "script_component.hpp"
/*======================================
	ghg_downtime_fnc_rpsPlayer
	
	response function for Rock Paper Scissors.
	
	
	
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];
private _playerSelection = _params select 0;

private _host = _player getVariable "ghg_downtime_rps_host";

_player setVariable ["ghg_downtime_rps_playerSelection", _playerSelection, true];