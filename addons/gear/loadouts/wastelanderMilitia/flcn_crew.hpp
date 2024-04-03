/*======================================
	Loadout for Farmer (Wastelanders)
======================================*/
class flcn_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m36";
        laser = "";
        ammo = "vn_m36_mag";
		bipod = "";
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_izh54_p";
        laser = "";
        ammo = "CUP_2Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Woodlander_01";
		CUP_2Rnd_12Gauge_Pellets_No00_Buck = 5;
		vn_m36_mag = 10;

    };
	headgear = "CUP_H_RUS_SSH68_olive";
};