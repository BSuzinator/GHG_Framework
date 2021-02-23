/*======================================
	ghg_fnc_resupplyCreate
	Spawns selected resupply crate
	Author: Quantx, BSuzinator
======================================*/
(_this select 0) params ["_crateScript"];
(_this select 1) params ["_target", "_player", "_building", "_faction"];

private _pos = (ASLtoATL (_building modelToWorldWorld (_building getVariable ["crate_pos", [0,0,1]])));
private _dir = (getDir _building) + (_building getVariable ["crate_dir", 0]);

if ( _crateScript isEqualTo "ghg_medical_placeholder" ) then
{
	[_pos, _dir] call compile preprocessFileLineNumbers "ghg\loadouts\medical.sqf";
}
else
{
	_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
	_crate setDir _dir;

	clearItemCargoGlobal _crate;
	clearMagazineCargoGlobal _crate;
	clearWeaponCargoGlobal _crate;
	clearBackpackCargoGlobal _crate;

	_crateContents = call compile preprocessFileLineNumbers format ["ghg\loadouts\%1\crates\%2.sqf", _faction, _crateScript];

	{
		_crate addItemCargoGlobal _x;
	} foreach _crateContents;
	
	[_crate, true, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;
	[_crate, true, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;
	[_crate, 1] call ace_cargo_fnc_setSize;
};