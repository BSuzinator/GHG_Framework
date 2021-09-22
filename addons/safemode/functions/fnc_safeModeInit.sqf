#include "script_component.hpp"
/*======================================
	ghg_fnc_safeModeInit
	Adds Zeus module for safemode and starts safe mode
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

GVAR(safe) = false;

[
	"Players",
	"Safe Mode",
	{
		[
			"Safe Mode",
			[
				[
					"CHECKBOX",
					"Safe Mode Enabled",
					true
				]
			],
			{
				(_this select 0) params ["_checked"];
				
				private _message = if ( _checked ) then {
					"Safe Mode is now enabled, weapons will not fire!"
				} else {
					"Safe Mode is now disabled, weapons are hot!"
				};
				
				if ! ( _checked isEqualTo GVAR(safe) ) then
				{
					[_checked, _message] remoteExecCall [QFUNC(safeModeTrigger), 0, "ghg_safemode_update"]; // Make sure JIP's are notified
				};
			},
			{},
			_this
		] call zen_dialog_fnc_create;
	}
] call zen_custom_modules_fnc_register;

[ "ace_firedPlayer", FUNC(safeMode) ] call CBA_fnc_addEventHandler;
[ "ace_firedPlayerVehicle", FUNC(safeMode) ] call CBA_fnc_addEventHandler;

[player, currentWeapon player, true] call ace_safemode_fnc_setWeaponSafety;

private _ghg = missionConfigFile >> "CfgGHG";

private _timeout = -1;

if ( isNumber (_ghg >> "safemodeTimeout") ) then
{
    _timeout = getNumber (_ghg >> "safemodeTimeout");
};

if ( _timeout != 0 ) then
{
    GVAR(safe) = true;
    player allowDamage false;
    systemChat "Safe Mode has been enabled, weapons will not fire!";

    if ( _timeout > 0 ) then
    {
        [
            {time > (_this # 0)},
            {(_this # 1) call FUNC(safeModeTrigger)},
            [
                _timeout,
                [
                    false,
                    "Safe Mode is now disabled, weapons are hot!",
                    5,
                    "Safe Mode timeout expired, weapons hot in five seconds!"
                ]
            ],
            (_timeout + 5)
        ] call CBA_fnc_waitUntilAndExecute;
    };
}
