/*======================================
	Loadout for SWAT Charlie Doctor (vnSwat)
======================================*/
class mat_ammo : loadout_base_vnSwat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_gau5a";
        ammo = "vn_m16_30_mag";
        
        class Scopes : Scopes { };
    };
	
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "vn_m1911";
        ammo = "vn_m1911_mag";
        
        class Scopes : Scopes { };
    };
    
    class Uniform : Uniform
    {
        classname = "vn_b_uniform_macv_01_03";
    };
    
    class Vest : Vest
    {
        classname = "vn_o_vest_05";
        // List of items
        vn_m16_30_mag = 4;
		vn_m1911_mag = 3;
        vn_m18_white_mag = 2;
        vn_m61_grenade_mag = 2;
        ACE_EntrenchingTool = 0;
    };
    
	class Backpack : Backpack
    {
		#include "..\doctor_bag.hpp"
    };
	
    headgear = "UK3CB_MDF_B_H_M1_MED";
    facewear = "G_Aviator";
};