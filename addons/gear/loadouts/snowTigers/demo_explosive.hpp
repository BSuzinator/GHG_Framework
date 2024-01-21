/*======================================
	Loadout for Explosive Specialist (Snow Tigers)
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

    };
	
	class Vest : Vest
    {
        classname = "IP_V_PlateCarrierGL_rgrSnowTiger";
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