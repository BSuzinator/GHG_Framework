/*======================================
	Loadout for Fixed Wing Pilots (russian)
======================================*/
class rptr_pilot : squad_rifleman
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
		rhssaf_mag_brd_m83_red = 1;
		rhssaf_mag_brd_m83_green = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    

    headgear = "RHS_jetpilot_usaf";
    facewear = "rhsusf_oakley_goggles_clr";

    headgear = "H_PilotHelmetFighter_B";
    facewear = "CUP_G_ESS_BLK";

};