/*======================================
	Loadout for Rifleman (Spetsnaz)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak103";
        laser = "rhs_acc_perst1ik";
        ammo = "rhs_30Rnd_762x39mm_polymer";
		muzzle = "rhs_acc_pbs1";
        
        class Scopes : Scopes
        {
            red_dot = "rhs_acc_pkas";
			varient_red_dot = "rhs_acc_1p63";
			reflex = "rhs_acc_okp7_dovetail";
			magnified = "rhs_acc_1p78";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "UK3CB_LNM_B_U_Crew_CombatSmock_03", "UK3CB_CHD_B_U_CombatSmock_05", "UK3CB_CHD_W_B_U_CombatSmock_16", "UK3CB_AAF_B_U_Diving_Uniform_DIGI_BLK" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_TKP_I_V_6Sh92_Des", "UK3CB_TKA_I_V_6Sh92_Oli", "UK3CB_TKP_I_V_6Sh92_Blk", "UK3CB_BAF_V_Rebreather_PlateB" };
        // List of items
        rhs_30Rnd_762x39mm_polymer = 8;
        rhs_mag_rdg2_white = 2;
        rhs_mag_rgo = 2;
        ACE_EntrenchingTool = 1;
    };
    

    headgear[] = { "UK3CB_ABP_B_H_6b27m_ess_DES", "UK3CB_ADA_B_H_6b27m_ml_ESS_DPP_01", "UK3CB_AAF_O_H_6b27m_ESS_DIGI_BLK", "UK3CB_ANP_B_H_6b27m_ess_bala_BLK" };
    facewear = "rhsusf_oakley_goggles_clr", "rhsusf_oakley_goggles_clr", "rhsusf_oakley_goggles_clr", "G_B_Diving";

    headgear[] = { "CUP_H_Ger_M92_Tan_GG", "UK3CB_ADA_B_H_6b27m_ml_ESS_DPP_01", "UK3CB_AAF_O_H_6b27m_ESS_DIGI_BLK", "UK3CB_ANP_B_H_6b27m_ess_bala_BLK" };
    facewear = "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "G_B_Diving";

};