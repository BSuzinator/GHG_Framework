/*======================================
    Loadout for MMG Gunner (unsc)
======================================*/
class mmg_gunner : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_M247";
        ammo = "OPTRE_100Rnd_762x51_Box_Tracer";
        class Scopes : Scopes
        {
            mg_optic = "optre_m7_sight";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "OPTRE_UNSC_Army_Uniform_OLI_SlimLeg", "OPTRE_UNSC_Army_Uniform_SNO_SlimLeg" };
        ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname [] = {"OPTRE_UNSC_M52A_Armor_MG_WDL", "OPTRE_UNSC_M52A_Armor_MG_SNO"};
        // List of items
        OPTRE_32Rnd_762x51_Mag_Tracer = 0;
        OPTRE_100Rnd_762x51_Box_Tracer = 2
        ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
        OPTRE_100Rnd_762x51_Box_Tracer = 3;
    };
};