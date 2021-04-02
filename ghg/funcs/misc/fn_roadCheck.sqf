/*======================================
	ghg_fnc_roadCheck
	Damages Tires of wheeled vehicles for driving off roads
	Vehicles can be excluded from this by putting the following in the vehciles' INIT
	this setVariable ["roadCheckExclude", true];
	Author: BSuz
======================================*/
if (!hasInterface) exitwith {};

_roadCheckEnabled = toLower (getText (missionConfigFile >> "CfgGHG" >> "roadCheck"));
if (_roadCheckEnabled isNotEqualTo "true") exitwith {};

_pVehicleLFW = 0;
_pVehicleLF2W = 0;
_pVehicleLMW = 0;
_pVehicleLBW = 0;
_pVehicleRFW = 0;
_pVehicleRF2W = 0;
_pVehicleRMW = 0;
_pVehicleRBW = 0;

_pside = side player;
_respawnMkr = format ["respawn_%1",_pside];
_respawnPos = markerPos _respawnMkr;

[_roadCheckEnabled,_pVehicleLFW,_pVehicleLF2W,_pVehicleLMW,_pVehicleLBW,_pVehicleRFW,_pVehicleRF2W,_pVehicleRMW,_pVehicleRBW,_respawnPos] spawn {
	
	params ["_roadCheckEnabled","_pVehicleLFW","_pVehicleLF2W","_pVehicleLMW","_pVehicleLBW","_pVehicleRFW","_pVehicleRF2W","_pVehicleRMW","_pVehicleRBW","_respawnPos"];
	
	while {_roadCheckEnabled isEqualTo "true"} do {
		waitUntil {vehicle player isNotEqualTo player};
		_roadList = player nearRoads 10;
		if (((vehicle player distance2D _respawnPos) > 250) && (_roadList isEqualTo []) && ((driver (vehicle player)) isEqualTo player) && ((vehicle player isKindOf "LandVehicle")) && !(vehicle player getVariable ["roadCheckExclude", false]) ) then
			{
				_pVehicle = vehicle player;			
				_pVehicleLFW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLFWheel" >> "name");
				_pVehicleRFW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRFWheel" >> "name");
				_pVehicleLF2W = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLF2Wheel" >> "name");
				_pVehicleRF2W = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRF2Wheel" >> "name");
				_pVehicleLMW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLMWheel" >> "name");
				_pVehicleRMW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRMWheel" >> "name");
				_pVehicleLBW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLBWheel" >> "name");
				_pVehicleRBW = _pVehicle getHit getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRBWheel" >> "name");
				
				_pVehicleLFW = _pVehicleLFW + 0.05;
				_pVehicleLF2W = _pVehicleLF2W + 0.05;
				_pVehicleLMW = _pVehicleLMW + 0.05;
				_pVehicleLBW = _pVehicleLBW + 0.05;
				_pVehicleRFW = _pVehicleRFW + 0.05;
				_pVehicleRF2W = _pVehicleRF2W + 0.05;
				_pVehicleRMW = _pVehicleRMW + 0.05;
				_pVehicleRBW = _pVehicleRBW + 0.05;			
				
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLFWheel" >> "name"),_pVehicleLFW];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRFWheel" >> "name"),_pVehicleRFW];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLF2Wheel" >> "name"),_pVehicleLF2W];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRF2Wheel" >> "name"),_pVehicleRF2W];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLMWheel" >> "name"),_pVehicleLMW];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRMWheel" >> "name"),_pVehicleRMW];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitLBWheel" >> "name"),_pVehicleLBW];
				_pVehicle setHit [getText(configFile >> "cfgVehicles" >> (TypeOf _pVehicle) >> "HitPoints" >> "HitRBWheel" >> "name"),_pVehicleRBW];
			
			systemChat "Return to roads or your wheels will be damaged.";
			hint "Return to roads or your wheels will be damaged.";
			};
		sleep 5;
	};
};