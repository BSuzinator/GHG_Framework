#include "script_component.hpp"
/*======================================
	ghg_fnc_addMinesToZeus
	Converts and replaces 3den placed mines to zeus compatible ones
	Author: BSuz
======================================*/

if ( !isServer ) exitWith {};

{
	_mine = _x;
	_mineType = typeOf _mine;
	_minePos = getPosATL _mine;
	_mineDir = getDir _mine;
	_newMine = objNull;
	_minePos set [2,0];
	
	switch (_mineType) do {
		//ACE IED Large Dug In Pressure Plate
		case "ACE_IEDLandBig_Range_Ammo": {	
			_newMine = createVehicle ["ACE_ModuleExplosive_IEDLandBig_Range", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//IED Large Dug In
		case "IEDLandBig_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_IEDLandBig_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//ACE IED Small Dug In Pressure Plate
		case "ACE_IEDLandSmall_Range_Ammo": {
			_newMine = createVehicle ["ACE_ModuleExplosive_IEDLandSmall_Range", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//IED Small Dug In
		case "IEDLandSmall_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_IEDLandSmall_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//ACE IED Large Urban Pressure Plate
		case "ACE_IEDUrbanBig_Range_Ammo": {	
			_newMine = createVehicle ["ACE_ModuleExplosive_IEDUrbanBig_Range", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//IED Large Urban
		case "IEDUrbanBig_Remote_Ammo": {	
			_newMine = createVehicle ["ModuleExplosive_IEDUrbanBig_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//ACE IED Small Urban Pressure Plate
		case "ACE_IEDUrbanSmall_Range_Ammo": {
			_newMine = createVehicle ["ACE_ModuleExplosive_IEDUrbanSmall_Range", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//IED Small Urban
		case "IEDUrbanSmall_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_IEDUrbanSmall_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//AAF UXO Common
		case "BombCluster_03_UXO1_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_03_UXO1_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//AAF UXO Delayed
		case "BombCluster_03_UXO4_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_03_UXO4_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//AAF UXO Sensitive
		case "BombCluster_03_UXO2_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_03_UXO2_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//AAF UXO Tough
		case "BombCluster_03_UXO3_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_03_UXO3_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//CSAT UXO Common
		case "BombCluster_02_UXO1_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_02_UXO1_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//CSAT UXO Delayed
		case "BombCluster_02_UXO4_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_02_UXO4_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//CSAT UXO Sensitive
		case "BombCluster_02_UXO2_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_02_UXO2_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//CSAT UXO Tough
		case "BombCluster_02_UXO3_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_02_UXO3_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//NATO UXO Common
		case "BombCluster_01_UXO1_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_01_UXO1_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//NATO UXO Delayed
		case "BombCluster_01_UXO4_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_01_UXO4_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//NATO UXO Sensitive
		case "BombCluster_01_UXO2_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_01_UXO2_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//NATO UXO Tough
		case "BombCluster_01_UXO3_Ammo_F": {
			_newMine = createVehicle ["ModuleBombCluster_01_UXO3_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS UXO PTAB-1M (Common)
		case "rhs_ammo_uxo_ptab1m_1": {
			_newMine = createVehicle ["rhs_uxo_ptab1m_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS UXO PTAB-2.5KO (Sensitive)
		case "rhs_ammo_uxo_ptab25ko_2": {
			_newMine = createVehicle ["rhs_uxo_ptab25ko_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS UXO PTAB-2.5KO (Common)
		case "rhs_ammo_uxo_ptab25ko_1": {
			_newMine = createVehicle ["rhs_uxo_ptab25ko_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS UXO PTAB-2.5M (Common)
		case "rhs_ammo_uxo_ptab25m_1": {
			_newMine = createVehicle ["rhs_uxo_ptab25m_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS UXO PTAB-2.5M (Sensitive)
		case "rhs_ammo_uxo_ptab25m_2": {
			_newMine = createVehicle ["rhs_uxo_ptab25m_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS M2A3B APB Mine
		case "rhs_mine_m2a3b_press_ammo": {
			_newMine = createVehicle ["rhs_mine_m2a3b_press_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS M2A3B (Tripwire) APB Mine
		case "rhs_mine_m2a3b_trip_ammo": {
			_newMine = createVehicle ["rhs_mine_m2a3b_trip_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//RHS MRUD (6m)
		case "rhssaf_mine_mrud_b_ammo": {
			_newMine = createVehicle ["rhssaf_mine_mrud_b_module", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//AT Mine
		case "ATMine_Range_Ammo": {
			_newMine = createVehicle ["ModuleMine_ATMine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//APERS Tripwire Mine
		case "APERSTripMine_Wire_Ammo": {
			_newMine = createVehicle ["ModuleMine_APERSTripMine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//APERS Mine
		case "APERSMine_Range_Ammo": {
			_newMine = createVehicle ["ModuleMine_APERSMine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//APERS Bounding Mine
		case "APERSBoundingMine_Range_Ammo": {
			_newMine = createVehicle ["ModuleMine_APERSBoundingMine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//SLAM Side Attack Mine
		case "SLAMDirectionalMine_Wire_Ammo": {
			_newMine = createVehicle ["ModuleMine_SLAMDirectionalMine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//SLAM Bottom Attack Mine
		case "ACE_SLAMDirectionalMine_Magnetic_Ammo": {
			_newMine = createVehicle ["ACE_ModuleMine_SLAMBottomMine", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//APERS Mine Dispenser Mine
		case "APERSMineDispenser_Mine_Ammo_Scripted": {
			_newMine = createVehicle ["ModuleAPERSMineDispenser_Mine_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//APERS Mine Dispenser
		case "APERSMineDispenser_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_APERSMineDispenser_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//Explosive Charge
		case "DemoCharge_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_DemoCharge_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//Claymore
		case "ClaymoreDirectionalMine_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_Claymore_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		//Satchel Charge
		case "SatchelCharge_Remote_Ammo": {
			_newMine = createVehicle ["ModuleExplosive_SatchelCharge_F", _minePos, [], 0, "CAN_COLLIDE"];
			_newMine setDir _mineDir;
			deleteVehicle _mine;
		};
		default {};
	};
	_newMine setVectorUp surfaceNormal position _newMine;
	{
	_curator = _x;
	_curator addCuratorEditableObjects [[_newMine], true];
	} forEach allCurators;
} foreach allMines;

_allModules = [];
{
_object = _x;
_condition = ["module", typeOf _object, false] call BIS_fnc_inString;
if (_condition) then {
	{
		_x addCuratorEditableObjects [[_object], true];
	} forEach allCurators;
	_allModules pushback _object;
};
} forEach allMissionObjects "";
missionNameSpace setVariable ["ghg_mission_modules",_allModules,true];