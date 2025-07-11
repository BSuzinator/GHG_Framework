#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_teleportToRespawn
	Rearms current vehicle
	Author: BSuz
======================================*/
private _playerSide = side player;

private _tpMkr = switch (_playerSide) do 
{
	case "EAST";
	case east: {"respawn_east"};
	case "WEST";
	case west: {"respawn_west"};
	case "GUER";
	case resistance: {"respawn_guerrila"};
	case "CIV";
	case civilian: {"respawn_civilian"};
	default {"respawn_west"};

};
private _tpPos = markerPos _tpMkr;

player setPos _tpPos;

systemchat format ["%1 teleported to respawn marker for side: %2",name player, _playerSide];