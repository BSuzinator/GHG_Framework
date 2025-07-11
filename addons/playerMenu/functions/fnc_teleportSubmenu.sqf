#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_teleportMenu
	Submenu for spawning radios
	Author: BSuz
======================================*/
private _subTitles = ["sub","Teleport","popup","",false];

private _subMenuOptions = [
    ["TP to Group Lead",{[_this] call FUNC(teleportToGroupLead)},"","",[],-1,true,true],
    ["TP to Respawn",{[_this] call FUNC(teleportToRespawn)},"","",[],-1,true,true]
];

private _groupUnits = units group player;
{
	private _unit = _x;
	if (alive _unit) then {
		private _unitOption = [name _unit, compile format ["[%1,%2] call ghg_playerMenu_fnc_teleportToGroupMember;",_forEachIndex,_groupUnits],"","",[],-1,true,true];	
		_subMenuOptions pushBack _unitOption;
	};
} forEach _groupUnits;



[_subTitles, _subMenuOptions]