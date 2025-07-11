#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_teleportToGroupLead
	Rearms current vehicle
	Author: BSuz
======================================*/
private _lead = leader group player;
if !(alive _lead) exitWith {systemchat format ["%1 not alive. Unable to TP", name _lead];};

player setPosASL getPosASL _lead;
systemchat format ["%1 teleported to Group Lead: %2",name player, name _lead];