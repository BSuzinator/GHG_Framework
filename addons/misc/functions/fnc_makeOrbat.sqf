/*======================================
	ghg_misc_fnc_makeOrbat
	Compiles ORBAT for players
	Author: BSuz
======================================*/
params ["_bUnit"];
if (isNil "GHG_SERVER_GROUPS_READY") then { GHG_SERVER_GROUPS_READY = true; publicVariable "GHG_SERVER_GROUPS_READY";};
diag_log str groupID group player;
private _ghgGroupIDs = [
	"PLT","Alpha","Bravo","Charlie","Delta","Echo","Foxtrot",
	"EWS","MAA","MAT","MMG","MTR","RCN", "DEMO",
	"EWS 2","MAA 2","MAT 2","MMG 2","MTR 2","RCN 2", "DEMO 2",
	"LOGI","LOGI 1","LOGI 2","LOGI 3","LOGI 4",
	"LYNX 1","LYNX 2","LYNX 3","LYNX 4",
	"WOLF 1","WOLF 2","WOLF 3","WOLF 4",
	"RAVN 1","RAVN 2","RAVN 3","RAVN 4",
	"FLCN 1","FLCN 2","FLCN 3","FLCN 4",
	"RPTR 1","RPTR 2","RPTR 3","RPTR 4",
	"KNFS 1","KNFS 2","KNFS 3","KNFS 4"
];
private _customGroups = [];
_customGroups = getArray (missionConfigFile >> "CfgGHG" >> "customGroups");
{_ghgGroupIDs pushBackUnique _x} forEach _customGroups;

private _orbatSTR = "<font size='24' face='TahomaB'>Mission ORBAT</font><br/>Only accurate at mission start<br/>";
private _sideFlag = civilian;
{
	_groupID = groupID _x;
	if (_groupID in _ghgGroupIDs) then {
		_groupLead = leader _x;
		_groupMembers = units _x;
		_groupSide = side _x;
		_groupSideSTR = str _groupSide;
		_groupSTR = "";
		_newSide = false;
		if (_sideFlag isNotEqualTo _groupSide) then {_sideFlag = _groupSide; _newSide = true;} else {_newSide = false;};
		if ((_groupSide isEqualTo side _bUnit || side _bUnit isEqualTo sideLogic) && _groupMembers isNotEqualTo []) then {
			_groupSTR = format ["<br/><font size='18' face='TahomaB'>%1</font><br/>",_groupID];
			{
				_unit = _x;
				_titleSTR = getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName");
				
/* 				_unitType = [toLower typeOf _unit, 2] call BIS_fnc_trimString;
				_titleSTR = switch _unitType do {
					case "soldier_f" : {"Rifleman"};
					case "officer_f" : {"Platoon Lead"};
					case "soldier_sl_f" : {"Squad Leader"};
					case "soldier_tl_f" : {"Team Leader"};
					case "soldier_ar_f" : {"Autorifleman"};
					case "soldier_aar_f" : {"Ass. Autorifleman"};
					case "soldier_lat_f" : {"Rifleman(AT)"};
					case "soldier_uav_f" : {"Forward Asset Controller"};
					case "medic_f" : {_return = "";if (_groupID isEqualTo "PLT" || _groupID isEqualTo "Logistics") then {_return = "Doctor"} else {_return = "Medic"};_return};
					case "soldier_lite_f" : {"Computer"};
					case "soldier_unarmed_f" : {"Teletype"};
					case "soldier_at_f";
					case "soldier_mort";
					case "support_mg_f" : {"Gunner"};
					case "soldier_aat_f";
					case "soldier_amort_f";
					case "soldier_a_f" : {"Ammo Bearer"};
					case "sniper_f" : {"Sniper"};
					case "spotter_f" : {"Spotter"};
					case "soldier_repair_f" : {"Repair Specialist"};
					case "soldier_exp_f" : {"Explosive Specialist"};
					case "helipilot_f";
					case "pilot_f" : {_return = "";if (_unit isEqualTo leader group _unit ) then {_return = "Pilot"} else {_return = "Co-Pilot"};_return};
					case "helicrew_f";
					case "crew_f" : {_return = "";if (_unit isEqualTo leader group _unit ) then {_return = "Commander"} else {_return = "Crew"};_return};
					default {"Extra Body"};
				}; */
				_unitSTR = format ["    %1: %2<br/>",_titleSTR,name _unit];
				_groupSTR = _groupSTR + _unitSTR;
			} forEach _groupMembers;
			if (side _bUnit isEqualTo sideLogic && _newSide) then {_orbatSTR = _orbatSTR + format ["<br/><br/><font size='21' face='TahomaB'>%1</font><br/>",_groupSideSTR]};
			_orbatSTR = _orbatSTR + _groupSTR;
		};
	};
} forEach allGroups;
_orbatSTR