#include "script_component.hpp"
/*======================================
	ghg_cannonball_fnc_runRepair
	Repairs vehicle mid run
	Author: BSuz
======================================*/
params ["_target", "_player", "_params"];

["Repairing Vehicle...", 15, {true}, {systemChat "Cannonball: Repair Completed";_this # 1 setDamage 0;_this # 1 setFuel 1;}, {systemChat "Cannonball: Cancelled Repair";},[_target]] call CBA_fnc_progressBar;