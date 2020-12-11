/*======================================
		Creates HAT ammo Crate and
		loads into vehicle it was
		called from (serbian)
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;
[_crate, 1] call ace_cargo_fnc_setSize;
clearItemCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ace_compat_rhs_afrf3_mag_9M131M", 8];