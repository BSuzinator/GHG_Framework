#include "script_component.hpp"
/*======================================
	ghg_fnc_deploy
	Teleports vehicle and crew to position in deployZone marker
	Author: BSuz
======================================*/
if (isNil QGVAR(deployParams)) exitWith {}; // Not called from deployment function

params ["_units", "_pos", "_alt", "_shift"];

GVAR(deployParams) params ["_target", "_player", "_actParams"];

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
			private _FHPD = getAllHitPointsDamage _target;
			private _chutePos = ASLtoATL (_target modelToWorldWorld [0, 0, _tMax # 2]);
			private _chute = createVehicle ["O_Parachute_02_F", _chutePos, [], 0, "CAN_COLLIDE"];
			_chute setDir getDir _target;
			_target attachTo [_chute, [0, 0, 0]];
			sleep 1;
			{
				_name = (_FHPD select 0) select _forEachIndex;
				_value = (_FHPD select 2) select _forEachIndex;
				_target setHitPointDamage [_name,_value,false,objNull];
			} forEach (_FHPD select 0);
			
			waitUntil { ((getPos _target) # 2) < 10 };

			detach _target;
			
			// Parachute will delete itself after it lands
		};
	};
	//Deploys to WATER
	case "SURFACE": {
		_target setVehiclePosition [_pos, [], 0];
	};
	case "iHALO": {
		[_player, _pos] spawn {	
			params ["_player","_pos"];
			_grp1 = group _player;
			_unitCount = count units _grp1;
			_increment = 360 / _unitCount;
			_incCount = 0;
			{
				_incCount = _incCount + _increment;
				_tpPos = _pos getPos [7, _incCount];
				_x setpos [_tpPos select 0, _tpPos select 1, 1500];
				_x setDir (_incCount + 180);
				_x action ["WeaponOnBack", _x];
				//[_x, ["<t color='#ff0000'>Open Chute</t>","A3\functions_f\misc\fn_HALO.sqf",[],1,true,true,"Eject"]] remoteExec ["addAction", _x];
				{
					_actionID = player addaction ["<t color='#ff0000'>Open Chute</t>","A3\functions_f\misc\fn_HALO.sqf",[],1,true,true,"Eject"];
					player setVariable ["ghg_iHaloActionID", _actionID];
					[] spawn {waitUntil {((getPos player) select 2) < 2}; player removeAction (player getVariable "ghg_iHaloActionID");};
				} remoteExec ["call", _x];
			} forEach units _grp1;
		};
	};
	case "iLALO": {
		[_player, _pos] spawn {
			params ["_player","_pos"];
			_grp1 = group _player;
			_unitCount = count units _grp1;
			_increment = 360 / _unitCount;
			_incCount = 0;
			{
				_incCount = _incCount + _increment;
				_tpPos = _pos getPos [7, _incCount];
				_x setpos [_tpPos select 0, _tpPos select 1, 300];
				_x setDir (_incCount + 180);
				_x action ["WeaponOnBack", _x];
				{
					_actionID = player addaction ["<t color='#ff0000'>Open Chute</t>","A3\functions_f\misc\fn_HALO.sqf",[],1,true,true,"Eject"];
					player setVariable ["ghg_iLaloActionID", _actionID];
					[] spawn {waitUntil {((getPos player) select 2) < 2}; player removeAction (player getVariable "ghg_iLaloActionID");};
				} remoteExec ["call", _x];
			} forEach units _grp1;
		};
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

if ((_deployType isEqualTo "iHALO") || (_deployType isEqualTo "iLALO")) then {
	
	_msg = format [
	"%1 has deployed %2 to GRIDREF: %3 using type %4 for side %5",
	name _player,
	groupID (group _player),
	_gridPos,
	_deployType,
	side _player
	];

};

[_msg] remoteExec ["systemChat", side _player]; // Notify team members
[_msg] remoteExec ["systemChat", sideLogic ]; // Notify zeus

if ! (GVARMAIN(is_training)) then
{
	GVAR(hasDeployed) = true;

	removeMissionEventHandler ["Map", _deployMapID];
	removeMissionEventHandler ["MapSingleClick", _deployEventID];
};



openMap false;
GVAR(deployParams) = nil;

nil;