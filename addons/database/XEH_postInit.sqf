#include "script_component.hpp"
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/

if ( isServer ) then
{
    [FUNC(handleDB), 0.5, []] call CBA_fnc_addPerFrameHandler;
};
[] spawn FUNC(getRoles);