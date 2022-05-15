#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_zeusSpawnResupplyCrate
	Function to spawn resupply crate from Zeus Module
	Author: BSuz
======================================*/
(_this select 0) params ["_cfg"];
(_this select 1) params ["_modulePos", "_attachedObject", "_isAirdrop"];
private _crate = [_cfg, _modulePos, 0] call FUNC(resupplyCreate);
if (isNull _crate) exitWith {};
_crate setPosASL _modulePos;

if (_isAirdrop) exitWith {
    private _parachute = createVehicle ["B_Parachute_02_F", _modulePos, [], 0, "FLY"];
    private _parachutePos = getPosATL _parachute;
    _parachutePos set [2, 200];
    _parachute setPosATL _parachutePos;
    _crate attachTo [_parachute, [0,0,0]];
};

if ( (!isNull _attachedObject) && {!(_attachedObject isKindOf "Man")} ) then {
    private _didLoad = [_crate, _attachedObject, true] call ace_cargo_fnc_loadItem;
    if !(_didLoad) then {
        deleteVehicle _crate;
        systemChat "Failed to load crate";
    };
};