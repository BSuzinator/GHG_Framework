/*======================================
	ghg_fnc_safeModeTrigger
	
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

params ["_safeModeEnabled", "_messageAfter", ["_delay", 0], "_messageBefore"];

if ( canSuspend && _delay > 0 ) then
{
	systemChat _messageBefore;
	sleep _delay;
};

GVAR(safe) = _safeModeEnabled;

player allowDamage (!_safeModeEnabled);
systemChat _messageAfter;