#include "script_component.hpp"
/*======================================
	Initialize event handlers for a new Zeus interface
	Author: Quantx
======================================*/
params ["_logic", "_unit"];

_logic addEventHandler [ "curatorFeedbackMessage", bis_fnc_showCuratorFeedbackMessage ];
_logic addEventHandler [ "curatorPinged",          bis_fnc_curatorPinged ];
_logic addEventHandler [ "curatorObjectPlaced",    bis_fnc_curatorObjectPlaced ];
_logic addEventHandler [ "curatorObjectEdited",    bis_fnc_curatorObjectEdited ];
_logic addEventHandler [ "curatorWaypointPlaced",  bis_fnc_curatorWaypointPlaced ];

private _attrib = { (_this # 1) call bis_fnc_showCuratorAttributes; };
_logic addEventHandler ["curatorObjectDoubleClicked",   _attrib];
_logic addEventHandler ["curatorGroupDoubleClicked",    _attrib];
_logic addEventHandler ["curatorWaypointDoubleClicked", _attrib];
_logic addEventHandler ["curatorMarkerDoubleClicked",   _attrib];

_logic addEventHandler ["curatorObjectPlaced", {
    params ["_logic", "_unit"];
    
    clearItemCargoGlobal _unit;
    clearMagazineCargoGlobal _unit;
    clearWeaponCargoGlobal _unit;
    clearBackpackCargoGlobal _unit;
	
	if (typeOf _unit in ["B_CTRG_Miller_F","I_G_Story_SF_Captain_F","B_Story_SF_Captain_F"]) {
		deleteVehicle _unit;
		systemChat "No Traitors allowed.";
	};
}];

[ _logic, "curatorUnitAssigned", [ _logic, _unit ] ] call BIS_fnc_callScriptedEventHandler;