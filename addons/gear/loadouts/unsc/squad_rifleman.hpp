/*======================================
	Loadout for Rifleman (unsc)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_MA37";
        ammo = "OPTRE_32Rnd_762x51_Mag_Tracer";
        
        class Scopes : Scopes
        {
             
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "OPTRE_UNSC_Army_Uniform_OLI", "OPTRE_UNSC_Army_Uniform_SNO" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_WDL", "OPTRE_UNSC_M52A_Armor_Rifleman_SNO"} ;
        // List of items
        OPTRE_32Rnd_762x51_Mag_Tracer = 8;
        OPTRE_M2_Smoke = 2;
        OPTRE_M9_Frag = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "OPTRE_UNSC_CH252_Helmet_WDL", "OPTRE_UNSC_CH252_Helmet_SNO" };
    facewear = "OPTRE_HUD_Glasses";
};