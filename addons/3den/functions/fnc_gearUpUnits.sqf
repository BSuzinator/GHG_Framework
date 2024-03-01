#include "script_component.hpp"
/*======================================
	ghg_3den_fnc_gearUpUnits
	Applies loadouts to all GHG Units in Editor
	Author: BSuz
======================================*/
private _ghgUnits = [];
{
	private _object = _x;
	if ((_object isKindOf "b_ghg_base") || (_object isKindOf "o_ghg_base") || (_object isKindOf "i_ghg_base") || (_object isKindOf "c_ghg_base")) then {
		_ghgUnits pushBack _object;
		[_object] call ghg_gear_fnc_gearUp;
	};
} forEach (all3DENEntities select 0);
_ghgUnits