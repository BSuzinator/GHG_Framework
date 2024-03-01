/*======================================
	Loadout for Crew (odst)
======================================*/
class lynx_crew : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "";
        };
    };
	
	class Vest : Vest
    {
	classname = "OPTRE_UNSC_M52D_Armor_Scout";
        // List of items
        OPTRE_32Rnd_762x51_Mag_Tracer = 4;
        OPTRE_M2_Smoke = 1;
		OPTRE_M2_Smoke_Green = 1;
		OPTRE_M2_Smoke_Red = 1;
        OPTRE_M9_Frag = 1;
        ACE_EntrenchingTool = 0;
    };

};