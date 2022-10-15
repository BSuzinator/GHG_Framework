#include "script_component.hpp"
/*======================================
	ghg_factory_fnc_initFactories
	
	Author: BSuz
======================================*/
params [ ["_unit", player, [objNull]] ];
private _unitSide = side _unit;

["GHG_Vehicle_Factory"] call ACE_interact_menu_fnc_compileMenu;

//Get all Faction and camo info
private _ghg = missionConfigFile >> "CfgGHG";
private _factionLoadout = (_unitSide) call EFUNC(gear,getFactionLoadout);
private _camo = getText( _ghg >> (switch (_unitSide) do {
    case west: {"bluCamo"};
    case east: {"opfCamo"};
    case resistance: {"indCamo"};
    default {""};
}));
private _camoId = 0;
if ( _camo != "" ) then
{
    _camoId = -1;

    {
        // Case insensitive check
        if ( _camo == _x ) exitWith { _camoId = _forEachIndex; };
    } forEach getArray( _factionLoadout >> "camo" );

    if ( _camoId < 0 ) then
    {
        _camoId = 0;
        //systemChat format ["Unknown camo '%1' for faction '%2', using default camo instead!", _camo, _faction ];
    };
};

private _diagSTR = "[GHG]: Vehicle Factory: " + str [_unit,_factionLoadout, _camo, _camoId];
diag_log _diagSTR;

private _fnc_camoCorrect = {
	params["_fullArray"];
	private _correctedArray = [];
	//systemChat str _fullArray;
	{
		private _vehicleWithCamosArray = _x;
		//systemChat str [_vehicleWithCamosArray,_camoId];
		_correctedArray pushBack (_vehicleWithCamosArray select _camoId);
	
	} forEach _fullArray;
	//systemChat str _correctedArray;
	_correctedArray
};

private _fnc_assembleChildActions = {
	params["_vehicleList", "_factory"];
	private _actions = [];
	//systemChat str _vehicleList;
	{
		private _vehClass = _x;
		private _actionString = format ["factory_action_%1",_vehClass];
		private _actionName = format ["%1",getText (configFile >> "CfgVehicles" >> _vehClass >> "displayName")];

		private _action = [_actionString, _actionName, "", FUNC(spawnVehicle), {true}, {}, _vehClass] call ace_interact_menu_fnc_createAction;
		_actions pushBack [_action,[],_factory]; // New action, it's children, and the action's target	
		
	} forEach _vehicleList;
	//systemChat str _actions;
	_actions
};

//GET ALL POSSIBLE VEHICLES
private _vehConfig = (_factionLoadout >> "Vehicles");

//Infantry
private _carEntry = getArray (_vehConfig >> "car");
private _troopTruckEntry = getArray (_vehConfig >> "troopTruck");
private _mrapEntry = getArray (_vehConfig >> "mrap");

private _carList = [_carEntry] call _fnc_camoCorrect;
private _troopTruckList = [_troopTruckEntry] call _fnc_camoCorrect;
private _mrapList = [_mrapEntry] call _fnc_camoCorrect;


//Logi
private _bridgeTrucksEntry = getArray (_vehConfig >> "bridgeTrucks");
private _cargoTrucksEntry = getArray (_vehConfig >> "cargoTrucks");
private _rearmEntry = getArray (_vehConfig >> "rearm");
private _refuelEntry = getArray (_vehConfig >> "refuel");
private _repairEntry = getArray (_vehConfig >> "repair");

private _bridgeTrucksList = [_bridgeTrucksEntry] call _fnc_camoCorrect;
private _cargoTrucksList = [_cargoTrucksEntry] call _fnc_camoCorrect;
private _rearmList = [_rearmEntry] call _fnc_camoCorrect;
private _refuelList = [_refuelEntry] call _fnc_camoCorrect;
private _repairList = [_repairEntry] call _fnc_camoCorrect;


//Lynx/Wolf
private _apcEntry = getArray (_vehConfig >> "apc");
private _ifvEntry = getArray (_vehConfig >> "ifv");
private _tankEntry = getArray (_vehConfig >> "tank");

private _apcList = [_apcEntry] call _fnc_camoCorrect;
private _ifvList = [_ifvEntry] call _fnc_camoCorrect;
private _tankList = [_tankEntry] call _fnc_camoCorrect;


//RAVN/FLCN
private _heli_unarmedEntry = getArray (_vehConfig >> "heli_unarmed");
private _heli_armedEntry = getArray (_vehConfig >> "heli_armed");

private _heli_unarmedList = [_heli_unarmedEntry] call _fnc_camoCorrect;
private _heli_armedList = [_heli_armedEntry] call _fnc_camoCorrect;


//RPTR
private _planeEntry = getArray (_vehConfig >> "plane");

private _planeList = [_planeEntry] call _fnc_camoCorrect;


//KNFS
private _boat_unarmedEntry = getArray (_vehConfig >> "boat_unarmed");
private _boat_armedEntry = getArray (_vehConfig >> "boat_armed");

private _boat_unarmedList = [_boat_unarmedEntry] call _fnc_camoCorrect;
private _boat_armedList = [_boat_armedEntry] call _fnc_camoCorrect;


//Add Action Variables to all factories
private _allFactories = allMissionObjects "GHG_Vehicle_Factory";
//systemChat str _allFactories;

{
	private _factory = _x;
	
	private _carActionList = [_carList,_factory] call _fnc_assembleChildActions;
	private _troopTruckActionList = [_troopTruckList,_factory] call _fnc_assembleChildActions;
	private _mrapActionList = [_mrapList,_factory] call _fnc_assembleChildActions;
	
	private _bridgeTrucksActionList = [_bridgeTrucksList,_factory] call _fnc_assembleChildActions;
	private _cargoTrucksActionList = [_cargoTrucksList,_factory] call _fnc_assembleChildActions;
	private _rearmActionList = [_rearmList,_factory] call _fnc_assembleChildActions;
	private _refuelActionList = [_refuelList,_factory] call _fnc_assembleChildActions;
	private _repairActionList = [_repairList,_factory] call _fnc_assembleChildActions;
	
	private _apcActionList = [_apcList,_factory] call _fnc_assembleChildActions;
	private _ifvActionList = [_ifvList,_factory] call _fnc_assembleChildActions;
	private _tankActionList = [_tankList,_factory] call _fnc_assembleChildActions;
	
	private _heli_unarmedActionList = [_heli_unarmedList,_factory] call _fnc_assembleChildActions;
	private _heli_armedActionList = [_heli_armedList,_factory] call _fnc_assembleChildActions;
	
	private _planeActionList = [_planeList,_factory] call _fnc_assembleChildActions;
	
	private _boat_unarmedActionList = [_boat_unarmedList,_factory] call _fnc_assembleChildActions;
	private _boat_armedActionList = [_boat_armedList,_factory] call _fnc_assembleChildActions;	
	
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


diag_log "[GHG]: Vehicle Factory Actions compiled"