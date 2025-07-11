#include "script_component.hpp"
/*======================================
	ghg_playerMenu_fnc_antistasiSubmenu
	Vehicle Actions for Player Menu
	Author: BSuz
======================================*/
private _subTitles = ["sub","Antistasi Actions","popup","",false];
private _subMenuOptions = [];
private _selfAddMember = ["Self Add Member",FUNC(A3A_selfAddMember),"","",[],-1,true,true];
private _selfAddMember2 = ["Self Add Member 2",FUNC(A3A_selfAddMember),"","",[],-1,true,true];
//private _refuelVehicle = ["Refuel Vehicle",FUNC(refuelVehicle),"","",[],-1,true,true];
//private _rearmVehicle  = ["Rearm Vehicle",FUNC(rearmVehicle),"","",[],-1,true,true];
//private _repairVehicle = ["Repair Vehicle",FUNC(repairVehicle),"","",[],-1,true,true];
//private _initRacks = ["Init Racks",FUNC(initRacks),"","",[],-1,true,true];

_subMenuOptions pushback _selfAddMember;
_subMenuOptions pushback _selfAddMember2;
//Sort and return menu
_subMenuOptions sort true;
[_subTitles, _subMenuOptions]