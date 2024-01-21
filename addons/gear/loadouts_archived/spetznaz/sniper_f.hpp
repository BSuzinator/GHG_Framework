/*======================================
	Loadout for Recon Sniper (spetznaz)
======================================*/
class sniper_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname = "rhs_weap_svdp";
        muzzle = "";
		bipod = "";
        laser = "";
        ammo = "rhs_10Rnd_762x54mmR_7N1";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhs_acc_pso1m21";
        };
    };
    
    class Weapon_2 : Weapon_2 
	{ 
		classname = "rhs_weap_pya";
        ammo = "rhs_mag_9x19_17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "rhs_uniform_gorka_r_y_gloves", "UK3CB_CHD_B_U_CombatSmock_07", "UK3CB_CHD_W_B_U_CombatSmock_07", "U_B_Wetsuit" };
		ACRE_PRC343 = 1;
		ACE_CableTie = 2;
    };
    
    class Vest : Vest
    {
        classname[] = { "LOP_V_6B23_Rifleman_TAN", "rhsgref_6b23_ttsko_mountain_sniper", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB" };
        // List of items
        rhs_10Rnd_762x54mmR_7N1 = 4;
		rhs_mag_9x19_17 = 2;
        SmokeShell = 2;
		ACE_Canteen = 1;
    };
    
    headgear[] = { "UK3CB_ABP_B_H_6b27m_DES", "rhs_6b27m_green", "UK3CB_ANP_B_H_6b27m_GREY", "UK3CB_ANP_B_H_6b27m_BLK" };
    facewear[] = { "UK3CB_G_Balaclava2_DES", "rhs_balaclava1_olive", "UK3CB_G_Balaclava_Win_04", "G_B_Diving"};
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};