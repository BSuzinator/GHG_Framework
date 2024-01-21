/*======================================
	Loadout for Rifleman (baf)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "UK3CB_BAF_L85A2_RIS", "UK3CB_BAF_L85A2_RIS_W", "UK3CB_BAF_L85A2_RIS_G", "UK3CB_BAF_L85A2_RIS_G", "UK3CB_BAF_L85A2_RIS_D" };
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "UK3CB_BAF_556_30Rnd";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "UK3CB_BAF_U_CombatUniform_MTP", "UK3CB_BAF_U_Smock_Arctic", "UK3CB_BAF_U_CombatUniform_DPMW", "UK3CB_BAF_U_CombatUniform_DPMT", "UK3CB_BAF_U_CombatUniform_DDPM" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_Osprey_Rifleman_A", "UK3CB_BAF_V_Osprey_Winter", "UK3CB_BAF_V_Osprey_DPMW2", "UK3CB_BAF_V_Osprey_DPMT2", "UK3CB_BAF_V_Osprey_DDPM2" };
        // List of items
        UK3CB_BAF_556_30Rnd = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "UK3CB_BAF_H_Mk7_Camo_A", "UK3CB_BAF_H_Mk7_Win_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DPMT_B", "UK3CB_BAF_H_Mk6_DDPM_B" };
    facewear = "rhsusf_oakley_goggles_clr";
};