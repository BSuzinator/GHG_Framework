#include "script_component.hpp"
/*======================================
	ghg_fnc_safeModeTrigger
	
	Author: Quantx
======================================*/
params ["_safeModeEnabled", "_messageAfter", ["_delay", 0], "_messageBefore"];

if ( isServer ) then
{
    {
        ["lockCrate", [_x, _safeModeEnabled], netId _x] call CBA_fnc_globalEventJIP;
    } forEach EGVAR(gear,crateList);
};

if ( !hasInterface ) exitWith {};
if ( !canSuspend ) exitWith { _this spawn FUNC(safeModeTrigger); };

// Nothing to do
if ( (!isNil QGVAR(safe)) && {GVAR(safe) isEqualTo _safeModeEnabled} ) exitWith {};

if ( _delay > 0 ) then
{
	systemChat _messageBefore;
	sleep _delay;
};



GVAR(safe) = _safeModeEnabled;

player allowDamage (!_safeModeEnabled);
systemChat _messageAfter;