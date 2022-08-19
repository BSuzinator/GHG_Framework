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
		ACRE Settings: <br />
		  Babel Enabled:   %1<br />
		    BLU Languages:   %2<br />
		    OPF Languages:   %3<br />
		    IND Languages:   %4<br />
		    CIV Languages:   %5<br />
		    INT Languages:   %6<br />
		  Frequencies:<br />
		    BLU: %7<br />
		    OPF: %8<br />
		    IND: %9<br />
		    CIV: %10<br />
		Deploy Settings: <br />
		  Deploy Type:   %11 <br />
		  Deploy Range:  %12<br />
		  BLU Deploy Type:   %13 <br />
		  BLU Deploy Range:  %14<br />
		  OPF Deploy Type:   %15 <br />
		  OPF Deploy Range:  %16<br />
		  IND Deploy Type:   %17 <br />
		  IND Deploy Range:  %18<br />
		<br />
		Hacking Settings: <br />
		  DSM Filecount: %19<br />
		<br />
		Mission Information:<br />
		  Disable Respawn:  %20<br />
		  Dynamic Groups:   %21<br />
		  Footstep Timeout: %22<br />
		  ReadyUp Timeout:  %23<br />
		  Use Trackables:   %24<br />
		    BLU Trackables:  %25<br />
		    OPF Trackables:  %26<br />
		    IND Trackables:  %27<br />
		    CIV Trackables:  %28<br />
		  Is Crash Mission: %29<br />
		    CM Objects:      %30<br />
		  Custom Groups: %31<br />
		<br />
		<font size='16' face='TahomaB'>Player Information:</font><br />
		  BLU Faction:   %32<br />
		  BLU Camo:      %33<br />
		  OPF Faction:   %34<br />
		  OPF Camo:      %35<br />
		  IND Faction:   %36<br />
		  IND Camo:      %37<br />
	",
	getNumber ( _ghg >> "useBabel" ),
	str getArray ( _ghg >> "bluLanguages" ),
	str getArray ( _ghg >> "opfLanguages" ),
	str getArray ( _ghg >> "indLanguages" ),
	str getArray ( _ghg >> "civLanguages" ),
	str getArray ( _ghg >> "interpLanguages" ),
	getNumber ( _ghg >> "bluFreq" ),
	getNumber ( _ghg >> "opfFreq" ),
	getNumber ( _ghg >> "indFreq" ),
	getNumber ( _ghg >> "civFreq" ),
	getText ( _ghg >> "deployType" ),
	getNumber ( _ghg >> "deployRange" ),
	getText ( _ghg >> "bluDeployType" ),
	getNumber ( _ghg >> "bluDeployRange" ),
	getText ( _ghg >> "opfDeployType" ),
	getNumber ( _ghg >> "opfDeployRange" ),
	getText ( _ghg >> "indDeployType" ),
	getNumber ( _ghg >> "indDeployRange" ),
	getNumber (_ghg >> "dsmFiles"),
	getNumber (_ghg >> "disableRespawn"),
	getNumber (_ghg >> "useDynamicGroups"),
	getNumber (_ghg >> "footstep_timeout"),
	getNumber (_ghg >> "readyUpTimeout"),
	getNumber (_ghg >> "useTrackables"),
	str getArray ( _ghg >> "bluTrackables" ),
	str getArray ( _ghg >> "opfTrackables" ),
	str getArray ( _ghg >> "indTrackables" ),
	str getArray ( _ghg >> "civTrackables" ),
	getNumber (_ghg >> "isCrashMission"),
	str getArray ( _ghg >> "crashMissionObjects" ),
	str getArray ( _ghg >> "customGroups" ),
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

if (!GVARMAIN(is_training)) then {
	waitUntil{!isNull player};
	_orbatSTR = [player] call FUNC(makeOrbat);
	player createDiaryRecord ["Diary", [ "Mission ORBAT", _orbatSTR]];
}; 

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

if (GVARMAIN(is_training)) then {
    private _subject = "locations";
	player createDiarySubject [_subject, "Locations"];
    [_subject, "locations"] call _addBreif;
};