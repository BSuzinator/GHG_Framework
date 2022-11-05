#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyPoint
	Adds laptop and extras to resupply containers
	Called by init box of resupply container
	[this] call ghg_fnc_resupplyPoint;
	Author: Quantx, BSuzinator
======================================*/
params ["_obj"];

private _laptop;

if ( isServer ) then
{
	switch (typeOf _obj) do {

		//Original Bunker
		case "Land_Ammostore2": {
			// Make bunker indestructible
			_obj allowDamage false;
		
			// Add the laptop
			_laptop = createVehicle [
				"Land_Laptop_03_black_F",
				(ASLtoATL (_obj modelToWorldWorld [-2.25, 4.5, -1.75])),
				[],
				0,
				"CAN_COLLIDE"
			];
			_laptop setObjectTextureGlobal [1, "\x\ghg\addons\main\ui\header.paa"];
			_laptop setDir getDir _obj;
			_laptop allowDamage false;
            _laptop enableSimulation false;
			_obj setVariable ["laptop_obj", _laptop, true];
			[_laptop, _obj] call BIS_fnc_attachToRelative;
		};
		//Cargo Containers
		case "Land_Cargo20_cyan_F";
		case "Land_Cargo20_grey_F";
		case "Land_Cargo20_IDAP_F";
		case "Land_Cargo20_light_blue_F";
		case "Land_Cargo20_orange_F";
		case "Land_Cargo20_red_F";
		case "Land_Cargo20_yellow_F";
		case "Land_Cargo20_sand_F";
		case "Land_Cargo20_white_F";
		case "Land_Cargo20_military_green_F": {
			// Make container indestructible
			_obj allowDamage false;
			
			//Stop the container from being loaded or loaded into
			[_obj, -1] call ace_cargo_fnc_setSize;
			[_obj, 0] call ace_cargo_fnc_setSpace;
			// Add the laptop
			_laptop = createVehicle [
				"Land_Laptop_03_black_F",
				(ASLtoATL (_obj modelToWorldWorld [1.528, 0.682, 0.05])),
				[],
				0,
				"CAN_COLLIDE"
			];
			_laptop setObjectTextureGlobal [1, "\x\ghg\addons\main\ui\header.paa"];
			_laptop setDir (getDir _obj) + 90;
			_laptop allowDamage false;
			_laptop enableSimulation false;
			_obj setVariable ["crate_pos", [-1.789,0,0.3], true];
			_obj setVariable ["crate_dir", 90, true];
			_obj setVariable ["laptop_obj", _laptop, true];
			
			
			// Add the box
			_box = createVehicle [
				"Land_PaperBox_closed_F",
				(ASLtoATL (_obj modelToWorldWorld [2.076, 0.338, -1.15])),
				[],
				0,
				"CAN_COLLIDE"
			];
			_box setDir (getDir _obj + 180);
			_box enableSimulation false;
			_box allowDamage false;
			[_box, -1] call ace_cargo_fnc_setSize;
			[_box, 0] call ace_cargo_fnc_setSpace;
			[_box, _obj] call BIS_fnc_attachToRelative;
			[_laptop, _obj] call BIS_fnc_attachToRelative;
			
			//Stop the container from being moved
			_obj enableSimulation false;
		};
		default {hint "Resupply depot is not in allowed list"; deleteVehicle _obj;};
	};
};

if ( hasInterface ) then
{
	waitUntil { !isNull (_obj getVariable ["laptop_obj", objNull] ) };
	
	_laptop = _obj getVariable "laptop_obj";

	private _rsupAct = [
		"ghg_resupply_spawn",
		"Request Resupply",
		"",
        {
            params ["_target", "_player", "_args"];
            _args params ["_building"];
            
            private _pos = (ASLtoATL (_building modelToWorldWorld (_building getVariable ["crate_pos", [0,0,1]])));
            private _dir = (getDir _building) + (_building getVariable ["crate_dir", 0]);
            
            private _cb = {
                (_this select 0) params ["_cfg"];
                (_this select 1) params ["_pos", "_dir"];
                [_cfg, _pos, _dir] call FUNC(resupplyCreate);
            };
            
            [side _player, _cb, [_pos, _dir]] call FUNC(resupplyMenu);
        },
		{true},
		{},
		[
			_obj
		]
	] call ace_interact_menu_fnc_createAction;
	
	[
		_laptop,
		0,
		[],
		_rsupAct
	] call ace_interact_menu_fnc_addActionToObject;
};