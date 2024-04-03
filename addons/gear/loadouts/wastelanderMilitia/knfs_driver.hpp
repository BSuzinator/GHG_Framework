/*======================================
	Loadout for Handyman (Wastelanders)
======================================*/
class knfs_driver : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_Izh18";
        laser = "";
        ammo = "CUP_1Rnd_12Gauge_Pellets_No00_Buck";
		bipod = "";
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_m_hammer";
        laser = "";
        ammo = "";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "U_C_ConstructionCoverall_Red_F";
		CUP_1Rnd_12Gauge_Pellets_No00_Buck = 20;
		CUP_1Rnd_12Gauge_Slug = 21;
		CUP_1Rnd_12Gauge_HE = 21;
    };
	headgear = "H_Construction_basic_red_F";
	facewear = "";
};