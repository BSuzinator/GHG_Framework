/*======================================
	ghg_fnc_markersGroup
	Updates map positions for groups
	Author: Quantx
======================================*/
params ["_postInit", "_didJIP"];

{
	private _cgrp = _x;
	
	// Only draw markes from our side
	if ( (side _cgrp) isEqualTo playerSide || playerSide isEqualTo sideLogic ) then
	{
		private _mkr = _cgrp getVariable ["ghg_map_icon", ""];
		
		if ( _mkr isEqualTo "" ) then
		{
			_mkr = createMarkerLocal [ "ghg_icon_" + (netId _cgrp), leader _cgrp ];
			_cgrp setVariable ["ghg_map_icon", _mkr ];
			
			private _tmk = "ghg_grp_" + (((groupId _cgrp) splitString " ") joinString "_");
			
			_mkr setMarkerTextLocal (markerText _tmk);
			_mkr setMarkerColorLocal (markerColor _tmk);
			_mkr setMarkerTypeLocal (markerType _tmk);
		};
		
		if ! ( _mkr isEqualTo "" || isNull leader _cgrp ) then
		{
			private _mkrPos = getPos leader _cgrp;
		
			// Don't cover leader's marker
			if ( _cgrp isEqualTo group player ) then {
				_mkrPos set [1, (_mkrPos select 1) + 1];
			};
		
			_mkr setMarkerPosLocal _mkrPos;
		};
	};
} forEach allGroups;