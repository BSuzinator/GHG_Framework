/*======================================
	Loadout for Fixed Wing Pilots (odst)
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
		classname = "OPTRE_M6G";
        laser = "";
        ammo = "OPTRE_8Rnd_127x40_Mag";
		
		class Scopes : Scopes
		{
			red_dot = "optre_m6g_scope";
		};
	};
	
    class Uniform : Uniform
    {
        classname = "OPTRE_UNSC_Airforce_Uniform";
    };
    
    class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52A_Armor_Pilot_AF";
        // List of items
        OPTRE_32Rnd_762x51_Mag_Tracer = 0;
        OPTRE_M9_Frag = 0;
        ACE_EntrenchingTool = 0;
        OPTRE_M2_Smoke = 0;
		OPTRE_8Rnd_127x40_Mag = 3;
		OPTRE_M2_Smoke_Red = 1;
		OPTRE_M2_Smoke_Green = 1;
		ACE_Chemlight_HiGreen = 1;
		ACE_Chemlight_HiRed = 1;
    };
    
    headgear = "OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR";
};