/*======================================
	Loadout for Squad Leads (unsc)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_MA37GL";
        grenade = "1Rnd_HE_Grenade_shell";

        class Scopes : Scopes
        {
            
        };
    };
    
    class Vest : Vest
    {
	classname [] = {"OPTRE_UNSC_M52A_Armor_TL_WDL", "OPTRE_UNSC_M52A_Armor_TL_SNO"};
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Lead";
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