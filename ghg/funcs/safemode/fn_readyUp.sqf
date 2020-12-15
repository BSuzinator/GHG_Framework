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
		SAFE_MODE_READY_BLU = true;
		publicVariable "SAFE_MODE_READY_BLU";
		systemChat "BLUFOR is now ready for combat";
		call ghg_fnc_readyUpServer;
	};
	case east: {
		SAFE_MODE_READY_OPF = true;
		publicVariable "SAFE_MODE_READY_OPF";
		systemChat "OPFOR is now ready for combat";
		call ghg_fnc_readyUpServer;
	};
	case resistance: {
		SAFE_MODE_READY_IND = true;
		publicVariable "SAFE_MODE_READY_IND";
		systemChat "INDFOR is now ready for combat";
		call ghg_fnc_readyUpServer;
	};
};