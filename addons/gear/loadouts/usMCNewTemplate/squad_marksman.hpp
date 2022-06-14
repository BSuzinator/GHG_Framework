/*======================================
	Loadout for Squad Marksman (usMC)
======================================*/
class squad_marksman : squad_rifle
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
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 0;
        rhsusf_20Rnd_762x51_m80_Mag = 5;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "rhsusf_oakley_goggles_clr";
};