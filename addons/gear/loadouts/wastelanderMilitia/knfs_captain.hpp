/*======================================
	Loadout for Handyman (Wastelanders)
======================================*/
class knfs_captain : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_Remington700";
        laser = "";
        ammo = "CUP_6Rnd_762x51_R700";
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
        classname = "U_C_ConstructionCoverall_Black_F";
		CUP_6Rnd_762x51_R700 = 10;
    };
	headgear = "H_Construction_basic_black_F";
	facewear = "";
};