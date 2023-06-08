/*======================================
	Loadout for Fixed Wing Pilots (Snow Tigers)
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
		classname = "rhs_weap_pya";
		muzzle = "";
        laser = "";
        ammo = "rhs_mag_9x19_17";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname = "IP_U_O_PilotCoveralls_SnowHex";
    };
    
    class Vest : Vest
    {
        classname = "V_Rangemaster_belt";
        // List of item overrides
        30Rnd_65x39_caseless_green = 0;
        rhs_mag_m67 = 0;
        ACE_EntrenchingTool = 0;
        SmokeShell = 0;
        // List of items
		rhs_mag_9x19_17 = 3;
		SmokeShellRed = 1;
		SmokeShellGreen = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "IP_H_PilotHelmetFighter_O_Snow";
    facewear = "G_Aviator";
};