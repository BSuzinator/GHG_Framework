/*======================================
	ghg_fnc_readyUpCheck
	Checks who get the ready up action
	Author: Quantx
======================================*/
params ["_target", "_player"];

private _rankList = [
	"PRIVATE",
	"CORPORAL",
	"SERGEANT",
	"LIEUTENANT",
	"CAPTAIN",
	"MAJOR",
	"COLONEL"
];

private _maxRank = 0;
private _myRank = 0;
private _mySide = side _player;

{
	private _unit = _x;
	
	if ( (side _unit) isEqualTo _mySide ) then
	{
		private _unitRank = rank _unit;
	
		{
			if ( _unitRank isEqualTo _x ) exitWith
			{
				_maxRank = _maxRank max _forEachIndex;
				
				if ( _unit isEqualTo _player ) then	{ _myRank = _forEachIndex; };
			};
		} forEach _rankList;
	};
} forEach allPlayers;

private _sideReady = switch (_mySide) do
{
	case west: { GVAR(ready_blu) };
	case east: { GVAR(ready_opf) };
	case resistance: { GVAR(ready_ind) };
};

(_myRank >= _maxRank) && (!_sideReady);