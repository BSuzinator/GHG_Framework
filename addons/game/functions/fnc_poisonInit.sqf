#include "script_component.hpp"
/*======================================
	ghg_game_fnc_poisonInit
	Initialized the poison counter for Civs.
	Author: BSuz
======================================*/

GVAR(poisonDamage) = 0.02;

private _poisonProgress = {
	private _player = player;
	private _damage = damage _player;
	
	_playerDamage = _damage + 0;
	
	
	private _maxTime = POISON_MAX_TIME;
	private _tickTime = POISON_TICK_TIME;
	private _tickCount = _maxTime / _tickTime;
	
	private _damageTick = _tickTime / _maxTime;
	
	GVAR(poisonDamage) = GVAR(poisonDamage) + _damageTick;
	
	if (GVAR(poisonDamage) >= 1) then {GVAR(poisonDamage) = 1; GVARMAIN(killedByPoison) = true;};
	private _percentLeft = ( 1 - GVAR(poisonDamage) ) ;
	private _timeLeft = ( _percentLeft * POISON_MAX_TIME) / 60;
	
	if (GVAR(poisonDamage) >= 0.68) then {_player setDamage GVAR(poisonDamage);};
	
	systemChat format ["The poison is progressing. I think I have about %1 minutes left.", round _timeLeft];
};

GVAR(poisonEHID) = [
	_poisonProgress, 
	POISON_TICK_TIME, 
	[]
] call CBA_fnc_addPerFrameHandler;