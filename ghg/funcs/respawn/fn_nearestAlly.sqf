/*======================================
	ghg_fnc_nearestAlly
	Called on mission start, shows distance to nearest ally when unconscious
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

GHG_NEAREST_ALLY_EH = -1;

["ace_unconscious", {
    params ["_unit", "_unconscious"];

    if (_unit != ACE_player) exitWith {};
	
	private _mainDisp = findDisplay 46; // Main display
	
	if ( _unconscious ) then
	{
		private _ctrl = _mainDisp ctrlCreate [ "RscStructuredText", 42454 ];
		
		private _w = 0.4;
		private _h = 0.1;
		
		_ctrl ctrlSetPosition [0.5 - _w / 2, 0.5 - _h / 2, _w, _h];
		_ctrl ctrlCommit 0;
		
		GHG_NEAREST_ALLY_EH = [{
			params ["_ctrl", "_handle"];
			
			if ( _ctrl isEqualTo controlNull ) exitWith
			{
				_handle call CBA_fnc_removePerFrameHandler;
			};

			if ! ( ACE_player getVariable ["ACE_isUnconscious", false] ) exitWith
			{
				_handle call CBA_fnc_removePerFrameHandler;
				ctrlDelete (_mainDisp displayCtrl 42454);
			};
			
			private _dist = 1e39; // Infinity
			private _unit = objNull;
			
			// Find closest friendly player
			{
				private _newDist = _x distance ACE_player;
			
				if ( ((side group _x ) isEqualTo (side group ACE_player)) && (! (_x getVariable ["ACE_isUnconscious", false])) && (_newDist < _dist) ) then
				{
					_dist = _newDist;
					_unit = _x;
					
				};
			} forEach allPlayers;
			
			private _str = "No one to help within a kilometer";
			
			if ( !isNull _unit && _dist < 1000 ) then
			{
				_str = format [ "Nearest ally is %1 meters away", round _dist ];
				
				if ( _dist < 100 ) then
				{
					private _ppos = getPosASL ACE_player;
					private _upos = eyePos _unit;
				
					private _lookAng = eyeDirection _unit;
					private _diffAng = _upos vectorFromTo _ppos;
					private _angle = (_lookAng vectorCos _diffAng) max 0;

					private _vis = [objNull, "VIEW"] checkVisibility [_upos, _ppos vectorAdd [0, 0, 1.5]];

					_str = _str + format [ "<br/>You are %1%2 visible to that ally", round (_angle * _vis * 100), "%" ];
				};
			};
			
			_ctrl ctrlSetStructuredText parseText ("<t>" + _str + "</t>");
			_ctrl ctrlCommit 0;
		}, 0, _ctrl] call CBA_fnc_addPerFrameHandler;
	}
	else
	{
		GHG_NEAREST_ALLY_EH call CBA_fnc_removePerFrameHandler;
		ctrlDelete (_mainDisp displayCtrl 42454);
		
	};
}] call CBA_fnc_addEventHandler;