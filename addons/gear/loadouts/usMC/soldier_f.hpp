/*======================================
	Loadout for Rifleman (usMC)
======================================*/
class soldier_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m16a4_carryhandle";
        laser = "rhsusf_acc_anpeq15";
        ammo = "rhs_mag_30Rnd_556x45_M855_Stanag";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt = "rhsusf_acc_eotech_552";
            //holo_alt_camo[] = { "rhsusf_acc_eotech_552_d", "rhsusf_acc_eotech_552_wd" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd" };
    };
    
    class Vest : Vest
    {
        classname = "rhsusf_spc_rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 8;
        SmokeShell = 1;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "rhsusf_oakley_goggles_clr";
};