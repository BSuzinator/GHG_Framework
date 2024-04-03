/*======================================
	Loadout for Medical Assistant (Wastelanders)
======================================*/
class squad_medic : squad_rifleman
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_k98k";
        laser = "";
        ammo = "vn_k98k_mag";
		bipod = "";   
    };
	class Uniform : Uniform
    {
        classname = "U_I_C_Soldier_Bandit_3_F";
		vn_k98k_mag = 10;
    };

    class Vest : Vest
    {
		classname = "";

    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_GER_Medic_Flecktarn";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
	headgear = "H_Cap_White_IDAP_F";
	facewear = "kat_Armband_Medic_Goggles";
};