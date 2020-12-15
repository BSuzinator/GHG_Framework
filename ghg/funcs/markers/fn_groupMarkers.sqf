/*======================================
	ghg_fnc_groupMarkers
	Updates map positions
	Author: Quantx
======================================*/
params ["_map"];

{
	private _cgrp = _x;
	// Only draw markes from our side
	if ( (side _cgrp) isEqualTo playerSide || playerSide isEqualTo sideLogic ) then {
		private _icn = _cgrp getVariable ["ghg_group_map_icon", []];
		
		if ( count _icn > 0 && !isNull leader _cgrp ) then
		{
			_icn set [2, getPos leader _cgrp];
			_map drawIcon _icn;
		};
		
		// This is our group, draw groupmates
		if ( _cgrp isEqualTo group player ) then {
			{
				if ( !( _x isEqualTo leader _cgrp ) ) then {
					private _clr = [1,1,1,1];
					
					switch (assignedTeam _x) do {
						case "RED": { _clr = [1,0,0,1]; };
						case "GREEN": { _clr = [0,1,0,1]; };
						case "BLUE": { _clr = [0,0,1,1]; };
						case "YELLOW": { _clr = [1,1,0,1]; };
					};
				
					_map drawIcon [
						"\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa",
						_clr,
						getPos _x,
						18,
						18,
						getDir _x
					];
				};
			} forEach units _cgrp;
		};
	};
} forEach allGroups;