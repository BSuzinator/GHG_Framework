#include "script_component.hpp"
/*======================================
	ghg_game_fnc_antidoteItemEffect
	Applies effect of antidote item
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _result = [_player, "GHG_game_antidote"] call CBA_fnc_removeItem;

if !(_result) exitWith {systemChat "Unable to use Antidote"};

private _playerDamage = (damage _player) * 10;

_playerDamage = _playerDamage - ANTIDOTE_TIME;

if (_playerDamage > 1) then {_playerDamage = 1; GVARMAIN(killedByPoison) = true;};
if (_playerDamage < 0) then {_playerDamage = 0;};

private _poisonProgress = ( 10 - (_playerDamage * 10) );
systemChat format ["The antidote is working. I think I have about %1 minutes left.", _poisonProgress];

_player setDamage _playerDamage;