/*======================================
	Loadout for PLT Lead (pmc)
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
	
    headgear = "UK3CB_H_Safari_Hat_Brown";
	facewear = "G_Headset_lxWS";
};