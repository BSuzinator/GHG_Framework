/*======================================
	Loadout for Rifleman (Spetsnaz)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak103";
        laser = "CUP_optic_PechenegScope";
        ammo = "rhs_30Rnd_762x39mm_polymer";
		muzzle = "rhs_acc_pbs1";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_1p63";
			varient_red_dot = "CUP_optic_1p63";
			reflex = "CUP_optic_OKP_7";
			magnified = "CUP_optic_PechenegScope";
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
        vn_rdg2_mag = 2;
        CUP_HandGrenade_RGO = 2;
        ACE_EntrenchingTool = 1;
    };
    

    headgear[] = { "UK3CB_ABP_B_H_6b27m_ess_DES", "UK3CB_ADA_B_H_6b27m_ml_ESS_DPP_01", "UK3CB_AAF_O_H_6b27m_ESS_DIGI_BLK", "UK3CB_ANP_B_H_6b27m_ess_bala_BLK" };
    facewear = "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "G_B_Diving";

    headgear[] = { "CUP_H_Ger_M92_Tan_GG", "UK3CB_ADA_B_H_6b27m_ml_ESS_DPP_01", "UK3CB_AAF_O_H_6b27m_ESS_DIGI_BLK", "UK3CB_ANP_B_H_6b27m_ess_bala_BLK" };
    facewear = "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "G_B_Diving";

};