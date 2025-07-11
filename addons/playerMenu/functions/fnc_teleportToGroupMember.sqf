#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_teleportToGroupMember
	Rearms current vehicle
	Author: BSuz
======================================*/
params ["_unitNum","_groupUnits"];
private _unit = _groupUnits # _unitNum;

if !(alive _unit) exitWith {systemchat format ["%1 not alive. Unable to TP", name _unit];};

player setPosASL getPosASL _unit;
systemchat format ["%1 teleported to group member: %2",name player, name _unit];