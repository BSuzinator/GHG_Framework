(_this select 0) params ["_crateScript"];
(_this select 1) params ["_target", "_player", "_building", "_faction"];

private _pos = _building modelToWorld (_building getVariable ["crate_pos", [0,0,1]]);
private _dir = (getDir _building) + (_building getVariable ["crate_dir", 0]);

if ( _crateScript isEqualTo "ghg_medical_placeholder" ) then
{
	[_pos, _dir] call compile preprocessFileLineNumbers "ghg\loadouts\medical.sqf";
}
else
{
	[_pos, _dir] call compile preprocessFileLineNumbers format ["ghg\loadouts\%1\crates\%2.sqf", _faction, _crateScript];
};