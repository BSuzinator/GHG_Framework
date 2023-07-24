/*======================================
	Loadout for PLT Lead (bafCW)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "";
        };
    };
    
    class Vest : Vest
    {
        // List of items
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_OLI_Rifleman_A", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A",	"UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
		ACRE_PRC77 = 1;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDPM_A", "UK3CB_BAF_H_Mk6_DDPM_B", "UK3CB_BAF_H_Mk7_Win_ESS_A", "UK3CB_BAF_H_Mk7_Win_ESS_A" };
};