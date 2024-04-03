/*======================================
	Loadout for Farmer (Wastelanders)
======================================*/
class wolf_cmdr : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1897";
        laser = "";
        ammo = "CUP_6Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Villager_02";
		CUP_6Rnd_12Gauge_Pellets_No00_Buck = 6;
    };
	headgear = "LOP_H_Cowboy_hat";
};