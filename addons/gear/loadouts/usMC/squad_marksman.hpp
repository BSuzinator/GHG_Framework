/*======================================
	Loadout for Squad Marksman (usMC)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m14ebrri";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "rhsusf_20Rnd_762x51_m80_Mag";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_RCO";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 0;
        rhsusf_20Rnd_762x51_m80_Mag = 5;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "CUP_G_ESS_BLK";
};