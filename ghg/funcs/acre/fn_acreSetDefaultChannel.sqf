params ["_unit"];

waitUntil { [_unit] call acre_api_fnc_isInitialized; };

/* 
Change each player's default 152/148/117 to their respective channels

private _labels = call ghg_fnc_acreGetLabels;

{
	private _radio = [_x] call acre_api_fnc_getRadioByType;
	
	if ( !isNil "_radio" ) then
	{
		private _channel = switch ( groupId group _unit ) do
		{
			case "A1";
			case "A2";
			case "ASL": {  };
			case "B1";
			case "B2";
			
			default { "COMMAND" };
		};
		
		[ _radio, (_labels find _channel) + 1 ] call call acre_api_fnc_setRadioChannel;
	};
} forEach call ghg_fnc_acreGetRadios;
*/