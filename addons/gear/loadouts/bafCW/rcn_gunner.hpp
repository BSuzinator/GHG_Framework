/*======================================
	Loadout for Recon Gunner (bafCW)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "UK3CB_BAF_L115A3", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010", "rhs_weap_XM2010_d" };
		muzzle = "";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        laser = "";
        ammo = "CUP_5Rnd_86x70_L115A1";
        
        class Scopes : Scopes
        {
            sniper_optic = "ace_optic_lrps_pip";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "UK3CB_BAF_L9A1";
        ammo = "UK3CB_BAF_9_13Rnd";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "UK3CB_BAF_U_Smock_DPMW", "UK3CB_BAF_U_Smock_DPMW", "UK3CB_BAF_U_Smock_DDPM", "UK3CB_BAF_U_Smock_DDPM", "UK3CB_BAF_U_Smock_Arctic", "UK3CB_BAF_U_Smock_Arctic" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW", "UK3CB_BAF_V_PLCE_Webbing_DPMW", "UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM", "UK3CB_BAF_V_PLCE_Webbing_DDPM", "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter", "UK3CB_BAF_V_PLCE_Webbing_Winter" };
        // List of items
        CUP_5Rnd_86x70_L115A1 = 8;
		UK3CB_BAF_9_13Rnd = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "", "UK3CB_BAF_H_Mk6_DPMW_A", "UK3CB_BAF_H_Mk6_DPMW_B", "UK3CB_BAF_H_Mk6_DDPM_A", "UK3CB_BAF_H_Mk6_DDPM_B", "UK3CB_BAF_H_Mk7_Win_ESS_A", "UK3CB_BAF_H_Mk7_Win_ESS_A" };
    facewear = "";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};