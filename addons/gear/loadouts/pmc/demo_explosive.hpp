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
        classname = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
    };
	
	class Vest : Vest
    {
        classname = "CUP_V_B_IOTV_OEFCP_Rifleman_USArmy";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        DemoCharge_Remote_Mag = 3;
        DemoCharge_Remote_Mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
	facewear = "G_Headset_lxWS";
	headgear = "vn_b_headband_03";
};