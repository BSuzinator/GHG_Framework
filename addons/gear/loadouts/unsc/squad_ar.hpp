/*======================================
    Loadout for Squad Autorifleman (unsc)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_M73";
        ammo = "OPTRE_200Rnd_95x40_Box_Tracer";
    };
    
    class Uniform : Uniform
    {
        classname[] = { "OPTRE_UNSC_Army_Uniform_OLI", "OPTRE_UNSC_Army_Uniform_SNO" };
        ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = {"OPTRE_UNSC_M52A_Armor_MG_WDL", "OPTRE_UNSC_M52A_Armor_MG_SNO"};
        // Inherited item overrides
        OPTRE_32Rnd_762x51_Mag_Tracer = 0;
        OPTRE_M2_Smoke = 0;
        OPTRE_M9_Frag = 1;
        // List of items
        OPTRE_200Rnd_95x40_Box_Tracer = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
        OPTRE_200Rnd_95x40_Box_Tracer = 3;
        OPTRE_M2_Smoke = 1;
    };
};