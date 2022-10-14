#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_initFactories
	
	Author: BSuz
======================================*/
params [ ["_unit", player, [objNull]] ];

systemChat str [_unit,_factionLoadout];

private _fnc_camoCorrect = {
	params["_fullArray"];
	private _correctedArray = [];
	{
		_correctedArray pushback _fullArray # _forEachIndex # _camoId;
	
	} forEach _fullArray;
	_correctedArray
};

private _fnc_assembleChildActions = {
	params["_vehicleList"];
	private _actions = [];
	{
		private _vehClass = _x;
		private _actionString = format ["factory_action_%1",_vehClass];
		private _actionName = format ["%1",getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];

		private _action = [_actionString, _actionName, "", FUNC(spawnVehicle), {true}, {}, _vehClass] call ace_interact_menu_fnc_createAction;
		_actions pushBack [_action,[],_target]; // New action, it's children, and the action's target	
		
	} forEach _vehicleList;
	_actions
};


private _factionLoadout = side _player call EFUNC(gear,getFactionLoadout);

//GET ALL POSSIBLE VEHICLES
private _vehConfig = (_factionLoadout >> "Vehicles");

//Infantry
private _carEntry = getArray (_vehConfig >> "car");
private _troopTruckEntry = getArray (_vehConfig >> "troopTruck");
private _mrapEntry = getArray (_vehConfig >> "mrap");

private _carList = _carEntry call _fnc_camoCorrect;
private _troopTruckList = _troopTruckEntry call _fnc_camoCorrect;
private _mrapList = _mrapEntry call _fnc_camoCorrect;

private _carActionList = _carList call _fnc_assembleChildActions;
private _troopTruckActionList = _troopTruckList call _fnc_assembleChildActions;
private _mrapActionList = _mrapList call _fnc_assembleChildActions;


//Logi
private _bridgeTrucksEntry = getArray (_vehConfig >> "bridgeTrucks");
private _cargoTrucksEntry = getArray (_vehConfig >> "cargoTrucks");
private _rearmEntry = getArray (_vehConfig >> "rearm");
private _refuelEntry = getArray (_vehConfig >> "refuel");
private _repairEntry = getArray (_vehConfig >> "repair");

private _bridgeTrucksList = _bridgeTrucksEntry call _fnc_camoCorrect;
private _cargoTrucksList = _cargoTrucksEntry call _fnc_camoCorrect;
private _rearmList = _rearmEntry call _fnc_camoCorrect;
private _refuelList = _refuelEntry call _fnc_camoCorrect;
private _repairList = _repairEntry call _fnc_camoCorrect;

private _bridgeTrucksActionList = _bridgeTrucksList call _fnc_assembleChildActions;
private _cargoTrucksActionList = _cargoTrucksList call _fnc_assembleChildActions;
private _rearmActionList = _rearmList call _fnc_assembleChildActions;
private _refuelActionList = _refuelList call _fnc_assembleChildActions;
private _repairActionList = _repairList call _fnc_assembleChildActions;


//Lynx/Wolf
private _apcEntry = getArray (_vehConfig >> "apc");
private _ifvEntry = getArray (_vehConfig >> "ifv");
private _tankEntry = getArray (_vehConfig >> "tank");

private _apcList = _apcEntry call _fnc_camoCorrect;
private _ifvList = _ifvEntry call _fnc_camoCorrect;
private _tankList = _tankEntry call _fnc_camoCorrect;

private _apcActionList = _apcList call _fnc_assembleChildActions;
private _ifvActionList = _ifvList call _fnc_assembleChildActions;
private _tankActionList = _tankList call _fnc_assembleChildActions;


//RAVN/FLCN
private _heli_unarmedEntry = getArray (_vehConfig >> "heli_unarmed");
private _heli_armedEntry = getArray (_vehConfig >> "heli_armed");

private _heli_unarmedList = _heli_unarmedEntry call _fnc_camoCorrect;
private _heli_armedList = _heli_armedEntry call _fnc_camoCorrect;

private _heli_unarmedActionList = _heli_unarmedList call _fnc_assembleChildActions;
private _heli_armedActionList = _heli_armedList call _fnc_assembleChildActions;


//RPTR
private _planeEntry = getArray (_vehConfig >> "plane");

private _planeList = _planeEntry call _fnc_camoCorrect;

private _planeActionList = _planeList call _fnc_assembleChildActions;


//KNFS
private _boat_unarmedEntry = getArray (_vehConfig >> "boat_unarmed");
private _boat_armedEntry = getArray (_vehConfig >> "boat_armed");

private _boat_unarmedList = _boat_unarmedEntry call _fnc_camoCorrect;
private _boat_armedList = _boat_armedEntry call _fnc_camoCorrect;

private _boat_unarmedActionList = _boat_unarmedList call _fnc_assembleChildActions;
private _boat_armedActionList = _boat_armedList call _fnc_assembleChildActions;


//Add Action Variables to all factories
private _allFactories = allMissionObjects "GHG_Vehicle_Factory";


{
	private _factory = _x;
	
	_factory setVariable ["ghg_factory_carActionList", _carActionList, false];
	_factory setVariable ["ghg_factory_troopTruckActionList", _troopTruckActionList, false];
	_factory setVariable ["ghg_factory_mrapActionList", _mrapActionList, false];
	
	_factory setVariable ["ghg_factory_bridgeTrucksActionList", _bridgeTrucksActionList, false];
	_factory setVariable ["ghg_factory_cargoTrucksActionList", _cargoTrucksActionList, false];
	_factory setVariable ["ghg_factory_rearmActionList", _rearmActionList, false];
	_factory setVariable ["ghg_factory_refuelActionList", _refuelActionList, false];
	_factory setVariable ["ghg_factory_repairActionList", _repairActionList, false];
	
	_factory setVariable ["ghg_factory_apcActionList", _apcActionList, false];
	_factory setVariable ["ghg_factory_ifvActionList", _ifvActionList, false];
	_factory setVariable ["ghg_factory_tankActionList", _tankActionList, false];
	
	_factory setVariable ["ghg_factory_heli_unarmedActionList", _heli_unarmedActionList, false];
	_factory setVariable ["ghg_factory_heli_armedActionList", _heli_armedActionList, false];
	
	_factory setVariable ["ghg_factory_planeActionList", _planeActionList, false];
	
	_factory setVariable ["ghg_factory_boat_unarmedActionList", _boat_unarmedActionList, false];
	_factory setVariable ["ghg_factory_boat_armedActionList", _boat_armedActionList, false];

}forEach _allFactories;

["GHG_Vehicle_Factory"] call ACE_interact_menu_fnc_compileMenu;
diag_log "[GHG]: Vehicle Factory Actions compiled"