/* !!! WARNING WARNING WARNING !!!

THIS FILE SHOULD NOT BE PREPED BY CBA
IT IS A SPECIAL CASE AND IS REFERENCED BY CfgFunctions

!!! WARNING WARNING WARNING !!! */

params ["_vehicle", "_class"];

if !(hasInterface) exitWith {};

private _dist = 200;

if ( _vehicle isKindOf "Air" ) then {
    _dist = 350;
};
if ( _vehicle isKindOf "CAManBase" ) then {
    _dist = 50;
};

private _obj = _vehicle say3D [_class, _dist, 1, 2];
_vehicle setVariable ["vn_music_player", _obj];