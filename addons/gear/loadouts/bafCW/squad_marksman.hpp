/*======================================
	Loadout for Squad Marksman (bafCW)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L1A1_Wood";
        laser = "";
        ammo = "UK3CB_BAF_762_20Rnd_T";
		bipod = "";
        
        class Scopes : Scopes
        {
            magnified = "uk3cb_baf_suit";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
        UK3CB_BAF_762_20Rnd_T = 8;
    };
    
    headgear[] = { "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDMW_A", "UK3CB_BAF_H_Mk6_DDMW_B", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk7_Win_A" };
    facewear = "G_Combat";
};