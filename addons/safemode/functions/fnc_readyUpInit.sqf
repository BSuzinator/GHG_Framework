#include "script_component.hpp"
/*======================================
	ghg_fnc_readyUpInit
	Adds action to unit to ready up side
	Author: Quantx
======================================*/
if ( isNil QGVAR(ready_blu) ) then
{
	GVAR(ready_blu) = true;
	GVAR(ready_opf) = true;
	GVAR(ready_ind) = true;

	{
		switch ( side _x ) do
		{
			case west: { GVAR(ready_blu) = false; };
			case east: { GVAR(ready_opf) = false; };
			case resistance: { GVAR(ready_ind) = false; };
		};
	} forEach call BIS_fnc_listPlayers;
};

// TODO: stop using "addPublicVariableEventHandler" as it is depricated
QGVAR(ready_blu) addPublicVariableEventHandler { systemChat "BLUFOR is now ready for combat"; call FUNC(readyUpServer); };
QGVAR(ready_opf) addPublicVariableEventHandler { systemChat "OPFOR is now ready for combat";  call FUNC(readyUpServer); };
QGVAR(ready_ind) addPublicVariableEventHandler { systemChat "INDFOR is now ready for combat"; call FUNC(readyUpServer); };

private _ghg = missionConfigFile >> "CfgGHG";

private _timeout = -1;

if ( isNumber (_ghg >> "readyUpTimeout") ) then
{
    _timeout = getNumber (_ghg >> "readyUpTimeout");
};

if ( isServer ) then
{
    GVAR(start_time) = daytime;
    
    if ( _timeout > 0 ) then
    {
        [
            {time > _this && GVAR(safe)},
            {
                GVAR(ready_blu) = true;
                GVAR(ready_opf) = true;
                GVAR(ready_ind) = true;
                
                publicVariable QGVAR(ready_blu);
                publicVariable QGVAR(ready_opf);
                publicVariable QGVAR(ready_ind);
                
                systemChat "BLUFOR is now ready for combat";
                systemChat "OPFOR is now ready for combat";
                systemChat "INDFOR is now ready for combat";
                
                call FUNC(readyUpServer);
            },
            _timeout
        ] call CBA_fnc_waitUntilAndExecute;
    };
};

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
		FUNC(readyUp),
		FUNC(readyUpCheck)
	] call ace_interact_menu_fnc_createAction;
	
	[
		player,
		1,
		["ACE_SelfActions"],
		_rdyAct
	] call ace_interact_menu_fnc_addActionToObject;
	
    if ( _timeout != 0 ) then
    {
        [{
            params ["_args", "_handle"];
            
            if ( GVAR(ready_blu) && GVAR(ready_opf) && GVAR(ready_ind) ) then
            {
                _handle call CBA_fnc_removePerFrameHandler;
            }
            else
            {
                if ( time > 30 ) then
                {
                    systemChat format["It has been %1 minutes since mission start, weapons are cold.", round (time / 60)];
					//call EFUNC(gear,gearHint);
                };
            };
        }, 60, []] call CBA_fnc_addPerFrameHandler;
    };
};