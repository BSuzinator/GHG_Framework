/*======================================
	ghg_fnc_deploy
	Teleports vehicle and crew to position in deployZone marker
	Author: BSuz
======================================*/
if (isNil "deployParams") exitWith {}; // Not called from deployment function

params ["_units", "_pos", "_alt", "_shift"];

deployParams params ["_target", "_player", "_actParams"];

_actParams params ["_deployType", "_deployRange", "_deployEventID", "_deployMapID"];

if !(_pos inArea "deployZone") exitWith {
	systemChat "Selected area not in deployment zone";
};

_target setDir markerDir "deployZone";

switch (_deployType) do {
	//Low Altitude Low Opening
	case "LALO"; // Defaults to next code block
	//High Altitude Low Opening
	case "HALO": {
		_pos set [ 2, if (_deployType == "HALO") then {1500} else {200} ];
		_target setPos _pos;
		
		[_target, _chute] spawn { // Parachute logic
			params ["_target", "_chute"];
			(2 boundingBoxReal _target) params ["_tMin", "_tMax", "_tRad"];
			
			waitUntil { ((getPos _target) # 2) <= 50 };
			
			private _chutePos = ASLtoATL (_target modelToWorldWorld [0, 0, _tMax # 2]);
			private _chute = createVehicle ["O_Parachute_02_F", _chutePos, [], 0, "CAN_COLLIDE"];
			_chute setDir getDir _target;
			_target attachTo [_chute, [0, 0, 0]];
		
			waitUntil { ((getPos _target) # 2) < 10 };
			detach _target;
			
			// Parachute will delete itself after it lands
		};
	};
	//Deploys to WATER
	case "SURFACE": {
		_target setVehiclePosition [_pos, [], 0];
	};
};

//Display notification for vehicle deployment to side and zeus
private _vehName = getText (configFile >> "cfgVehicles" >> typeOf vehicle player >> "displayName");
private _gridPos = mapGridPosition getPos player;
private _msg = format [
	"%1 has deployed %2 to GRIDREF: %3 using type %4 for side %5",
	name _player,
	_vehName,
	_gridPos,
	_deployType,
	side _player
];

[_msg] remoteExec ["systemChat", side _player]; // Notify team members
[_msg] remoteExec ["systemChat", sideLogic ]; // Notify zeus

hasDeployed = true;

removeMissionEventHandler ["Map", _deployMapID];
removeMissionEventHandler ["MapSingleClick", _deployEventID];

openMap false;
deployParams = nil;

nil;