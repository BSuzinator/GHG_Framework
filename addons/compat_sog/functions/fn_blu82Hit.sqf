/*======================================
	This overwrites an SOG VN function
    "_this" will contain a vector indicating the position of the blast
    vn_bomb_15000_blu82_dc_ammo
======================================*/

//systemChat "BOOM!";
diag_log "BLU-82 HAS DETONATED";

private _dist = 40;
// Make sure it will be above the ground
private _pos = _this vectorAdd [0,0,1];

private _mapObjs = nearestTerrainObjects [_pos, ["TREE","SMALL TREE","BUSH","HIDE"], _dist * 2, false, true];

{
    // Although this is run locally it needs to be global for JIP players
    if !(isObjectHidden _x) then {
        if ( (_pos distance2D _x) > _dist ) then
        {
            [_x, 1] remoteExec ["setDamage", 2];
        }
        else
        {
            [_x, true] remoteExec ["hideObjectGlobal",2];
            [_x, false] remoteExec ["enableSimulationGlobal",2];
        };
    };
} foreach _mapObjs;

private _objs = nearestObjects [_pos, [], _dist * 2, true];

{
    if !(isObjectHidden _x) then {
        if ( (_pos distance2D _x) > _dist ) then
        {
            _x setDamage 1;
        }
        else
        {
            deleteVehicle _x;
        };
    };
} forEach _objs;

// Create the crater locally
private _crater = "Land_vn_crater_decal_02" createVehicleLocal _pos;
_crater setPosATL _pos;

true // Must be last