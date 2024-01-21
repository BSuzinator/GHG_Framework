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
		classname = "CUP_I_B_PMC_Unit_32";
	};
    class Vest : Vest
    {
		classname = "CUP_V_B_IOTV_OEFCP_SL_USArmy";
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
	
    headgear = "CUP_H_USMC_BOONIE_PRR_DES";
	facewear = "G_Headset_lxWS";
};