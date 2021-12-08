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
			_crate = [_pos, _dir] call compile preprocessFileLineNumbers "\x\ghg\addons\gear\loadouts_old\medical.sqf";
			_crate setVariable["ace_cargo_customname", "GHG Medical", true];
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
			_crate setVariable["ace_cargo_customname", "GHG Demolitions", true];
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
			_crate setVariable["ace_cargo_customname", "GHG Vehicle Ammo", true];
		};
	case "ghg_vehicle_fuel_placeholder":
		{
			_crate = createVehicle ["CargoNet_01_barrels_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			clearItemCargoGlobal _crate; 

			[_crate, 100] remoteExec["ace_refuel_fnc_makeSource",2];
			[_crate, 4] call ace_cargo_fnc_setSize;
			_crate setVariable["ace_cargo_customname", "GHG Fuel", true];
		};
	default
		{
			_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
			_crate setDir _dir;
			
			clearItemCargoGlobal _crate;
			clearMagazineCargoGlobal _crate;
			clearWeaponCargoGlobal _crate;
			clearBackpackCargoGlobal _crate;
			
			private _crateContents = call compile preprocessFileLineNumbers format ["\x\ghg\addons\gear\loadouts_old\%1\crates\%2.sqf", _faction, _crateScript];
		
			{
				_crate addItemCargoGlobal _x;
			} foreach _crateContents;
	
			[_crate, true, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;
			[_crate, true, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;
			[_crate, 1] call ace_cargo_fnc_setSize;
			_name = "";
			switch (_crateScript) do {
				case "ftCrate":{_name = "GHG FireTeam";};
				case "matCrate":{_name = "GHG MAT";};
				case "mmgCrate":{_name = "GHG MMG";};
				case "mtrCrate":{_name = "GHG Mortar";};
				case "rcnCrate":{_name = "GHG Recon";};
				case "logiCrate":{_name = "GHG Logistics";};
				case "gmgGunCrate":{_name = "GHG GMG Gun";};
				case "gmgAmmoCrate":{_name = "GHG GMG Ammo";};
				case "hmgGunCrate":{_name = "GHG HMG Gun";};
				case "hmgAmmoCrate":{_name = "GHG HMG Ammo";};
				case "hatTubeCrate":{_name = "GHG HAT Tube";};
				case "hatAmmoCrate":{_name = "GHG HAT Ammo";};
			};
			_crate setVariable["ace_cargo_customname", _name, true];
		};
};

["addCrateList", _crate] call CBA_fnc_serverEvent;

["addZeusObject", _crate] call CBA_fnc_serverEvent;