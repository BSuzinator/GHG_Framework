/*======================================
	Loadout for Fixed Wing Pilots (csat_a3)
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
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt_camo = "";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_Rook40_F";
        laser = "";
        ammo = "16Rnd_9x21_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "U_O_PilotCoveralls";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of items
        30Rnd_65x39_caseless_green = 0;
        HandGrenade = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
		16Rnd_9x21_Mag = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "H_PilotHelmetFighter_O";
    facewear = "G_Combat";
};