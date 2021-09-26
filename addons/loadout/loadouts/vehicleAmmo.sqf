/*======================================
		Creates Vehicle Ammo Crate and
		loads into vehicle it was
		called from
======================================*/

params ["_pos", "_dir"];

_crate = createVehicle ["Box_NATO_AmmoVeh_F", _pos, [], 0, "CAN_COLLIDE"];
_crate setDir _dir;
clearItemCargoGlobal _crate; 

_crate addItemCargoGlobal ["ToolKit", 2]; 
_crate addBackPackCargoGlobal ["B_AssaultPack_blk", 2]; 

_crate