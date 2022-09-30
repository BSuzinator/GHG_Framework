/*======================================
	Loadout for Explosive Specialist (pmc)
======================================*/
class demo_explosive : squad_rifleman
{
    

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Uniform : Uniform
    {
        classname = "LOP_U_PMC_tac_grn_palm";
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_plateframe_rifleman";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        rhsusf_m112x4_mag = 1;
        rhsusf_m112_mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
	facewear = "G_Headset_lxWS";
	headgear = "vn_b_headband_03";
};