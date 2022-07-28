#include "script_component.hpp"
/*======================================
	ghg_game_fnc_getTarget
	Gets target from availible players
	Author: BSuz
======================================*/
params [["_targetKilled",false]];
private _civPlayers = call FUNC(getSidesPlayers) select 4;

_civPlayers = _civPlayers - [player];

private _target = selectRandom _civPlayers;

if (_target isEqualTo objNull) exitwith {private _exitMsg = "Unable to assign new target"; systemChat _exitMsg; hint _exitMsg;};

GVAR(target) = _target;

//if (isNil QGVAR(markersInit)) then {call FUNC(targetMarker)};

private _newTargetSTR = format ["You have been assigned a new target: %1\nThey are %2 meters away, check your map.",name _target,player distance _target];
if (_targetKilled) then {
	_newTargetSTR = format ["Your target has been killed and the antidote has been given.\nYou have been assigned a new target: %1\nThey are %2 meters away, check your map.",name _target,player distance _target];
};
hint _newTargetSTR;
systemChat _newTargetSTR;

_target