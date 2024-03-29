#include "script_component.hpp"
/*======================================
	ghg_zeus_fnc_endMission
	Ends mission based on type
	Called from: ghg_zeus_fnc_endMission
	Author: BSuz
======================================*/

//["allLost","allVictory","westVictory","eastVictory","indVictory","multipleVictory"]
(_this select 0) params ["_endType", "_sides","_endingText"];
(_this select 1) params ["_modulePos","_attachedObject"];

[] call EFUNC(statistics,setStatisticsDebrief);

{
	_x addScoreSide -(scoreSide _x);
} forEach [west,east,independent,civilian];

_defaultText = switch (_endType) do {
	case "allLost": {"Mission Failed"};
	case "allVictory": {"Mission Complete"};
	case "westVictory": {"BLUFOR Won"};
	case "eastVictory": {"OPFOR Won"};
	case "indVictory": {"INDFOR Won"};
	case "civVictory": {"CIVFOR Won"};
	case "multipleVictory":	{
			_tempText = "";
			{
				_sideText = switch (_x) do {
					case west : {"BLUFOR"};
					case east : {"OPFOR"};
					case independent : {"INDFOR"};
					case civilian : {"CIVFOR"};
				};
				if (_forEachIndex > 0) then {_tempText = _tempText + ", "};
				_tempText = _tempText + _sideText;
			} forEach _sides;
			_tempText
		};
};

if (_endingText isEqualTo "") then {_endingText = _defaultText;};

RscDisplayDebriefing_params = _endingText;
publicvariable "RscDisplayDebriefing_params";

switch (_endType) do {
	case "allLost":
		{
			["EveryoneLost",_endingText] remoteExec ["BIS_fnc_endMissionServer",2];
			//["EveryoneLost", true, 3] remoteExec ["BIS_fnc_endMission", 0, true];
		};
	case "allVictory":
		{
			"EveryoneWon" remoteExec ["BIS_fnc_endMissionServer",2];
			//["EveryoneWon", true, 3] remoteExec ["BIS_fnc_endMission", 0, true];
		};
	case "westVictory":
		{
			west addScoreSide 99999;
			"SideScore" remoteExec ["BIS_fnc_endMissionServer",2];
		};
	case "eastVictory":
		{
			east addScoreSide 99999;
			"SideScore" remoteExec ["BIS_fnc_endMissionServer",2];
		};
	case "indVictory":
		{
			independent addScoreSide 99999;
			"SideScore" remoteExec ["BIS_fnc_endMissionServer",2];
		};
	case "civVictory":
		{
			civilian addScoreSide 99999;
			"SideScore" remoteExec ["BIS_fnc_endMissionServer",2];
		};
	case "multipleVictory":
		{
			if (count _sides <= 1) exitWith {systemChat "Only one side selected. Try again.";};
			{_x addScoreSide 99999;} forEach _sides;
			//["SideScore", true, 3] remoteExec ["BIS_fnc_endMission", 0, true];
			"SideScore" remoteExec ["BIS_fnc_endMissionServer",2];
		};
	default {systemChat "No type selected."};
};
diag_log format ["[GHG]: Ending mission with %1 ending",_endType];