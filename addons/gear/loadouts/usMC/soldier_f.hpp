/*======================================
	Loadout for Rifleman (usMC)
======================================*/
class soldier_f : loadout_base
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        name = "rhs_weap_m16a4_carryhandle";
        laser = "rhsusf_acc_anpeq15";
        ammo = "rhs_mag_30Rnd_556x45_M855_Stanag";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt = "rhsusf_acc_eotech_552";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_d", "rhsusf_acc_eotech_552_wd" };
        };
    };
    
    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher
    
    class Uniform : Uniform
    {
        name[] = { "rhs_uniform_FROG01_d", "rhs_uniform_FROG01_wd" };
    };
    
    class Vest : Vest
    {
        name = "rhsusf_spc_rifleman";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 8;
        SmokeShell = 1;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    class Backpack : Backpack {};
    
    headgear[] = { "rhsusf_lwh_helmet_marpatd", "rhsusf_lwh_helmet_marpatwd" };
    facewear = "rhsusf_oakley_goggles_clr";

    class Binoculars : Binoculars { class Scopes: Scopes {}; };
};