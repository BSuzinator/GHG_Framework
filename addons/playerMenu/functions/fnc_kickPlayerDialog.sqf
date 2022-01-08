#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_kickPlayerDialog
	Opens dialog for playerlist to kick
	Author: BSuz
======================================*/
_realAllPlayers = call BIS_fnc_listPlayers;
_allPlayerNames = []; 
{_allPlayerNames pushBack name _x;} forEach _realAllPlayers; 
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
	{serverCommand format ["#kick %1",name (_values select 0)];_str = format ["%1 kicked %2 from Admin Menu", name player,name (_values select 0)]; _str remoteExec["systemChat",2, false];}, 
	{systemChat "Cancelled";}, 
	[] 
] call zen_dialog_fnc_create;