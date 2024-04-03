/*======================================
	Loadout for Farmer (Wastelanders)
======================================*/
class flcn_pilot : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_izh54_shorty";
        laser = "";
        ammo = "CUP_2Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_mx991_m1911";
        laser = "";
        ammo = "9Rnd_45ACP_Mag";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "U_BG_Guerilla2_3";
		CUP_2Rnd_12Gauge_Pellets_No00_Buck = 15;
		9Rnd_45ACP_Mag = 4;
    };
	headgear = "CUP_H_C_Beanie_02";
	facewear = "CUP_Beard_Brown";
};