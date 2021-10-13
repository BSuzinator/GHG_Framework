#include "script_component.hpp"
/*======================================
	ghg_fnc_zeusSpawnResupplyCrate
	Function to spawn resupply crate from Zeus Module
	Author: BSuz
======================================*/
(_this select 0) params ["_side", "_crateScript", "_isAirdrop"];
(_this select 1) params ["_modulePos","_attachedObject"];

_crate = objNull;

private _faction = switch ( _side select 0 ) do {
	case west: { getText (missionConfigFile >> "CfgGHG" >> "bluFaction") };
	case east: { getText (missionConfigFile >> "CfgGHG" >> "opfFaction") };
	case resistance: { getText (missionConfigFile >> "CfgGHG" >> "indFaction") };
};

_dir = 0;

if (_isAirdrop) then {_modulePos set [2, 200]} else {_modulePos set [2, 1]};

switch (_crateScript) do {
	case "ghg_medical_placeholder":
		{
			_crate = [_modulePos, _dir] call compile preprocessFileLineNumbers "\x\ghg\addons\gear\loadouts\medical.sqf";
		};
	case "ghg_demolition_placeholder":
		{
			_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate;
			clearMagazineCargoGlobal _crate;
			clearWeaponCargoGlobal _crate;
			clearBackpackCargoGlobal _crate;			
			
			_crate addItemCargoGlobal ["ACE_DefusalKit", 2];
			_crate addItemCargoGlobal ["ACE_Clacker", 2];
			_crate addItemCargoGlobal ["ACE_M26_Clacker", 2];
			_crate addItemCargoGlobal ["SatchelCharge_Remote_Mag", 2];
			_crate addItemCargoGlobal ["DemoCharge_Remote_Mag", 4];
			_crate addItemCargoGlobal ["rhsusf_m112x4_mag", 4];
			_crate addItemCargoGlobal ["rhsusf_m112_mag", 8];
			_crate addBackPackCargoGlobal ["B_Kitbag_cbr", 2];
			[_crate, 2] call ace_cargo_fnc_setSize;
		};
	case "ghg_spare_wheel_placeholder":
		{
			_crate = createVehicle ["ACE_Wheel", _modulePos, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			_crate setDir _dir;
			[_crate] spawn {params["_crate"];sleep 5; _crate allowDamage true;};
		};
	case "ghg_spare_track_placeholder":
		{
			_crate = createVehicle ["ACE_Track", _modulePos, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			_crate setDir _dir;
			[_crate] spawn {params["_crate"];sleep 5; _crate allowDamage true;};
		};
	case "ghg_vehicle_ammo_placeholder":
		{
			_crate = createVehicle ["Box_NATO_AmmoVeh_F", _modulePos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate; 
			
			_crate addItemCargoGlobal ["ToolKit", 2]; 
			_crate addBackPackCargoGlobal ["B_AssaultPack_blk", 2];
			[_crate, 4] call ace_cargo_fnc_setSize;
		};
	case "ghg_vehicle_fuel_placeholder":
		{
			_crate = createVehicle ["CargoNet_01_barrels_F", _modulePos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate; 

			[_crate, 100] call ace_refuel_fnc_makeSource;
			[_crate, 4] call ace_cargo_fnc_setSize;
		};
	default
		{
			_crate = createVehicle ["Box_Syndicate_Ammo_F", _modulePos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			
			clearItemCargoGlobal _crate;
			clearMagazineCargoGlobal _crate;
			clearWeaponCargoGlobal _crate;
			clearBackpackCargoGlobal _crate;
			
			private _crateContents = call compile preprocessFileLineNumbers format ["\x\ghg\addons\gear\loadouts\%1\crates\%2.sqf", _faction, _crateScript];
		
			{
				_crate addItemCargoGlobal _x;
			} foreach _crateContents;
	
			[_crate, true, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;
			[_crate, true, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;
			[_crate, 1] call ace_cargo_fnc_setSize;
		};
};

{
	_x addCuratorEditableObjects [[_crate], false];
	[_x, [[_crate], false]] remoteExec ["addCuratorEditableObjects", 2];
} forEach allCurators;

if (_isAirdrop) then {
	_parachute = createVehicle ["B_Parachute_02_F",_modulePos, [], 0, "FLY"];
	_parachute setPosATL [getPosATL _parachute select 0, getPosATL _parachute select 1, 200];
	_crate attachTo [_parachute,[0,0,0]];
};

if (!(_attachedObject isKindOf "Man") && (_attachedObject isNotEqualTo objNull)) then {
	[_crate, _attachedObject, true] call ace_cargo_fnc_loadItem;
};