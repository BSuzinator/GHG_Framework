/*======================================
	ghg_fnc_zeusSpawnResupplyCrate
	Function to spawn resupply crate from Zeus Module
	Author: BSuz
======================================*/
systemChat format ["function called"];
(_this select 0) params ["_side", "_crateScript"];
(_this select 1) params ["_modulePos","_attachedObject"];

systemChat format ["%1, %2, %3, %4",_side,_crateScript,_modulePos,_attachedObject];

private _faction = switch ( _side select 0 ) do {
	case west: { getText (missionConfigFile >> "CfgGHG" >> "bluFaction") };
	case east: { getText (missionConfigFile >> "CfgGHG" >> "opfFaction") };
	case resistance: { getText (missionConfigFile >> "CfgGHG" >> "indFaction") };
};

if ( _crateScript isEqualTo "ghg_medical_placeholder" ) then
{
	[_modulePos, 0] call compile preprocessFileLineNumbers "ghg\loadouts\medical.sqf";
}
else
{
	_crate = createVehicle ["Box_Syndicate_Ammo_F", _modulePos, [], 0, "CAN_COLLIDE"];
	
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

if (!(_attachedObject isKindOf "Man") && (_attachedObject isNotEqualTo objNull)) then {
	[_crate, _attachedObject] call ace_cargo_fnc_loadItem;
};