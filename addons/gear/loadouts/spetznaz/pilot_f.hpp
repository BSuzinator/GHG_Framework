/*======================================
	Loadout for Fixed Wing Pilots (spetznaz)
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
		classname = "rhs_weap_pya";
		muzzle = "";
        laser = "";
        ammo = "rhs_mag_9x19_17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_B_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of item overrides
        rhs_30Rnd_762x39mm_polymer = 0;
        rhs_mag_rgd5 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
        // List of items
		rhs_mag_9x19_17 = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
		ACE_Canteen = 0;
    };
    
    headgear = "RHS_jetpilot_usaf";
    facewear = "rhsusf_oakley_goggles_clr";
};