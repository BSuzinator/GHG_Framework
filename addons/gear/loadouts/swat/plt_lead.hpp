/*======================================
	Loadout for PLT Lead (swat)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    class Uniform : Uniform
	{
		classname = "LOP_U_PMC_Fatigue_01";
	};
    class Vest : Vest
    {
		classname = "rhsusf_plateframe_teamleader";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
	{
		classname = "B_AssaultPack_cbr";
	};
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
};