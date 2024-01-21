/*======================================
	Loadout for Recon Gunner (taliban)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_SVD_wdl" };
		muzzle = "";
		bipod = "";
        laser = "";
        ammo = "CUP_10Rnd_762x54_SVD_M";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_PSO_1_1";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_Colt1911";
        ammo = "CUP_7Rnd_45ACP_1911";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "LOP_U_ISTS_Fatigue_14" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_10Rnd_762x54_SVD_M = 4;
		CUP_7Rnd_45ACP_1911 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "LOP_H_Turban_mask" };
    facewear = "G_Combat_lxWS";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};