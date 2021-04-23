/*======================================
		Creates Medical Crate and
		loads into vehicle it was
		called from
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["ACE_medicalSupplyCrate", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;
clearItemCargoGlobal _crate; 

_crate addItemCargoGlobal ["ACE_elasticBandage", 32]; 
_crate addItemCargoGlobal ["ACE_packingBandage", 32]; 
_crate addItemCargoGlobal ["ACE_quikclot", 24]; 
_crate addItemCargoGlobal ["ACE_fieldDressing", 24]; 
_crate addItemCargoGlobal ["ACE_bloodIV_250", 16]; 
_crate addItemCargoGlobal ["ACE_bloodIV_500", 16]; 
_crate addItemCargoGlobal ["ACE_bloodIV", 16]; 
_crate addItemCargoGlobal ["ACE_surgicalKit", 1]; 
_crate addItemCargoGlobal ["ACE_personalAidKit", 8]; 
_crate addItemCargoGlobal ["ACE_splint", 12]; 
_crate addItemCargoGlobal ["ACE_morphine", 20]; 
_crate addItemCargoGlobal ["ACE_epinephrine", 16]; 
_crate addItemCargoGlobal ["ACE_bodyBag", 16];
_crate addItemCargoGlobal ["ACE_tourniquet", 16];  
_crate addItemCargoGlobal ["ACE_EarPlugs", 8];

_crate