/*======================================
	Loadout for Explosive Specialist (pmc)
======================================*/
class soldier_exp_f : soldier_f
{
    

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_tac_grn_palm";
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_plateframe_rifleman";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
		ACE_Fortify = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        rhsusf_m112x4_mag = 1;
        rhsusf_m112_mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
	headgear = "vn_b_headband_03";
};