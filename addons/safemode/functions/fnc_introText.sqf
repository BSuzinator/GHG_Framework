#include "script_component.hpp"
/*======================================
	ghg_safemode_fnc_introText
	Displays mission information after safemode ends
	Author: BSuz
======================================*/
private _unit = player;
if ((side _unit) isEqualTo sideLogic) exitWith {};
private _author = getMissionConfigValue ["author", ""];
private _missionName = getMissionConfigValue ["OnLoadName", ""];
private _worldName = worldName;
private _missionTime = [dayTime, "HH:MM"] call BIS_fnc_timeToString;
private _callsign = groupId (group _unit);
private _role = getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName");
//_role = roleDescription _unit;

private _line1 = _missionName;
private _line2 = _author;
private _line3 = format ["%1 on %2", _missionTime, _worldName];
private _line4 = format ["%1 | %2", _role, _callsign];

[_line1, _line2, _line3 /*,  _line4 */ ] spawn EFUNC(misc,infoText);
//[_line1, _line2, _line3, _line4] spawn BIS_fnc_infoText;