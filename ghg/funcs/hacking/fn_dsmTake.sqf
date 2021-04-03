/*======================================
	ghg_fnc_takeDSM
	Called by ghg_fnc_dsmRun on completion
	Author: Quantx
======================================*/
params ["_target", "_caller", "_actionId", "_arguments"];

if ( DSM_DONE ) then
{
	[_target, "removeAllActions", true, true] call BIS_fnc_MP;
	[_target, "hideObject", true, true] call BIS_fnc_MP;
	_str = format ["Player: %1 has taken the DSM for side: %2", name _caller, side _caller];
	_str remoteExec ["systemChat", sideLogic];
	_str2 = format ["Player: %1 has taken the DSM!", name _caller];
	_str2 remoteExec ["systemChat", side _caller]; 
	
}
else
{
	hint "Cannot take the DSM while it's working";
	sleep 3;
	hint "";
};