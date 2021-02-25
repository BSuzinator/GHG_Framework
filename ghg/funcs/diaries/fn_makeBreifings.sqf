/*======================================
	ghg_fnc_makeBriefings
	Compiles briefings for each side and adds to players
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

player createDiarySubject ["ghg_framework","GHG Framework"];
_version = parseNumber loadFile "ghg\version.txt";
_versionString = format ["Current Version: %1", _version];
player createDiaryRecord ["ghg_framework", ["Version", _versionString]];

player createDiaryRecord ["ghg_framework", ["Radios", "<font size='24' face='TahomaB'>Debug Radios</font></br></br></br></br>Click one a radio name below to add the radio to your inventory if space is availible. This should only be used with permsission from the current zeus or for debug purposes.<br /><executeClose expression='player addItem ""ACRE_PRC343"";_str = format [""%1 has spawned a AN/PRC 343 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 343</executeClose><br /><executeClose expression='player addItem ""ACRE_PRC152"";_str = format [""%1 has spawned a AN/PRC 152 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 152</executeClose><br /><executeClose expression='player addItemToBackpack ""ACRE_PRC117F"";_str = format [""%1 has spawned a AN/PRC 117F from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 117F</executeClose>"]];


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