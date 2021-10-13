#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyCreate
	Spawns selected resupply crate
	Author: Quantx, BSuzinator
======================================*/
(_this select 0) params ["_crateScript"];
(_this select 1) params ["_target", "_player", "_building", "_faction"];

private _crate = objNull;

private _pos = (ASLtoATL (_building modelToWorldWorld (_building getVariable ["crate_pos", [0,0,1]])));
private _dir = (getDir _building) + (_building getVariable ["crate_dir", 0]);

switch (_crateScript) do {
	case "ghg_medical_placeholder":
		{
			_crate = [_pos, _dir] call compile preprocessFileLineNumbers "\x\ghg\addons\loadout\loadouts\medical.sqf";
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
			_crate = createVehicle ["ACE_Wheel", _pos, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			_crate setDir _dir;
			[_crate] spawn {params["_crate"];sleep 5; _crate allowDamage true;};
		};
	case "ghg_spare_track_placeholder":
		{
			_crate = createVehicle ["ACE_Track", _pos, [], 0, "CAN_COLLIDE"];
			_crate allowDamage false;
			_crate setDir _dir;
			[_crate] spawn {params["_crate"];sleep 5; _crate allowDamage true;};
		};
	case "ghg_vehicle_ammo_placeholder":
		{
			_crate = createVehicle ["Box_NATO_AmmoVeh_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate; 
			
			_crate addItemCargoGlobal ["ToolKit", 2]; 
			_crate addBackPackCargoGlobal ["B_AssaultPack_blk", 2];
			[_crate, 4] call ace_cargo_fnc_setSize;
		};
	case "ghg_vehicle_fuel_placeholder":
		{
			_crate = createVehicle ["CargoNet_01_barrels_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate; 

			[_crate, 100] call ace_refuel_fnc_makeSource;
			[_crate, 4] call ace_cargo_fnc_setSize;
		};
	default
		{
			_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			
			clearItemCargoGlobal _crate;
			clearMagazineCargoGlobal _crate;
			clearWeaponCargoGlobal _crate;
			clearBackpackCargoGlobal _crate;
			
			private _crateContents = call compile preprocessFileLineNumbers format ["\x\ghg\addons\loadout\loadouts\%1\crates\%2.sqf", _faction, _crateScript];
		
			{
				_crate addItemCargoGlobal _x;
			} foreach _crateContents;
	
			[_crate, true, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;
			[_crate, true, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;
			[_crate, 1] call ace_cargo_fnc_setSize;
		};
};

{
	private _curator = _x;
	_curator addCuratorEditableObjects [[_crate], true];
} forEach allCurators;