#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelSequencer
    Displays sequence of messages for units to rappel in order
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];

private _fnc_getActualCrew = {
	params ["_vehicle"];
	private _driverArray = fullCrew [_vehicle, "driver"];
	private _commanderArray = fullCrew [_vehicle, "commander"];
	private _gunnerArray = fullCrew [_vehicle, "gunner"];
	private _crewList = [];

	{
		private _superArray = _x;
		{
			private _unitArray = _x;
			_crewList pushBackUnique (_unitArray select 0);
		} forEach _superArray;
	} forEach [_driverArray,_commanderArray,_gunnerArray];
	_crewList
};

private _vehicle = _target;
"" remoteExec ["hintSilent", crew _vehicle];
private _rappelGroupSize = _actionParams select 0; 
private _sequencerDelay = (3 + ((getPosATL _vehicle select 2) / 3)); 
private _sequencerMessage = "Line Clear! Begin Rappel!"; 
private _beginMessage = "Beginning Rappel!"; 
private _completeMessage = "All units on the deck!\nClear to Depart!"; 
private _noPassMessage = "No passengers on board"; 
private _progressMessage = "Rappel In Progress:"; 


private _fullCargo = fullCrew [_target, "cargo"];
private _fullTurret = fullCrew [_target, "turret"]; 
private _passengers = []; 
 
{  
	private _fullArray = _x;
	{
	_passengers pushBackUnique (_x select 0); 
	} forEach _fullArray; 
} forEach [_fullCargo,_fullTurret];
_rappelGroups = []; 
 
for "_i" from 0 to (count _passengers - 1) do { 
 _rappelGroups pushBack ([_passengers, (_i * _rappelGroupSize), (-1*_rappelGroupSize)] call BIS_fnc_subSelect); 
}; 
 
if (_passengers isEqualTo []) exitWith {(format ["%1",_noPassMessage]) remoteExec ["hint", (_vehicle call _fnc_getActualCrew)];}; 
 
_rappelGroups = _rappelGroups - [];
_rappelGroups = _rappelGroups - [[],[]];
_rappelGroups = _rappelGroups - [[],[],[]];
_rappelGroups = _rappelGroups - [[],[],[],[]];
//systemChat str _rappelGroups;
(format ["%1",_beginMessage]) remoteExec ["hint", (_vehicle call _fnc_getActualCrew)]; 
{ 
 _group = _x; 
 //systemChat str _group;
 { 
  _passenger = _x;
  //systemChat str _passenger;
  (format ["%1",_sequencerMessage]) remoteExec ["hint", _passenger]; 
 } forEach _group; 
 (format ["%1\n%2/%3",_progressMessage, (_forEachIndex + 1), (count _rappelGroups)]) remoteExec ["hintSilent", _vehicle call _fnc_getActualCrew];
 sleep _sequencerDelay; 
} forEach _rappelGroups; 
 
(format ["%1",_completeMessage]) remoteExec ["hint", (_vehicle call _fnc_getActualCrew)];
};
