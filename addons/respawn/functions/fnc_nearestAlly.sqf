#include "script_component.hpp"
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

	private _w = 0.5;
	private _h = 0.16;
		
	_ctrl ctrlSetPosition [0.5 - _w / 2, 0.9 - _h / 2, _w, _h];
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
        
        if (ACE_player call ace_medical_status_fnc_hasStableVitals) then {
            // Show wakeup timer
            private _wt = ACE_player getVariable ["ace_medical_lastWakeUpCheck", -1];
            if ( _wt > 0 ) then {
                // This needs to match how ACE calculates this: https://github.com/acemod/ACE3/blob/master/addons/medical_statemachine/functions/fnc_handleStateUnconscious.sqf#L37
                private _wakeUpCheckInterval = 15;
                if (ace_medical_spontaneousWakeUpEpinephrineBoost > 1) then {
                    private _epiEffectiveness = ([ACE_player, "Epinephrine", false] call ace_medical_status_fnc_getMedicationCount) select 1;
                    _wakeUpCheckInterval = _wakeUpCheckInterval * linearConversion [0, 1, _epiEffectiveness, 1, 1 / ace_medical_spontaneousWakeUpEpinephrineBoost, true];
                };
                
                _str = _str + format ["<br/>Next chance to wakeup in %1 seconds<br/>%2 chance to wake up every %3 seconds", (((_wt + _wakeUpCheckInterval) - CBA_missionTime) max 0) toFixed 2, ((ace_medical_spontaneousWakeUpChance * 100) toFixed 2) + "%", _wakeUpCheckInterval toFixed 2];
            };
        }
        else
        {
            _str = _str + "<br/>You are dying";
        };
		
		_ctrl ctrlSetStructuredText parseText ("<t align='center'>" + _str + "</t>");
		_ctrl ctrlCommit 0;
	}, 0.25, _ctrl] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;