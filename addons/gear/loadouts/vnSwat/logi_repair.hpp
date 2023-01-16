/*======================================
	Loadout for Repair Specialist (vnSwat)
======================================*/
class logi_repair : squad_rifleman
{
    class Vest : Vest
    {
        classname = "UK3CB_ADA_B_V_TacVest_BLK";
        // List of items
		ACE_microDAGR = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Messenger_Black_F";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
		ACRE_PRC77 = 1;
    };
    
    headgear = "UK3CB_LSM_B_H_Field_Cap_BLK";
	facewear = "vn_b_aviator";
};