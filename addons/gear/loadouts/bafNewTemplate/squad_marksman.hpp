/*======================================
	Loadout for Squad Marksman (baf)
======================================*/
class squad_mksm : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m14ebrri";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhsusf_20Rnd_762x51_m80_Mag";
		bipod = "rhsusf_acc_harris_bipod";
        
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        UK3CB_BAF_556_30Rnd = 0;
        rhsusf_20Rnd_762x51_m80_Mag = 5;
    };
    
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMT_A", "UK3CB_BAF_H_Mk6_DDPM_A" };
    facewear = "rhsusf_oakley_goggles_clr";
};