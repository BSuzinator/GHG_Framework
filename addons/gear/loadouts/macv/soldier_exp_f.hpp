/*======================================
	Loadout for Explosive Specialist (macv)
======================================*/
class soldier_exp_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_03";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
		ACE_Fortify = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_04";
        // List of items
        rhsusf_m112x4_mag = 1;
        rhsusf_m112_mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
    
    headgear[] = { "vn_b_helmet_m1_05_01", "vn_b_helmet_m1_05_02" };
};