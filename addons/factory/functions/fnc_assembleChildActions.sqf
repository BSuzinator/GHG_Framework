#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_assembleChildActions
	Sets event handlers for tracking statistics
	Author: BSuz
======================================*/
params ["_aceParams",_"_vehicleGroup"];
_aceParams params ["_target","_player","_actionParams"];

private _factionLoadout = side _player call EFUNC(gear,getFactionLoadout);

//GET ALL POSSIBLE VEHICLES
private _vehConfig = (_factionLoadout >> "Vehicles")

//Infantry
private _carEntry = getArray (_vehConfig >> "car");
private _troopTruckEntry = getArray (_vehConfig >> "troopTruck");
private _mrapEntry = getArray (_vehConfig >> "mrap");

//Logi
private _bridgeTrucksEntry = getArray (_vehConfig >> "bridgeTrucks");
private _cargoTrucksEntry = getArray (_vehConfig >> "cargoTrucks");
private _rearmEntry = getArray (_vehConfig >> "rearm");
private _refuelEntry = getArray (_vehConfig >> "refuel");
private _repairEntry = getArray (_vehConfig >> "repair");

//Lynx/Wolf
private _apcEntry = getArray (_vehConfig >> "apc");
private _ifvEntry = getArray (_vehConfig >> "ifv");
private _tankEntry = getArray (_vehConfig >> "tank");

//RAVN/FLCN
private _heli_unarmedEntry = getArray (_vehConfig >> "heli_unarmed");
private _heli_armedEntry = getArray (_vehConfig >> "heli_armed");

//RPTR
private _planeEntry = getArray (_vehConfig >> "plane");

//KNFS
private _boat_unarmedEntry = getArray (_vehConfig >> "boat_unarmed");
private _boat_armedEntry = getArray (_vehConfig >> "boat_armed");

//Switch between which category we're in
private _neededEntries = switch (_vehicleGroup) do {
	case "infantry": { [ _carEntry, _troopTruckEntry, _mrapEntry] };
	
	case "logi": { [ _bridgeTrucksEntry, _cargoTrucksEntry, _rearmEntry, _refuelEntry, _repairEntry] };
	
	case "armor": { [ _apcEntry, _ifvEntry, _tankEntry] };
	
	case "heli": { [ _heli_unarmedEntry, _heli_armedEntry] };
	
	case "plane": { [_planeEntry] };
	
	case "boat": { [ _boat_unarmedEntry, _boat_armedEntry] };
	
	default {[]};
};

// Add children to this action
private _actions = [];

{
	_vehList = _x;
	
	{

		//needs _vehClass
		private _actionString = format ["factory_action_%1",_vehClass];
		private _actionName = format ["%1",getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];

		private _action = [_actionString, _actionName, "", FUNC(spawnVehicle), {true}, {}, _vehClass] call ace_interact_menu_fnc_createAction;
		_actions pushBack [_action,[],_target]; // New action, it's children, and the action's target

	} forEach (_vehList);

} forEach [];


_actions