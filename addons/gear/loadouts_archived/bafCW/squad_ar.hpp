/*======================================
	Loadout for Squad Autorifleman (bafCW)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_lmg_L7A2";
        ammo = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M_T";
        bipod = "";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_30Rnd_556x45_Stanag = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M_T = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "", "UK3CB_BAF_B_Beregn_OLI_Rifleman_A", "UK3CB_BAF_B_Beregn_OLI_Rifleman_A", "UK3CB_BAF_B_Beregn_DDPM_Rifleman_A", "UK3CB_BAF_B_Beregn_DDPM_Rifleman_A", "UK3CB_BAF_B_Beregn_Arctic_Rifleman_A", "UK3CB_BAF_B_Beregn_Arctic_Rifleman_A" };
        // List of items
        CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M_T = 2;
    };
};