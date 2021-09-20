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

if (_isAirdrop) then {_modulePos set [2, 200]} else {_modulePos set [2, 1]};

if ( _crateScript isEqualTo "ghg_medical_placeholder" ) then
{
	_crate = [_modulePos, 0] call compile preprocessFileLineNumbers "\x\ghg\addons\loadout\loadouts\medical.sqf";
}
else
{
	_crate = createVehicle ["Box_Syndicate_Ammo_F", _modulePos, [], 0, "CAN_COLLIDE"];
	
	clearItemCargoGlobal _crate;
	clearMagazineCargoGlobal _crate;
	clearWeaponCargoGlobal _crate;
	clearBackpackCargoGlobal _crate;

	_crateContents = call compile preprocessFileLineNumbers format ["\x\ghg\addons\loadout\loadouts\%1\crates\%2.sqf", _faction, _crateScript];

	{
		_crate addItemCargoGlobal _x;
	} foreach _crateContents;

	[_crate, true, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;
	[_crate, true, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;
	[_crate, 1] call ace_cargo_fnc_setSize;
	
};

{
	_curator = _x;
	_curator addCuratorEditableObjects [[_crate], true];
} forEach allCurators;

if (_isAirdrop) then {
	_parachute = createVehicle ["B_Parachute_02_F",_modulePos, [], 0, "FLY"];
	_parachute setPosATL [getPosATL _parachute select 0, getPosATL _parachute select 1, 200];
	_crate attachTo [_parachute,[0,0,0]];
};

if (!(_attachedObject isKindOf "Man") && (_attachedObject isNotEqualTo objNull)) then {
	[_crate, _attachedObject, true] call ace_cargo_fnc_loadItem;
};