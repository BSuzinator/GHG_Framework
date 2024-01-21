/*======================================
	Loadout for Fixed Wing Pilots (cbrn)
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
		classname = "hgun_P07_blk_F";
        laser = "";
        ammo = "16Rnd_9x21_Mag";
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
        30Rnd_65x39_caseless_black_mag_Tracer = 0;
        HandGrenade = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		16Rnd_9x21_Mag = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_B";
    facewear = "";
};