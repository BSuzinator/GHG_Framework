/*======================================
	Loadout for Squad Autorifleman (bafCW)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L7A2";
        ammo = "UK3CB_BAF_762_100Rnd_T";
        bipod = "";
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW", "UK3CB_BAF_V_PLCE_Webbing_DPMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDMW", "UK3CB_BAF_V_PLCE_Webbing_DDMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_Arctic", "UK3CB_BAF_V_PLCE_Webbing_Arctic" };
        // Inherited item overrides
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        UK3CB_BAF_762_100Rnd_T = 3;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "", "UK3CB_BAF_B_Beregn_OLI_Rifleman_A", "UK3CB_BAF_B_Beregn_OLI_Rifleman_A", "UK3CB_BAF_B_Beregn_DDPM_Rifleman_A", "UK3CB_BAF_B_Beregn_DDPM_Rifleman_A", "UK3CB_BAF_B_Beregn_Arctic_Rifleman_A", "UK3CB_BAF_B_Beregn_Arctic_Rifleman_A" };
        // List of items
        UK3CB_BAF_762_100Rnd_T = 2;
    };
};