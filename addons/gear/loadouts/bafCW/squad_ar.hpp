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
        // Inherited item overrides
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
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