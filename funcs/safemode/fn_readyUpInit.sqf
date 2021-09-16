/*======================================
	ghg_fnc_readyUpInit
	Adds action to unit to ready up side
	Author: Quantx
======================================*/
if ( isNil "SAFE_MODE_READY_BLU" ) then
{
	SAFE_MODE_READY_BLU = true;
	SAFE_MODE_READY_OPF = true;
	SAFE_MODE_READY_IND = true;

	if ( isServer ) then
	{
		SAFE_MODE_TIME = daytime;
	};

	{
		switch ( side _x ) do
		{
			case west: { SAFE_MODE_READY_BLU = false; };
			case east: { SAFE_MODE_READY_OPF = false; };
			case resistance: { SAFE_MODE_READY_IND = false; };
		};
	} forEach call BIS_fnc_listPlayers;
};

// TODO: stop using "addPublicVariableEventHandler" as it is depricated
"SAFE_MODE_READY_BLU" addPublicVariableEventHandler { systemChat "BLUFOR is now ready for combat"; call ghg_fnc_readyUpServer; };
"SAFE_MODE_READY_OPF" addPublicVariableEventHandler { systemChat "OPFOR is now ready for combat";  call ghg_fnc_readyUpServer; };
"SAFE_MODE_READY_IND" addPublicVariableEventHandler { systemChat "INDFOR is now ready for combat"; call ghg_fnc_readyUpServer; };

if ( hasInterface ) then
{
	private _sideName = switch (playerSide) do
	{
		case west: { "BLUFOR" };
		case east: { "OPFOR" };
		case resistance: { "INDFOR" };
	};

	private _rdyAct = [
		"ghg_ready_up",
		format ["Declare %1 ready", _sideName ],
		"",
		ghg_fnc_readyUp,
		ghg_fnc_readyUpCheck
	] call ace_interact_menu_fnc_createAction;
	
	[
		player,
		1,
		["ACE_SelfActions"],
		_rdyAct
	] call ace_interact_menu_fnc_addActionToObject;
	
	[] spawn ghg_fnc_readyUpNotify;
};
