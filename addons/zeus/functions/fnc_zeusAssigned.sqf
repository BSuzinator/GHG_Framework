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
	
	if ((_unit isKindOf "AllVehicles") && !(_unit isKindOf "Man")) then {
	[_unit, "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((_unit isKindOf "AllVehicles") && !(_unit isKindOf "Man")) then {[_unit] call FUNC(ejectOnDeath);};
	}] remoteExec ["CBA_fnc_addBISEventHandler",0,true];
	};
}];

[ _logic, "curatorUnitAssigned", [ _logic, _unit ] ] call BIS_fnc_callScriptedEventHandler;