#include "script_component.hpp"
/*======================================
	ghg_game_fnc_civScatter
	Scatters civilians on start
	Author: BSuz
======================================*/

private _mkrPos = markerPos "gamePlayZone";
private _mkrSize = markerSize "gamePlayZone";

private _mkrPosX = _mkrPos select 0;
private _mkrPosY = _mkrPos select 1;

private _mkrSizeX = _mkrSize select 0;
private _mkrSizeY = _mkrSize select 1;

private _minX = _mkrPosX - _mkrSizeX;
private _maxX = _mkrPosX + _mkrSizeX;

private _minY = _mkrPosY - _mkrSizeY;
private _maxY = _mkrPosY + _mkrSizeY;

private _xLength = abs (_maxX - _minX);
private _yLength = abs (_maxY - _minY);

private _randX = 0;
private _randY = 0;
private _randPos = [_randX,_randY,1];

private _civPlayers = call FUNC(getSidesPlayers) select 4;

{
	private _player = _x;
	while {  
		(surfaceIsWater _randPos) ||   
		(_randPos isFlatEmpty  [-1, -1, 0.6, 17, -1] isEqualTo [])  ||
		!(_randPos inArea "gamePlayZone") ||
		(_randPos nearRoads 100 isEqualTo []) ||
		!((_randPos nearObjects [ "Man", 200 ]) isEqualTo [])
	} do {
		_randX = _minX + (random _xLength);
		_randY = _minY + (random _yLength);
		_randPos = [_randX,_randY,1];
		//systemChat str ["Pos:",_randPos,"Surface:",surfaceNormal _randPos];
	};
	_player setPos _randPos;
	_player setDir (floor random 360);
} forEach _civPlayers;