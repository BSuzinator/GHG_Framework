/*======================================
	Loadout for Rifleman (Taliban)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM_Early";
        laser = "";
        ammo = "CUP_30Rnd_762x39_AK47_bakelite_M";
        
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
        classname = "CUP_U_B_CDF_DST_1";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_JPC_Tan_Light";
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "CUP_H_TKI_Lungee_02";
    facewear = "G_Combat_lxWS";
};