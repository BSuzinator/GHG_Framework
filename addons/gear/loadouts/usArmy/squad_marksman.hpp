/*======================================
	Loadout for Squad Marksman (usArmy)
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
        rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
        rhsusf_20Rnd_762x51_m80_Mag = 5;
    };
    
    headgear[] = { "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ocp", "rhsusf_ach_helmet_ucp", "rhsusf_ach_helmet_ucp" };
    facewear = "CUP_G_ESS_BLK";
};