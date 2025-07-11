#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_A3A_selfAddMember
	Rearms current vehicle
	Author: BSuz
======================================*/
_target = player;
_uid = getPlayerUID _target;
membersX pushBackUnique _uid;
_target setVariable ["eligible", true, true];
[localize "STR_A3A_OrgPlayers_membership_header", format [localize "STR_A3A_OrgPlayers_membership_success_add",name _target]] call A3A_fnc_customHint;
publicVariable "membersX";
playSound "A3AP_UiSuccess";