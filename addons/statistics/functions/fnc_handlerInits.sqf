#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_handlerInits
	Sets event handlers for tracking statistics
	Author: BSuz
======================================*/
[] call FUNC(storeStatsEH);
if (!hasInterface) exitWith {};
[] call FUNC(setTreatmentEH);
diag_log "statistics handlerInits called";