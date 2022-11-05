#include "script_component.hpp"
/*======================================
	ghg_hacking_fnc_dsmTake
	Called by ghg_hacking_fnc_dsmTake on completion
	Author: Quantx
======================================*/
diag_Log "[GHG]: Hacking: Start Of DSM Take";
params ["_target", "_player", "_actionParams"];
diag_Log "[GHG]: Hacking: DSM Take Called" + (str _this);
_actionParams params ["_hostObject"];



_hostObject setVariable ["ghg_hacking_hackStage", 3, true];

_player addItemToVest "GHG_FlashDisk";

[_target, true] remoteExecCall ["hideObjectGlobal", 2];
(format ["Player: %1 has taken the DSM for side: %2", name _player, side _player]) remoteExecCall ["systemChat", sideLogic];
(format ["Player: %1 has taken the DSM!", name _player]) remoteExecCall ["systemChat", side _player];


if (GVARMAIN(is_training)) then {
    _hostObject setVariable ["ghg_hacking_hackStage", 0, true];
};
diag_Log "[GHG]: Hacking: End Of DSM Take";