/*======================================
	Loadout for Rifleman (usMC_CUP)
======================================*/
class soldier_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_M16A4_Base";
        laser = "cup_acc_anpeq_15_top_flashlight_black_l";
        ammo = "CUP_30Rnd_556x45_Stanag";
        
        class Scopes : Scopes
        {
            red_dot = "cup_optic_compm4";
            holo = "cup_optic_eotech553_black";
            red_dot_magnified = "cup_optic_aimm_compm4_blk";
            holo_magnified = "cup_optic_g33_hws_blk_dwn";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_USMC_MCCUU_des", "CUP_U_B_USMC_MCCUU" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Eagle_SPC_Rifleman"
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_USArmy_ECH_MARPAT_des", "CUP_H_USArmy_ECH_MARPAT" };
    facewear = "CUP_G_ESS_BLK";
};