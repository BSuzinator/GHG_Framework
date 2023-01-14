#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelSequencer
    Displays sequence of messages for units to rappel in order
	Author: BSuz
======================================*/
params ["_target", "_player", "_actionParams"];
private _vehicle = _target;


//Settings
//Size of groups that will be rappelling together
private _rappelGroupSize = _actionParams;
//systemChat str _rappelGroupSize;
//Delay between groups
private _sequencerDelay = 20;

//Message to display to passengers
private _sequencerMessage = "Line Clear! Begin Rappel!";

//Message to display to crew once rappel is started
private _beginMessage = "Beginning Rappel!";

//Message to display to crew once rappel is complete
private _completeMessage = "All units on the deck!\nClear to Depart!";

//Message to display if no passengers in helicopter
private _noPassMessage = "No passengers on board";

//Message for in progress drops, displayed to crew
private _progressMessage = "Rappel In Progress:";

//Working code
private _subSelectSize = (_rappelGroupSize select 0) * -1;

private _crewSuperArray = fullCrew [_vehicle, "cargo"];
private _passengers = [];
//systemChat str _crewSuperArray;
{
	private _crewArray = _x;
	//systemChat str _crewArray;
	_passengers pushbackUnique (_crewArray select 0);

} forEach _crewSuperArray;

private _rappelGroups = [];

{
	_rappelGroups pushback [_passengers, _subSelectSize] call BIS_fnc_subSelect;	
	

} forEach _passengers;
//systemChat str _passengers;
if (_passengers isEqualTo []) exitWith {(format ["%1",_noPassMessage]) remoteExec ["hint", crew _vehicle];};

_rappelGroups = _rappelGroups - [];
(format ["%1",_beginMessage]) remoteExec ["hint", crew _vehicle];
{
	private _group = _x;
	
	{
		private _passenger = _x;
		(format ["%1",_sequencerMessage]) remoteExec ["hint", _passenger];
	} forEach _group;
	(format ["%1\n%2/%3",_progressMessage, (_forEachIndex + 1), (count _rappelGroups)]) remoteExec ["hintSilent", crew _vehicle];
	sleep _sequencerDelay;
} forEach _rappelGroups;

(format ["%1",_completeMessage]) remoteExec ["hint", crew _vehicle];