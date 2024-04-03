/*======================================
	Loadout for Shopkeeper (Wastelanders)
======================================*/
class lynx_driver : squad_rifleman
{
	 class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1897";
		scope = "";
        laser = "vn_b_m1897";
        ammo = "CUP_6Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
        
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_m_bayo_carbine";
        laser = "";
        ammo = "";
		bipod = "";
    };
	class Vest : Vest
    {
        classname = "rhs_6b2";
		CUP_6Rnd_12Gauge_Pellets_No00_Buck = 10;

    };
	class Uniform : Uniform
    {
        classname = "LOP_U_IRA_Fatigue_HTR_BLK";
    };
};