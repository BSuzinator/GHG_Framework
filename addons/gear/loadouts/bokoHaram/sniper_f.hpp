/*======================================
	Loadout for Recon Sniper (Boko Haram)
======================================*/
class sniper_f : loadout_base
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
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
        classname = "U_lxWS_SFIA_soldier_2_O";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_lxWS_HarnessO_oli";
        // List of items
        rhs_10Rnd_762x54mmR_7N1 = 4;
		rhsusf_mag_7x45acp_MHP = 2;
        SmokeShell = 2;
    };
    
    headgear = "lxWS_H_turban_01_green";
    facewear = "G_Combat_lxWS";
	
	class Binoculars : Weapon_1 // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};