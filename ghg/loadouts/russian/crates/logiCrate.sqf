/*======================================
		Creates Logi Crate (russian)
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
_crate addItemCargoGlobal ["rhs_30Rnd_545x39_7N10_AK", 24];
_crate addItemCargoGlobal ["ToolKit", 2];
_crate addItemCargoGlobal ["ACE_Fortify", 2];
_crate addItemCargoGlobal ["MineDetector", 2];
_crate addItemCargoGlobal ["SatchelCharge_Remote_Mag", 2];
_crate addItemCargoGlobal ["rhs_tm500_mag", 2];
_crate addItemCargoGlobal ["rhs_tm200_mag", 4];
_crate addItemCargoGlobal ["ACE_DefusalKit", 2];
_crate addItemCargoGlobal ["ACE_Clacker", 2];
_crate addItemCargoGlobal ["ACE_M26_Clacker", 1];
_crate addItemCargoGlobal ["rhs_mag_rgo", 6]; 
_crate addItemCargoGlobal ["rhs_mag_rdg2_white", 2]; 
_crate addItemCargoGlobal ["rhs_VOG25", 4]; 
_crate addItemCargoGlobal ["rhs_VG40OP_white", 2]; 
_crate addItemCargoGlobal ["rhs_VG40OP_green", 1]; 
_crate addItemCargoGlobal ["rhs_VG40OP_red", 1]; 
_crate addItemCargoGlobal ["rhs_GRD40_Red", 1]; 
_crate addItemCargoGlobal ["rhs_GRD40_Green", 1]; 
_crate addItemCargoGlobal ["rhs_GRD40_White", 2]; 
_crate addItemCargoGlobal ["ACE_EarPlugs", 2];