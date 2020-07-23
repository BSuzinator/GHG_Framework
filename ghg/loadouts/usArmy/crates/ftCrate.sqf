/*======================================
		Creates FireTeam Crate and
		loads into vehicle it was
		called from (usArmy)
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;

clearItemCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ACE_elasticBandage", 8]; 
_crate addItemCargoGlobal ["ACE_packingBandage", 8]; 
_crate addItemCargoGlobal ["rhs_mag_30Rnd_556x45_M855A1_Stanag", 66]; 
_crate addItemCargoGlobal ["rhs_mag_m67", 12]; 
_crate addItemCargoGlobal ["rhs_mag_an_m8hc", 8]; 
_crate addItemCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch", 5]; 
_crate addItemCargoGlobal ["rhs_weap_M136", 2]; 
_crate addItemCargoGlobal ["rhs_m136_mag", 2]; 
_crate addItemCargoGlobal ["rhs_mag_M441_HE", 8]; 
_crate addItemCargoGlobal ["rhs_mag_M585_white", 4]; 
_crate addItemCargoGlobal ["rhs_mag_m661_green", 2]; 
_crate addItemCargoGlobal ["rhs_mag_m662_red", 2]; 
_crate addItemCargoGlobal ["rhs_mag_m713_Red", 2]; 
_crate addItemCargoGlobal ["rhs_mag_m715_Green", 2]; 
_crate addItemCargoGlobal ["rhs_mag_m714_White", 4]; 
_crate addItemCargoGlobal ["ACE_EarPlugs", 8];