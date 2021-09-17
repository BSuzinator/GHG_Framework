#include "script_component.hpp"
/*======================================
	ghg_fnc_readyUp
	Notifies which side is ready
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

params ["_target", "_player"];

switch (side _player) do
{
	case west: {
        GVAR(ready_blu) = true;
		publicVariable "SAFE_MODE_READY_BLU";
		systemChat "BLUFOR is now ready for combat";
		call FUNC(readyUpServer);
	};
	case east: {
		GVAR(ready_opf) = true;
		publicVariable "SAFE_MODE_READY_OPF";
		systemChat "OPFOR is now ready for combat";
		call FUNC(readyUpServer);
	};
	case resistance: {
		GVAR(ready_ind) = true;
		publicVariable "SAFE_MODE_READY_IND";
		systemChat "INDFOR is now ready for combat";
		call FUNC(readyUpServer);
	};
};