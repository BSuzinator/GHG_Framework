#include "script_component.hpp"
/*======================================
	ghg_game_fnc_civInit
	Initializes THE GAME
	Author: BSuz
======================================*/
if !(hasInterface) exitWith {};

[{ (player isEqualTo player) && (getClientState isEqualTo "BRIEFING READ") }, {
	//systemChat str getClientState;
	call FUNC(civGearUp);
	call FUNC(getTarget);
	call FUNC(poisonInit);
	call FUNC(targetMarkerInit);
	
}, []] call CBA_fnc_waitUntilAndExecute;