/*============================
Script to Move Thunder and Phantom to random position in area
Author: BSuz

Needed Elements:
crashZone
grp__phantom
grp_thunder
phantom

============================*/
//Only Run if Enabled
if (getNumber(missionConfigFile >> "CfgGHG" >> "isCrashMission") isNotEqualTo 1) exitWith {};
//Only Run on Server
if !(isServer) exitWith {diag_Log "[GHG]: crashTP only runs on server"};

waitUntil {GHG_SERVER_GROUPS_READY};

private _crashMissionObjects = getArray (missionConfigFile >> "CfgGHG" >> "crashMissionObjects");
if (_crashMissionObjects isEqualTo []) exitWith {diag_Log "[GHG]: crashTP no objects found."};

{
	private _obj = _x;
	private _objIndex = _forEachIndex;
	_crashMissionObjects set [_objIndex, call compile _obj];
} forEach _crashMissionObjects;

private _crashHelicopter = _crashMissionObjects select 0;
_crashMissionObjects deleteAt (_crashMissionObjects find _crashHelicopter);
private _crashMissionGroups = _crashMissionObjects;

private _mkrPos = markerPos "crashZone";
private _mkrSize = markerSize "crashZone";

private _mkrPosX = _mkrPos select 0;
private _mkrPosY = _mkrPos select 1;

private _mkrSizeX = _mkrSize select 0;
private _mkrSizeY = _mkrSize select 1;

private _minX = _mkrPosX - _mkrSizeX;
private _maxX = _mkrPosX + _mkrSizeX;

private _minY = _mkrPosY - _mkrSizeY;
private _maxY = _mkrPosY + _mkrSizeY;

private _randX = 0;
private _randY = 0;
private _randPos = [_randX,_randY,1];

while {  
	(surfaceIsWater _randPos) ||   
	(_randPos isFlatEmpty  [-1, -1, 0.6, 17, -1] isEqualTo [])  ||
	!(_randPos inArea "crashZone")  
} do {
	_randX = random [_minX,_mkrPosX,_maxX];
	_randY = random [_minY,_mkrPosY,_maxY];
	_randPos = [_randX,_randY,1];
	//systemChat str ["Pos:",_randPos,"Surface:",surfaceNormal _randPos];
};

private _nearObjects = nearestTerrainObjects [_randPos ,[],17,true,true];

{
	private _object = _x;
	_object allowDamage false;
	_object hideObjectGlobal true;
} forEach _nearObjects;

_crashHelicopter setPos _randPos;
_crashHelicopter setVectorUp (surfaceNormal _randPos);
_crashHelicopter lock 2;
_crashHelicopter setFuel 0;
_crashHelicopter setVehicleAmmo 0;

/*
_mkrName = "mkr" + (str (random [0,100,200]));
_mkr = createMarkerLocal [_mkrName, _randPos];
_mkr setMarkerShapeLocal "ICON";
_mkr setMarkerTypeLocal "waypoint";
_mkr setMarkerSizeLocal [1, 1];
_mkrColor = "ColorBLUFOR";
*/

private _sqdPos = getPos _crashHelicopter;

{
	private _grp1 = _x;
	private _unitCount = count units _grp1;
	if (_unitCount isEqualTo 0) then {_unitCount = 1};
	private _increment = 360 / _unitCount;
	private _incCount = 0;
	{
		_incCount = _incCount + _increment;
		private _tpPos = _sqdPos getPos [(random [7,10,13]), _incCount];
		_x setpos [_tpPos select 0, _tpPos select 1, 1];
		_x setDir (random[0,180,360]);
	} forEach units _grp1;
} forEach _crashMissionGroups;