/*======================================
	Loadout for Recon Sniper (Taliban)
======================================*/
class sniper_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_svdp_wd";
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
		classname = "rhsusf_weap_m1911a1";
        ammo = "rhsusf_mag_7x45acp_MHP";
		class Scopes {}; 
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
        rhs_10Rnd_762x54mmR_7N1 = 4;
		rhsusf_mag_7x45acp_MHP = 2;
        SmokeShell = 2;
    };
    
    headgear = "CUP_H_TKI_Lungee_02";
    facewear = "G_Combat_lxWS";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};