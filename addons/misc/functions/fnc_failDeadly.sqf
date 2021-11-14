#include "script_component.hpp"
/*======================================
	Prevent game from starting if multiple mod versions are present
	Author: QuantX
======================================*/

// Only players with interface
if ! ( hasInterface ) exitWith {};
if ! ( canSuspend ) exitWith { systemChat (QFUNC(failDeadly) + " must be run with spawn") };

private _fail = fileExists "ghg\version.txt";

waitUntil {getClientState == "BRIEFING SHOWN"};

private _disp = findDisplay 52;

private _but = _disp displayCtrl 1;

_but ctrlEnable (!_fail);
    
if ( _fail ) then
{
    systemChat "This mission uses the old framework and cannot be started";
};