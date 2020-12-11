/*======================================
		Creates HAT launcher Crate and
		loads into vehicle it was
		called from (usArmy)
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;
[_crate, 1] call ace_cargo_fnc_setSize;
clearItemCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ace_csw_m220CarryTripod", 1]; 
_crate addItemCargoGlobal ["ace_compat_rhs_usf3_tow_carry", 1];