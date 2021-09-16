/*======================================
	ghg_fnc_readyUpNotify
	Notifies how long since mission start
	Author: Quantx
======================================*/
if ( !hasInterface ) exitWith {};

while { !(SAFE_MODE_READY_BLU && SAFE_MODE_READY_OPF && SAFE_MODE_READY_IND) } do
{
	sleep 60;
    if ( !(SAFE_MODE_READY_BLU && SAFE_MODE_READY_OPF && SAFE_MODE_READY_IND) ) then
	{
		systemChat format["It has been %1 minutes since mission start, weapons are cold.", floor (time / 60)];
	};
};