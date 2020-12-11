/*======================================
		Creates Logi Crate (usArmy)
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["Box_Syndicate_Ammo_F", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;

clearItemCargoGlobal _crate; 
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ACE_elasticBandage", 6]; 
_crate addItemCargoGlobal ["ACE_packingBandage", 6]; 
_crate addItemCargoGlobal ["rhssaf_30rnd_556x45_EPR_G36", 24];
_crate addItemCargoGlobal ["ToolKit", 2];
_crate addItemCargoGlobal ["ACE_Fortify", 2];
_crate addItemCargoGlobal ["MineDetector", 2];
_crate addItemCargoGlobal ["SatchelCharge_Remote_Mag", 2];
_crate addItemCargoGlobal ["rhsusf_m112x4_mag", 2];
_crate addItemCargoGlobal ["rhsusf_m112_mag", 4];
_crate addItemCargoGlobal ["ACE_DefusalKit", 2];
_crate addItemCargoGlobal ["ACE_Clacker", 2];
_crate addItemCargoGlobal ["ACE_M26_Clacker", 1];
_crate addItemCargoGlobal ["rhs_mag_m67", 6]; 
_crate addItemCargoGlobal ["rhs_mag_an_m8hc", 2]; 
_crate addItemCargoGlobal ["rhs_mag_M441_HE", 4]; 
_crate addItemCargoGlobal ["rhs_mag_M585_white", 2]; 
_crate addItemCargoGlobal ["rhs_mag_m661_green", 1]; 
_crate addItemCargoGlobal ["rhs_mag_m662_red", 1]; 
_crate addItemCargoGlobal ["rhs_mag_m713_Red", 1]; 
_crate addItemCargoGlobal ["rhs_mag_m715_Green", 1]; 
_crate addItemCargoGlobal ["rhs_mag_m714_White", 2]; 
_crate addItemCargoGlobal ["ACE_EarPlugs", 2];