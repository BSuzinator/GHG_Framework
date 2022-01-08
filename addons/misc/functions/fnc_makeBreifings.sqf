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
private _missionVersion = getText (_ghg >> "version");
private _modVersion = QUOTE(VERSION_STR);

private _versionString = format ["Mod Version: %1<br/>Mission Version: %2", _modVersion, _missionVersion];
player createDiaryRecord ["ghg_framework", ["Version", _versionString]];

private _settingString = format ["<font size='24' face='TahomaB'>Mission Settings</font><br />
		Deploy Type:   %1 <br />
		Deploy Range:  %2<br />
		<br />
		DSM Filecount: %3<br />
		<br />
		ReadyUp Timeout:    %4<br />
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
	getNumber (_ghg >> "readyUpTimeout"),
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