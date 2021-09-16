/*======================================
	ghg_fnc_makeBriefings
	Compiles briefings for each side and adds to players
	Also Adds the GHG Framework tab and sections
	Author: BSuz, Quantx
======================================*/
if ( !hasInterface ) exitWith {};

player createDiarySubject ["ghg_framework","GHG Framework"];
_version = loadFile "ghg\version.txt";
_versionString = format ["Current Version: %1", _version];
player createDiaryRecord ["ghg_framework", ["Version", _versionString]];

player createDiaryRecord ["ghg_framework", ["Radios", "<font size='24' face='TahomaB'>Debug Radios</font>
		<br />Click one a radio name below to add the radio to your inventory if space is availible. This should only be used with permsission from the current zeus or for debug purposes.
		<br /><executeClose expression='player addItem ""ACRE_PRC343"";_str = format [""%1 has spawned a AN/PRC 343 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 343</executeClose>
		<br /><executeClose expression='player addItem ""ACRE_PRC152"";_str = format [""%1 has spawned a AN/PRC 152 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 152</executeClose>
		<br /><executeClose expression='if (backpack player isEqualTo """") then {player addBackpack ""B_AssaultPack_blk"";};player addItemToBackpack ""ACRE_PRC117F"";_str = format [""%1 has spawned a AN/PRC 117F from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 117F</executeClose>
	"]];

_settingString = format ["<font size='24' face='TahomaB'>Mission Settings</font><br />
		Deploy Type:   %1 <br />
		Deploy Range:  %2<br />
		<br />
		DSM Filecount: %3<br />
		<br />
		Road Check:    %4<br />
		<br />
		<font size='16' face='TahomaB'>Player Information:</font><br />
		BLU Faction:   %5<br />
		BLU Camo:      %6<br />
		OPF Faction:   %7<br />
		OPF Camo:      %8<br />
		IND Faction:   %9<br />
		IND Camo:      %10<br />
	",
	getText ( missionConfigFile >> "CfgGHG" >> "deployType" ),
	getNumber ( missionConfigFile >> "CfgGHG" >> "deployRange" ),
	getNumber (missionConfigFile >> "CfgGHG" >> "dsmFiles"),
	getText (missionConfigFile >> "CfgGHG" >> "roadCheck"),
	getText (missionConfigFile >> "CfgGHG" >> "bluFaction"),
    getText (missionConfigFile >> "CfgGHG" >> "bluCamo"),
	getText (missionConfigFile >> "CfgGHG" >> "opfFaction"),
    getText (missionConfigFile >> "CfgGHG" >> "opfCamo"),
	getText (missionConfigFile >> "CfgGHG" >> "indFaction"),
    getText (missionConfigFile >> "CfgGHG" >> "indCamo")	
	];

player createDiaryRecord ["ghg_framework", ["Mission Settings", _settingString]];


private _briefFile = switch ( playerSide ) do
{
	case west: { "briefing\blufor.sqf" };
	case east: { "briefing\opfor.sqf" };
	case resistance: { "briefing\indfor.sqf" };
	case sideLogic: { "briefing\zeus.sqf" };
	case civilian: { "briefing\civilian.sqf" };
};

private _brief = call compile preprocessFileLineNumbers _briefFile;

if ( isNil "_brief" ) then { _brief = [] };

if ( _brief isEqualType [] ) then
{
	// Add items in reverse order
	reverse _brief;
	
	{
		player createDiaryRecord ["Diary", _x];
	} forEach _brief;
};

if (getNumber ( missionConfigFile >> "CfgGHG" >> "isTraining" ) isEqualTo 1) then {
	player createDiarySubject ["locations","Locations"];
	private _locationBrief = call compile preprocessFileLineNumbers 	"briefing\locations.sqf";
	// Add items in reverse order
	reverse _locationBrief;
		
	{
		player createDiaryRecord ["locations", _x];
	} forEach _locationBrief;
}; 