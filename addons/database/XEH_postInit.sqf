#include "script_component.hpp"
/*======================================
    Everything in this file is run once on mission start
	Author: CBA_3
======================================*/
//Run on EVERY mission file
if ( isServer ) then
{
    [FUNC(handleDB), 0.5, []] call CBA_fnc_addPerFrameHandler;
};
[] spawn FUNC(getRoles);

//Don't delete
if ! ( GVARMAIN(is_mission_ghg) ) exitWith {};
//Run ONLY ON GHG MISSIONS
