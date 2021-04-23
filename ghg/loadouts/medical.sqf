/*======================================
		Creates Medical Crate and
		loads into vehicle it was
		called from
======================================*/

params ["_pos", "_dir", "_isAirdrop"];

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

{
	_curator = _x;
	_curator addCuratorEditableObjects [[_crate], true];
} forEach allCurators;

if (_isAirdrop) then {
	_parachute = createVehicle ["B_Parachute_02_F",_modulePos, [], 0, "FLY"];
	_parachute setPosATL [getPosATL _parachute select 0, getPosATL _parachute select 1, 200];
	_crate attachTo [_parachute,[0,0,0]];
};