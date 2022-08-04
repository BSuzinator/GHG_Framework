#include "script_component.hpp"
/*======================================
	ghg_game_fnc_gameInit
	Initializes THE GAME
	Author: BSuz
======================================*/
if !(GVARMAIN(is_game)) exitWith {};
if !(isServer) exitWith {};

call FUNC(civScatter);
call FUNC(spawnLoot);

private _date = [
    random [1982, 2000, 2020],
    random [1, 6, 12],
    random [1, 15, 30],
    random [0, 16, 24],
    random [0, 30, 59]
];

private _hour = _date select 3;

if ((_hour > 18) || (_hour < 6)) then {
    _hour = 12;
};

setDate _date;

0 setFog 0;

private _overcast = random [0, 0.5, 1];
skipTime -24; 86400 setOvercast _overcast; skipTime 24;

0 setFog [
    random [0, 0.033, 0.1],
    random [0, 0.0066, 0.015],
    random [0, 10, 200]
];

0 setWaves random 1;

forceWeatherChange;

remoteExec [QFUNC(civInit), civilian];