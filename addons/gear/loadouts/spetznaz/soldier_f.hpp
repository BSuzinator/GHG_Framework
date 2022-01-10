/*======================================
	Loadout for Rifleman (spetznaz)
======================================*/
class soldier_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak103";
        laser = "rhs_acc_perst1ik";
        ammo = "rhs_30Rnd_762x39mm_polymer";
		muzzle = "rhs_acc_pbs1";
        
        class Scopes : Scopes
        {
            red_dot = "rhs_acc_pkas";
            arrow = "rhs_acc_okp7_dovetail";
			holo = "rhs_acc_ekp8_02";
            magnified = "rhs_acc_nita";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_gorka_r_y_gloves", "UK3CB_CHD_B_U_CombatSmock_07", "UK3CB_CHD_W_B_U_CombatSmock_07", "UK3CB_AAF_B_U_Diving_Uniform_DIGI_BLK" };
		ACRE_PRC343 = 1;
		ACE_Canteen = 1;
		ACE_CableTie = 2;
    };
    
    class Vest : Vest
    {
        classname[] = { "LOP_V_6B23_Rifleman_TAN", "rhsgref_6b23_ttsko_mountain_rifleman", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB" };
        // List of items
        rhs_30Rnd_762x39mm_polymer = 8;
        SmokeShell = 2;
        rhs_mag_rgo = 2;
        ACE_EntrenchingTool = 1;
    };
    
	class Backpack : Backpack
	{
		classname[] = { "", "", "", "UK3CB_TKP_O_B_ASS_BLK" };
	};
	
    headgear[] = { "UK3CB_ABP_B_H_6b27m_DES", "rhs_6b27m_green", "UK3CB_ANP_B_H_6b27m_GREY", "UK3CB_ANP_B_H_6b27m_BLK" };
    facewear[] = { "UK3CB_G_Balaclava2_DES", "rhs_balaclava1_olive", "UK3CB_G_Balaclava_Win_04", "G_B_Diving"};
};