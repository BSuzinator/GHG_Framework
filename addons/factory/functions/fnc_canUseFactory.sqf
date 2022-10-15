#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_canUseFactory
	Checks if player can use factory
	Returns: bool
	Author: BSuz
======================================*/
params ["_target","_player","_actionParams"];
private _logiOverrideString = (toLower typeOf _player) select [6,4];
private _pltOverrideString = (toLower typeOf _player) select [6,3];
(
( GVARMAIN(isAdmin) ) ||
( GVARMAIN(isOfficer) ) ||
( GVARMAIN(isJuniorOfficer) ) ||
( (leader group _player) isEqualTo _player ) ||
( _logiOverrideString isEqualTo "logi" ) ||
( _pltOverrideString isEqualTo "plt" )
)