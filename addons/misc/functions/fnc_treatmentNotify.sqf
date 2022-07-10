#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_treatmentNotify
	Notifies patient of treatments beginning and by who
	Author: BSuz
======================================*/
if (!hasInterface) exitWith {};
if (isNil QGVAR(ghg_misc_fnc_treatmentNotifyEHID) && hasInterface) then {
	[QGVAR(ghg_treatmentNotifyEvent), {
		params ["_caller","_className","_selectionName"];
		//_debugMSG = format ["%1\n%2\n%3\n%4\n%5\n%6\n",_caller,_target,_selectionName,_className,_itemUser,_usedItem];
		_treatmentMSG = format ["%1 has started treatment %2 on your %3.",name _caller,_className,_selectionName];
		
		[_treatmentMSG, 1, [0.11, 0.541, 1, 1]] call CBA_fnc_notify;
		systemChat _treatmentMSG;
	
	}] call CBA_fnc_addEventHandler;
	
	GVAR(ghg_treatmentNotifyEHID) = ["ace_treatmentStarted", {
		params ["_caller", "_target", "_selectionName", "_className", "_itemUser", "_usedItem"];
		
        // Only notify players who are alive
        if (alive _target) then {
            [QGVAR(ghg_treatmentNotifyEvent), [_caller,_className,_selectionName], _target] call CBA_fnc_targetEvent;
        };
	}] call CBA_fnc_addEventHandler;
	//GVAR(ghg_treatmentNotifyEHID) = _ehid;
};