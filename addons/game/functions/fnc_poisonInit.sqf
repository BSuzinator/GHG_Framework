#include "script_component.hpp"
/*======================================
	ghg_game_fnc_poisonInit
	Initialized the poison counter for Civs.
	Author: BSuz
======================================*/
private _poisonProgress = {
	private _player = player;
	private _damage = damage _player;
	
	_playerDamage = _damage + POISON_DAMAGE;
	if (_playerDamage >= 1) then {_playerDamage = 1; GVARMAIN(killedByPoison) = true;};
	
	_player setDamage _playerDamage;

};

GVAR(poisonEHID) = [
	_poisonProgress, 
	POISON_TIME, 
	[]
] call CBA_fnc_addPerFrameHandler;