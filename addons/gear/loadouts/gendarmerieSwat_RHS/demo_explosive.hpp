/*======================================
	Loadout for Explosive Specialist (gendamarieSwat)
======================================*/
class demo_explosive : squad_rifleman
{
    

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        
        DemoCharge_Remote_Mag = 3;
		SatchelCharge_Remote_Mag = 1;
		GHG_spikeStripItem = 0;
    };
};