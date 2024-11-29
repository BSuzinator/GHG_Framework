/*======================================
	Loadout for Explosive Specialist (nato_a3)
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
        classname[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_wdl" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_mcamo", "B_Kitbag_sgg", "B_Kitbag_rgr" };
        // List of items
        DemoCharge_Remote_Mag = 4;
		SatchelCharge_Remote_Mag = 1;
    };
};