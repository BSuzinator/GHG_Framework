/*======================================
	Loadout for Squad Leads (bafCW)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "vn_l1a1_xm148", "vn_l1a1_xm148", "vn_l1a1_xm148", "vn_l1a1_xm148", "vn_l1a1_xm148", "vn_l1a1_xm148" };
        grenade = "vn_40mm_m406_he_mag";
		ammo = "UK3CB_BAF_762_20Rnd_T";
		
        class Scopes : Scopes
        {
            acog = "";
        };
    };
    
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_OLI_Rifleman_A", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A",	"UK3CB_BAF_B_Bergen_Arctic_Rifleman_A_Rifleman_A" };
        // List of items
		ACRE_PRC77 = 1;
        vn_40mm_m406_he_mag = 10;
        CUP_1Rnd_StarCluster_White_M203 = 5;
        CUP_FlareGreen_M203 = 2;
        CUP_FlareRed_M203 = 2;
        CUP_1Rnd_SmokeRed_M203 = 2;
        CUP_1Rnd_SmokeGreen_M203 = 2;
        CUP_1Rnd_Smoke_M203 = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDMW_A", "UK3CB_BAF_H_Mk6_DDMW_B", "UK3CB_BAF_H_Mk7_Win_ESS_A", "UK3CB_BAF_H_Mk7_Win_ESS_A" };
};