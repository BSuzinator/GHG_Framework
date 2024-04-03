/*======================================
	Loadout for Mechanic (Wastelanders)
======================================*/
class squad_aar : squad_rifleman
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_sgun_slamfire";
        ammo = "CUP_1Rnd_12Gauge_HE";
        bipod = "";
    };
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_welrod";
        laser = "";
        ammo = "vn_welrod_mag";
		bipod = "";
    };
    class Uniform : Uniform
    {
        classname = "CUP_U_C_Mechanic_02";
		CUP_1Rnd_12Gauge_HE = 20;
		CUP_1Rnd_12Gauge_Slug 20;
		CUP_1Rnd_12Gauge_Pellets_No00_Buck = 20;
		vn_m_wrench_01 = 1;
		vn_b_item_toolkit = 1;
		vn_welrod_mag = 4;
    };
	
	class Vest : Vest
    {
		classname = "";

    };
	
    class Backpack : Backpack
    {
        classname = "";
        // List of items

    };
	
	class Binoculars : Binoculars
    {
        classname = "";
    };
	
	headgear = "";
	facewear = "";
};