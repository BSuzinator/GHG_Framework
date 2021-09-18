#include "script_component.hpp"
/*======================================
	ghg_fnc_makeBriefings
	Compiles briefings for each side and adds to players
	Also Adds the GHG Framework tab and sections
	Author: BSuz, Quantx
======================================*/
if ( !hasInterface ) exitWith {};

private _ghg = missionConfigFile >> "CfgGHG";

player createDiarySubject ["ghg_framework","GHG Framework"];
private _version = getText (_ghg >> "version");
private _versionString = format ["Current Version: %1", _version];
player createDiaryRecord ["ghg_framework", ["Version", _versionString]];

player createDiaryRecord ["ghg_framework", ["Radios", "<font size='24' face='TahomaB'>Debug Radios</font>
		<br />Click one a radio name below to add the radio to your inventory if space is availible. This should only be used with permsission from the current zeus or for debug purposes.
		<br /><executeClose expression='player addItem ""ACRE_PRC343"";_str = format [""%1 has spawned a AN/PRC 343 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 343</executeClose>
		<br /><executeClose expression='player addItem ""ACRE_PRC152"";_str = format [""%1 has spawned a AN/PRC 152 from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 152</executeClose>
		<br /><executeClose expression='if (backpack player isEqualTo """") then {player addBackpack ""B_AssaultPack_blk"";};player addItemToBackpack ""ACRE_PRC117F"";_str = format [""%1 has spawned a AN/PRC 117F from debug menu"",name player];_str remoteExec [""systemChat"", 0, false];'>AN/PRC 117F</executeClose>
	"]];

private _settingString = format ["<font size='24' face='TahomaB'>Mission Settings</font><br />
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
	getText ( _ghg >> "deployType" ),
	getNumber ( _ghg >> "deployRange" ),
	getNumber (_ghg >> "dsmFiles"),
	getText (_ghg >> "roadCheck"),
	getText (_ghg >> "bluFaction"),
    getText (_ghg >> "bluCamo"),
	getText (_ghg >> "opfFaction"),
    getText (_ghg >> "opfCamo"),
	getText (_ghg >> "indFaction"),
    getText (_ghg >> "indCamo")	
	];

player createDiaryRecord ["ghg_framework", ["Mission Settings", _settingString]];

private _briefSide = _ghg >> "Briefing" >> (switch ( playerSide ) do
{
	case west: { "Blufor" };
	case east: { "Opfor" };
	case resistance: { "Indfor" };
	case sideLogic: { "Zeus" };
	case civilian: { "Civilian" };
});

private _addBreif = {
    params ["_tab", "_briefSide"];

    private _entries = _briefSide call Bis_fnc_getCfgSubClasses;

    // Add items in reverse order
    reverse _entries;

    {
        private _entry = _briefSide >> _x;
        private _entryText = _entry >> "text";

        private _title = getText (_entry >> "title" );
        
        // Merge arrays if needed
        private _text = if ( isArray(_entryText) ) then
        {
            private _arr = getArray _entryText;
            _arr joinString "<br/>";
        }
        else
        {
             getText _entryText;
        };

        player createDiaryRecord [_tab, [_title, _text]];
    } forEach _entries;
};

["Diary", _briefSide] call _addBreif;

// Show all breifings to zeus
if ( playerSide isEqualTo sideLogic ) then
{
    {
        private _subject = "brief_" + (toLower _x);
        player createDiarySubject [_subject, _x + " Briefing"];

        [_subject, _ghg >> "Briefing" >> _x] call _addBreif;
    } forEach [ "Blufor", "Opfor", "Indfor", "Civilian" ];
};

if (getNumber ( _ghg >> "isTraining" ) isEqualTo 1) then {
    private _subject = "locations";
	player createDiarySubject [_subject, "Locations"];
    [_subject, "locations"] call _addBreif;
}; 