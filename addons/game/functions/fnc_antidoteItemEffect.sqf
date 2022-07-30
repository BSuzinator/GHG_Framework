#include "script_component.hpp"
/*======================================
	ghg_game_fnc_antidoteItemEffect
	Applies effect of antidote item
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _result = [_player, "GHG_game_antidote"] call CBA_fnc_removeItem;

if !(_result) exitWith {systemChat "Unable to use Antidote"};

private _antidoteTime = ANTIDOTE_TIME;

private _maxTime = POISON_MAX_TIME;
private _tickTime = POISON_TICK_TIME;
private _tickCount = _maxTime / _tickTime;

private _damageTick = _tickTime / _maxTime;

private _antidoteEffect = _damageTick * _antidoteTime;

GVAR(poisonDamage) = GVAR(poisonDamage) - _antidoteEffect;

if (GVAR(poisonDamage) > 1) then {GVAR(poisonDamage) = 1; GVARMAIN(killedByPoison) = true;};
if (GVAR(poisonDamage) < 0) then {GVAR(poisonDamage) = 0.02;};

private _percentLeft = ( 1 - GVAR(poisonDamage) ) ;
private _timeLeft = ( _percentLeft * POISON_MAX_TIME) / 60;

if (GVAR(poisonDamage) >= 0.68) then {_player setDamage GVAR(poisonDamage);};

systemChat format ["The antidote is working. I think I have about %1 minutes left.", round _timeLeft];

_player setDamage GVAR(poisonDamage);