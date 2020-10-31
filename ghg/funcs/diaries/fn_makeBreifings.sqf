if ( !hasInterface ) exitWith {};

private _briefFile = switch ( playerSide ) do
{
	case west: { "briefing\blufor.sqf" };
	case east: { "briefing\opfor.sqf" };
	case resistance: { "briefing\indfor.sqf" };
	case sideLogic: { "briefing\zeus.sqf" };
	case civilian: { "briefing\zeus.sqf" };
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