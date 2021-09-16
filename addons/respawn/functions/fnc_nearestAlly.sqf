/*======================================
	ghg_fnc_nearestAlly
	Called on mission start, shows distance to nearest ally when unconscious
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

GVAR(ally_id) = -1;

["ace_unconscious", {
    params ["_unit", "_unconscious"];

    if ( (_unit != ACE_player) || (! _unconscious) || GVAR(ally_id) != -1 ) exitWith {};

	private _ctrl = (findDisplay 46) ctrlCreate [ "RscStructuredText", -1 ];

	private _w = 0.4;
	private _h = 0.1;
		
	_ctrl ctrlSetPosition [0.5 - _w / 2, 0.5 - _h / 2, _w, _h];
	_ctrl ctrlCommit 0;
	
	GVAR(ally_id) = [{
		params ["_ctrl", "_handle"];
		
		if ! ( ACE_player getVariable ["ACE_isUnconscious", false] ) exitWith
		{
			if ( (ctrlDelete _ctrl) || (isNull _ctrl) ) then
			{
				GVAR(ally_id) call CBA_fnc_removePerFrameHandler;
				GVAR(ally_id) = -1;
			};
		};
		
		private _dist = 1e39; // Infinity
		private _unit = objNull;
		
		private _pside = side group ACE_player;
		// Find closest friendly player
		{
			private _newDist = _x distance ACE_player;
		
			if ( ((side group _x ) isEqualTo _pside) && (! (_x getVariable ["ACE_isUnconscious", false])) && (_newDist < _dist) ) then
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
	}, 0.25, _ctrl] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;