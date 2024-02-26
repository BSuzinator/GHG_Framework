/*======================================
	Loadout for Recon Gunner (bokoHaram)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "UK3CB_SVD_OLD" };
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
        classname[] = { "LOP_U_ISTS_Fatigue_05" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_10Rnd_762x54mmR_7N1 = 4;
		rhs_mag_9x19_17 = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};