if ( !hasInterface ) exitWith {};

SAFE_MODE_ENABLED = true;
player allowDamage false;

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
				
				if ( !(_checked isEqualTo SAFE_MODE_ENABLED) ) then
				{
					[_checked, _message] remoteExecCall ["ghg_fnc_safeModeTrigger", 0, "ghg_safemode_update"]; // Make sure JIP's are notified
				};
			},
			{},
			_this
		] call zen_dialog_fnc_create;
	}
] call zen_custom_modules_fnc_register;

[ "ace_firedPlayer", ghg_fnc_safeMode ] call CBA_fnc_addEventHandler;
[ "ace_firedPlayerVehicle", ghg_fnc_safeMode ] call CBA_fnc_addEventHandler;

systemChat "Safe Mode has been enabled, weapons will not fire!";