/*======================================
	Loadout for Rifleman (nato_a3)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MX_F", "arifle_MX_khk_F", "arifle_MX_Black_F"};
        laser = "acc_pointer_IR";
        ammo = "30Rnd_65x39_caseless_black_mag";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "optic_Aco";
            holo[] = { "optic_Holosight", "optic_Holosight_smg_khk_F", "optic_Holosight_blk_F" };
			rco[] = { "optic_Hamr", "optic_Hamr_khk_F", "optic_Hamr" };
            
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "U_B_CombatUniform_mcam", "U_B_T_Soldier_F", "U_B_CombatUniform_mcam_wdl_f" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_wdl" };
        // List of items
        30Rnd_65x39_caseless_black_mag = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "H_HelmetB_snakeskin", "H_HelmetB_tna_F", "H_HelmetB_plain_wdl" };
    facewear = "G_Tactical_Clear";
};