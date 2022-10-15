/*======================================
	Loadout for Fixed Wing Pilots (Russian)
======================================*/
class pilot_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "";
        laser = "";
        ammo = "";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhs_weap_makarov_pm";
        laser = "";
        ammo = "rhs_mag_9x18_8_57N181S";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = {"rhs_uniform_df15","rhs_uniform_df15","rhs_uniform_df15_tan"};
    };
    
    class Vest : Vest
    {
        classname = "rhs_vest_commander";
        // List of items
        rhs_30Rnd_545x39_7N10_AK = 0;
        rhs_mag_rgo = 0;
        ACE_EntrenchingTool = 0;
        rhs_mag_rdg2_white = 0;
		rhs_mag_9x18_8_57N181S = 3;
		rhs_mag_rdg2_whiteRed = 1;
		rhs_mag_rdg2_whiteGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "RHS_jetpilot_usaf";
};