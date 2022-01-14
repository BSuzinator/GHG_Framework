#include "script_component.hpp"
/*======================================
	ghg_statistics_fnc_handlerInits
	Sets event handlers for tracking statistics
	Author: BSuz
======================================*/
if (!hasInterface) exitWith {};
systemchat "handlerInits called";
[] call FUNC(setTreatmentEH);