/*======================================
	Loadout for Recon Gunner (bokoHaram)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_srifle_SVD" };
		muzzle = "";
		bipod = "";
        laser = "";
        ammo = "CUP_10Rnd_762x54_SVD_M";
        
        class Scopes : Scopes
        {
            sniper_optic = "CUP_optic_PSO_1_1_open";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "CUP_hgun_M17_Coyote";
        ammo = "CUP_21Rnd_9x19_M17_Coyote";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_BDUv2_roll2_gloves_desert_US" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_10Rnd_762x54_SVD_M = 4;
		CUP_21Rnd_9x19_M17_Coyote = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};