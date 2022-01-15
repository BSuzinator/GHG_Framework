#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_kickPlayerDialog
	Opens dialog for playerlist to kick
	Author: BSuz
======================================*/
private _realAllPlayers = call BIS_fnc_listPlayers;
private _allPlayerNames = []; 
{
    _allPlayerNames pushBack name _x;
} forEach _realAllPlayers; 

[ 
	"Kick Players", 
	[ 
		[ 
			"LIST", 
			"Player List", 
			[ 
				_realAllPlayers, 
				_allPlayerNames, 
				0, 
				(10 min ((count _crateName) + 0.5)) 
			] 
		] 
	], 
	{
        private _kickName = name (_values select 0);
        serverCommand format ["#kick %1", _kickName];
        
        private _str = format ["%1 kicked %2 from Admin Menu", name player, _kickName];
        _str remoteExecCall ["systemChat", 0];
    }, 
	{
        systemChat "Canceled"
    }, 
	[] 
] call zen_dialog_fnc_create;