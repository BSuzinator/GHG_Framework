/*======================================
	Loadout for Fixed Wing Pilots (usMC)
======================================*/
class rptr_pilot : squad_rifle
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
		classname = "rhsusf_weap_m9";
        laser = "";
        ammo = "rhsusf_mag_15Rnd_9x19_FMJ";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_B_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        rhs_mag_30Rnd_556x45_M855_Stanag = 0;
        rhs_mag_m67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		rhsusf_mag_15Rnd_9x19_FMJ = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "RHS_jetpilot_usaf";
    facewear = "rhsusf_oakley_goggles_clr";
};