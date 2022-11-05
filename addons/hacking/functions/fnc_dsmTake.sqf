#include "script_component.hpp"
/*======================================
	ghg_hacking_fnc_dsmTake
	Called by ghg_hacking_fnc_dsmTake on completion
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionParams"];
diag_Log "[GHG]: Hacking: DSM Take Called";
_actionParams params ["_hostObject"];



_hostObject setVariable ["ghg_hacking_hackStage", 3, true];

_caller addItemToVest "GHG_FlashDisk";

[_target, true] remoteExecCall ["hideObjectGlobal", 2];
(format ["Player: %1 has taken the DSM for side: %2", name _caller, side _caller]) remoteExecCall ["systemChat", sideLogic];
(format ["Player: %1 has taken the DSM!", name _caller]) remoteExecCall ["systemChat", side _caller];


if (GVARMAIN(is_training)) then {
    _hostObject setVariable ["ghg_hacking_hackStage", 0, true];
};
