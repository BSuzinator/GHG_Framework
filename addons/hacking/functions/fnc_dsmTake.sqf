#include "script_component.hpp"
/*======================================
	ghg_fnc_takeDSM
	Called by ghg_fnc_dsmRun on completion
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionId", "_arguments"];

if ( _target getVariable [QGVAR(dsm_done), false] ) then
{
	_target remoteExecCall ["removeAllActions", 0];
    [_target, true] remoteExecCall ["hideObjectGlobal", 2];
	(format ["Player: %1 has taken the DSM for side: %2", name _caller, side _caller]) remoteExecCall ["systemChat", sideLogic];
	(format ["Player: %1 has taken the DSM!", name _caller]) remoteExecCall ["systemChat", side _caller];
}
else
{
	hint "Cannot take the DSM while it's working";
	sleep 3;
	hint "";
};

if (GVARMAIN(is_training)) then {
    DSM_Host addAction ["Setup DSM", FUNC(dsmPlant)];
};