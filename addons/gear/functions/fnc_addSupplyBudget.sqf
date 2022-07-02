#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_addFortifyBudget
    Gets the content of the supply point crate and adds it to side.
	Called from XXX
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _crate = _target;
private _buildSupplies = _crate getVariable "ghg_cargo_buildSupplies";

//If you are not in a build area you cannot add funds to budget
if !([_player] call ace_fortify_fnc_canFortify) exitWith { 
	
	if !("ACE_Fortify" in ([_player, true] call CBA_fnc_uniqueUnitItems)) exitWith {"No fortify tool on hand." call CBA_fnc_notify;};
	
	private _nearLogicArr = nearestObjects [_player, ["acex_fortify_buildLocationModule"], 1000,true];
	if (count _nearLogicArr isEqualTo 0) exitWith {"No fortify tool on hand." call CBA_fnc_notify;};
	private _nearLogic = _nearLogicArr select 0;
	private _nearLogicArea = [];
	{
		private _locationLogic = _x select 0;
		private _locationAreaX = _x select 1;
		private _locationAreaY = _x select 2;
		private _locationAreaDir = _x select 5;
		if (_nearLogic isEqualTo _locationLogic) exitWith {_nearLogicArea = [_locationAreaX,_locationAreaY, _locationAreaDir];};
	} forEach ace_fortify_locations;
	
	private _cornerArray = [];
	private _nearLogicSizeX = _nearLogicArea select 0;
	private _nearLogicSizeY = _nearLogicArea select 1;
	private _nearLogicDir = _nearLogicArea select 2;
	private _cornerDist = sqrt(((_nearLogicSizeX/2)^2) + ((_nearLogicSizeY/2)^2));
	
	private _relposA = _nearLogic getRelPos [_cornerDist, (_nearLogicDir + 45)];
	private _relposB = _nearLogic getRelPos [_cornerDist, (_nearLogicDir + 135)];
	private _relposC = _nearLogic getRelPos [_cornerDist, (_nearLogicDir + 225)];
	private _relposD = _nearLogic getRelPos [_cornerDist, (_nearLogicDir + 315)];
	
	_cornerArray = [_relposA,_relposB,_relposC,_relposD];
	
	{
		_posAGL = _x;
		_posASL = AGLToASL _posAGL;
		_posASL set [2,((getPosATL _nearLogic) select 2)];
		_x = _posASL;
	} forEach _cornerArray;
	
	
	private _linePoints = [[_relposA,_relposB],[_relposB,_relposC],[_relposC,_relposD],[_relposD,_relposA]];
	
	[_linePoints] spawn {
		params ["_linePoints"];
		private _mehID = addMissionEventHandler ["Draw3D", {
			_thisArgs params ["_linePoints"];
			
			for "_i" from -5 to 5 do {
				
				//Increment from -10m to 10m around fortify module
				{
					_a = _x select 0;
					_b = _x select 1;
					
					_a set [2,((_a select 2) + (_i * 2))];
					_b set [2,((_b select 2) + (_i * 2))];
					
					_x set [0,_a];
					_x set [1,_b];
					
				} forEach _linePoints;
				
				//draw lines
				{
					private _start = _x select 0;
					private _end = _x select 1;
					
					drawLine3D [_start, _end, [255,165,0,0.7]]
				
				} forEach _linePoints;

				{	
					_a = _x select 0;
					_b = _x select 1;
					
					_a set [2,0];
					_b set [2,0];
					
					_x set [0,_a];
					_x set [1,_b];
					
				} forEach _linePoints;
				
			};
		}, [_linePoints]];
		"Must deliver inside Fortify Zone." call CBA_fnc_notify;
		sleep 10;
		
		removeMissionEventHandler ["Draw3D", _mehID];

	};
	
};

private _side = side _player;

//missionNamespace setVariable [QGVAR(fortifyAllowed), true, true];
private _checkObjects = format ["ace_fortify_objects_%1",_side];
if (isNil {missionNamespace getVariable _checkObjects}) then {
	private _objects = ["sandbags"] call ace_fortify_fnc_getPlaceableSet;
	[_side, 0, _objects] call ace_fortify_fnc_registerObjects;
	["ace_fortify_fnc_registerObjects", [_side, 0, _objects]] call CBA_fnc_serverEvent;
};
//[QGVAR(registerObjects), [_side, 0, _objects]] call CBA_fnc_serverEvent;




[_side] call ace_fortify_fnc_getBudget;
[_side, _buildSupplies, true] call ace_fortify_fnc_updateBudget;
deleteVehicle _crate;


/*
[L Alpha 1-2:3 ,23.7147, 17.2137, 0, true, 0]

ACE_fortify_locations
https://community.bistudio.com/wiki/drawIcon3D
https://community.bistudio.com/wiki/drawLine3D
http://killzonekid.com/arma-3-bounding-box-utility/



#include "script_component.hpp"

 * Author: PabstMirror
 * Handles build location module
 *
 * Arguments:
 * 0: The module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [logic] call ace_fortify_fnc_buildLocationModule
 *
 * Public: No


params ["_logic"];
TRACE_1("buildLocations",_logic);

private _area = _logic getvariable ["objectArea",[0,0,0,false,0]]; // seems to be set via the canSetArea config
if ((_area param [0, 0]) == 0) exitWith {WARNING_1("Bad size? %1",_area);};
private _locationArray = [_logic];
_locationArray append _area;

TRACE_1("Adding build location",_locationArray);
GVAR(locations) pushBack _locationArray;




*/