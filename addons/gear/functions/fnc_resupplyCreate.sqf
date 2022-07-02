#include "script_component.hpp"
/*======================================
	ghg_fnc_resupplyCreate
	Spawns selected resupply crate
	Author: Quantx, BSuzinator
======================================*/
params ["_cfg", "_pos", "_dir"];

private _crateClass = getText (_cfg >> "classname");
private _crate = createVehicle [_crateClass, _pos, [], 0, "CAN_COLLIDE"];

if ( isNull _crate ) exitWith {
    systemChat "Failed to spawn crate";
    _crate;
};

_crate setDir _dir;
clearItemCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

// Five seconds of immortality
_crate allowDamage false;
_crate spawn {
    sleep 5;
    _this allowDamage true;
};

{
    private _itemName = configName _x;
    private _itemCount = getNumber _x;
    
    if ( _itemCount > 0 ) then
    {
        if ( _itemName isKindOf "Bag_Base" ) then
        {
            _crate addBackPackCargoGlobal [_itemName, _itemCount];
        }
        else
        {
            _crate addItemCargoGlobal [_itemName, _itemCount];
        };
    };
} forEach configProperties [_cfg >> "items", "true", true];

private _crateName = getText (_cfg >> "displayname");
if ( _crateName != "" ) then { _crate setVariable["ace_cargo_customname", _crateName, true] };

private _crateSize = getNumber (_cfg >> "cargosize");
if ( _crateSize > -2 ) then { [_crate, _crateSize] call ace_cargo_fnc_setSize };

private _fuelSize = getNumber (_cfg >> "fuelsize");
if ( _fuelSize >= 0 ) then { [_crate, _fuelSize] remoteExecCall ["ace_refuel_fnc_makeSource", 2] };

private _crateBuildSupplies = getNumber (_cfg >> "buildSupplies");
if ( _crateBuildSupplies isNotEqualTo 0 ) then { 
	_crate setVariable["ghg_cargo_buildSupplies", _crateBuildSupplies, true];
	private _action = ["ghg_deliverSupplies","Deliver Supplies","",FUNC(addSupplyBudget),{true}] call ace_interact_menu_fnc_createAction;
	[_crate, 0, ["ACE_MainActions"], _action] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,_crate];
};

[_crate, (getNumber (_cfg >> "draggable")) != 0, [0, 2, 0], 0] call ace_dragging_fnc_setDraggable;

[_crate, (getNumber (_cfg >> "carryable")) != 0, [0, 2, 1], 0] call ace_dragging_fnc_setCarryable;

_crate setVariable ["ACE_Name", _crateName, true];
_crate setVariable ["ACE_NameRaw", _crateClass, true];

["addCrateList", _crate] call CBA_fnc_serverEvent;

["addZeusObject", _crate] call CBA_fnc_serverEvent;

_crate;