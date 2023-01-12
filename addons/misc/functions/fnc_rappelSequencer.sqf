#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_rappelSequencer
    Displays sequence of messages for units to rappel in order
	Author: BSuz
======================================*/
params ["_vehicle"];

//Settings
//Size of groups that will be rappelling together
private _rappelGroupSize = 4;

//Delay between groups
private _sequencerDelay = 20;

//Message to display to passengers
private _sequencerMessage = "Line Clear! Begin Rappel!";

//Message to display to crew once rappel is complete
private _completeMessage = "All units on the deck!\nClear to Depart!";


//Working code
private _subSelectSize = _rappelGroupSize * -1;

private _passengers = fullCrew [_vehicle, "cargo"];

private _rappelGroups = [];

{
	_rappelGroups pushback [_passengers, _subSelectSize] call BIS_fnc_subSelect;	
	

} forEach _passengers;

_rappelGroups = _rappelGroups - [];

{
	private _group = _x;
	
	{
		private _passenger = _x;
		(format ["%1",_sequencerMessage]) remoteExec ["hint", _passenger];	
	} forEach _group;
	sleep _sequencerDelay;
} forEach _rappelGroups;

(format ["%1",_completeMessage]) remoteExec ["hint", crew _vehicle];