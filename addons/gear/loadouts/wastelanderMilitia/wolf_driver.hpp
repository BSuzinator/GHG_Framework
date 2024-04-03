/*======================================
	Loadout for Farmer (Wastelanders)
======================================*/
class wolf_driver : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_izh54";
        laser = "";
        ammo = "CUP_2Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Villager_04";
		CUP_2Rnd_12Gauge_Slug = 15;
		CUP_2Rnd_12Gauge_Pellets_No00_Buck = 15;
    };
	headgear = "H_Hat_Safari_sand_F";
};