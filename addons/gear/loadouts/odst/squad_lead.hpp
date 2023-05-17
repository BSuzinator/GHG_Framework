/*======================================
	Loadout for Squad Leads (odst)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_MA37GL";
        grenade = "1Rnd_HE_Grenade_shell";
		ammo = "OPTRE_32Rnd_762x51_Mag_Tracer";

        class Scopes : Scopes
        {
            
        };
    };
    
    class Vest : Vest
    {
	classname = "OPTRE_UNSC_M52D_Armor_Scout";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
		OPTRE_60Rnd_5x23mm_Mag_tracer = 0;
		OPTRE_32Rnd_762x51_Mag_Tracer = 8;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black_Lead";
        // List of items
        1Rnd_HE_Grenade_shell = 10;
        OPTRE_1Rnd_Smoke_Grenade_shell = 5;
        OPTRE_1Rnd_SmokeGreen_Grenade_shell = 2;
        OPTRE_1Rnd_SmokeRed_Grenade_shell = 2;
        ACE_40mm_Flare_red = 2;
        ACE_40mm_Flare_green = 2;
        ACE_40mm_Flare_white = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Binoculars";
    };
	
};