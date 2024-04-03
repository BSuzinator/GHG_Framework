/*======================================
	Loadout for Handyman (Wastelanders)
======================================*/
class knfs_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m38";
        laser = "";
        ammo = "rhsgref_5Rnd_762x54_m38";
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
        classname = "U_C_ConstructionCoverall_Blue_F";
		rhsgref_5Rnd_762x54_m38 = 10;
    };
	headgear = "H_Construction_basic_white_F";
	facewear = "";
};