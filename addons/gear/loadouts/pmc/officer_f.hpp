/*======================================
	Loadout for Platoon Lead (pmc)
======================================*/
class officer_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_fatigue_01";
    };
	
    class Vest : Vest
    {
		classname = "rhsusf_plateframe_teamleader";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
    
    headgear = "UK3CB_h_safari_hat_brown";
};