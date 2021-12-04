#include "script_component.hpp"
/*======================================
	ghg_fnc_rff
	Reverse Friendly Fire
	Called on init
	Author: BSuz
======================================*/
params ["_unit"];
if ( !hasInterface ) exitWith {};
if (isNil "_unit") then {_unit = player};

[_unit, "HandleDamage", {
		params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];
		if (side _unit != side _instigator) exitWith {};
		if (_unit isEqualTo _instigator) exitWith {};
		_damageType = ["_projectile"] call ace_medical_damage_fnc_getTypeOfDamage;
		
		//Get Instigator's ff incidents
		_ffInstances = _instigator getVariable ["ghg_rff_instances", 0];
		_ffInstances = _ffInstances + 1;
		
		//Teleport Player out of map
		//_instigator setPos [0,0,0];
		
		//Boost damage reflection
		_damage = _damage + (_damage * 0.5);
		
		//Set correct hitpoint for ACE
		_aceHitPoint = "body";
		switch _hitPoint do {
			//Null out other
			case "#structural":{_aceHitPoint = "";};
			case "incapacitated":{_aceHitPoint = "";};
			case "ace_hdbracket":{_aceHitPoint = "";};
			//Head
			case "hithead":{_aceHitPoint = "head";};
			case "hitface":{_aceHitPoint = "head";};
			case "hitneck":{_aceHitPoint = "head";};
			case "face_hub":{_aceHitPoint = "head";};
			case "neck":{_aceHitPoint = "head";};
			case "head":{_aceHitPoint = "head";};
			//Torso
			case "body":{_aceHitPoint = "body";};
			case "hitpelvis":{_aceHitPoint = "body";};
			case "hitabdomen":{_aceHitPoint = "body";};
			case "hitdiaphragm":{_aceHitPoint = "body";};
			case "hitchest":{_aceHitPoint = "body";};
			case "hitbody":{_aceHitPoint = "body";};
			case "pelvis":{_aceHitPoint = "body";};
			case "spine1":{_aceHitPoint = "body";};
			case "spine2":{_aceHitPoint = "body";};
			case "spine3":{_aceHitPoint = "body";};
			//Arms
			case "hitarms":{_aceHitPoint = selectRandom ["hand_l","hand_r"];};
			case "hithand":{_aceHitPoint = selectRandom ["hand_l","hand_r"];};
			case "arms":{_aceHitPoint = selectRandom ["hand_l","hand_r"];};
			case "hands":{_aceHitPoint = selectRandom ["hand_l","hand_r"];};
			//Legs
			case "legs":{_aceHitPoint = selectRandom ["leg_l","leg_r"];};
			case "hitlegs":{_aceHitPoint = selectRandom ["leg_l","leg_r"];};
			case "hitleftleg":{_aceHitPoint = "leg_l";};
			case "hitrightleg":{_aceHitPoint = "leg_r";};
			default {_aceHitPoint = "body";};			
		};
		
		//Apply Damage to instigator
		[_instigator, _damage, _aceHitPoint, _damageType, _instigator] remoteExec["ace_medical_fnc_addDamageToUnit",_instigator];
		
		//Make goggles dirty
		remoteExecCall["ace_goggles_fnc_applyDirtEffect",_instigator];
		
		//Auto-kick after so many instances
		_instigator setVariable ["ghg_rff_instances", _ffInstances, true];
		if ((_ffInstances >= 24) && (_ffInstances < 32)) then {
			_warned = _instigator getVariable ["ghg_rff_warned", false];
			if (!_warned) then {
				[ [format ["You have friendly fired too many times.\nThis is your only warning.\nCount: %1",player getVariable ["ghg_rff_instances", 3]],"BLACK FADED",5] ] remoteExec ["titleText",_instigator];
				[5] remoteExec ["titleFadeOut",_instigator];
				_instigator setVariable ["ghg_rff_warned",true,true];
			};
		};
		if (_ffInstances >= 50) then {
			_kicked = _instigator getVariable ["ghg_rff_kicked", false];
			if (!_kicked) then {
				[ [format ["You have friendly fired too many times.\nDisconnecting...",player getVariable ["ghg_rff_instances", 0]],"BLACK FADED",5] ] remoteExec ["titleText",_instigator];
				"FF_Removal" remoteExec ["endMission", _instigator];
				[format ["%1 has been kicked for friendly fire.",name _instigator]] remoteExec ["systemchat",-2];
				_serverCommandStr = format ["#kick %1",name _instigator];
				[_serverCommandStr] remoteExec ["serverCommand", 2];
				_instigator setVariable ["ghg_rff_kicked",true,true];
				[5] remoteExec ["titleFadeOut",_instigator];
			};
		};
		//Return 0 Vanilla damage
		0
	}
] call CBA_fnc_addBISEventHandler;

/*
addMissionEventHandler ["Ended", {
	params ["_endType"];
	if (_endType != "FF_Removal") {
		//get eh and remove above
	};
}];
*/