/*======================================
	ghg_fnc_takeDSM
	Called by ghg_fnc_dsmRun on completion
	Author: Quantx
======================================*/

_object = _this select 0;
_caller = _this select 1;
_id = _this select 2;

if ( DSM_DONE ) then
{
	[_object, "removeAllActions", true, true] call BIS_fnc_MP;
	[_object, "hideObject", true, true] call BIS_fnc_MP;
}
else
{
	hint "Cannot take the DSM while it's working";
	sleep 3;
	hint "";
};