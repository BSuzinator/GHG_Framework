/*======================================
	ghg_fnc_deploy
	Teleports vehicle and crew to position in deployZone marker
	Author: BSuz
======================================*/
if (isNil "deployParams") exitWith{};
params ["_units", "_pos", "_alt", "_shift"];
deployParams params ["_target", "_player", "_actionParams"];
_actionParams params ["_deployEventID","_deployMapID","action"];
private _deployType = getText (missionConfigFile >> "CfgGHG" >> "deployType");

_pos set [2,1];

if !(_pos inArea "deployZone") then {
	_target vehicleChat "Selected Area not in Zone";
	exitWith{};
};

_target setVehiclePosition [_pos,[],0,"CAN_COLLIDE"];
_target setDir (markerDir "deployZone");

switch (_deployType) do {

		//Low Altitude Low Opening
		case "LALO": {
			[_target,300] spawn bis_fnc_HALO;			
		};
		//High Altitude Low Opening
		case "HALO": {
			[_target,1500] spawn bis_fnc_HALO;
		};
		//Deploys to WATER
		case "WATER": {
			
		};
	};
//Display notification for vehicle deployment to side and zeus
_vehName = getText (configFile >> "cfgVehicles" >> typeOf vehicle player >> "displayName");
_gridPos = mapGridPosition getPos player;
_notifString = format ["%1 has deployed %2 to GRIDREF: %3 using type %4 for Side %5",name _player,_vehName, _gridPos, _deployType, side _player];
_notifString remoteExec ["systemChat", side _player];
_notifString remoteExec ["systemChat", sideLogic];
hasDeployed = true;
removeMissionEventHandler ["Map", _deployMapID];
removeMissionEventHandler ["MapSingleClick", _deployEventID];
openMap false;
deployParams = nil;
nil;