/*======================================
	ghg_fnc_zeusInit
	Handles zeus slot management
	Author: Quantx
======================================*/
if ( isServer ) then
{
    ghg_fnc_zeusObjects = [];
    ghg_fnc_zeusGroup = createGroup sideLogic;
};

if ( !hasInterface ) exitWith {};

// Ensure virtual zeus players are invincible and force interface
if ( player isKindOf "VirtualCurator_F" ) then
{
	player allowDamage false;
	bis_fnc_forceCuratorInterface_force = true;
	
	[{
		if ( time > 0 ) then
		{
			params ["_args", "_handle"];
		
			if ( isNull curatorCamera ) then
			{
				openCuratorInterface;
			}
			else
			{
				_handle call CBA_fnc_removePerFrameHandler;
			};
		};
	}, 0.25, []] call CBA_fnc_addPerFrameHandler;
};

[player] remoteExecCall ["ghg_fnc_zeusSetup", 2];