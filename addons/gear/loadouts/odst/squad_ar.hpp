/*======================================
	Loadout for Squad Autorifleman (odst)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_M73";
        ammo = "OPTRE_200Rnd_95x40_Box_Tracer";
    };
    
    class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52D_Armor_Scout";
        // Inherited item overrides
        OPTRE_60Rnd_5x23mm_Mag_tracer = 0;
        OPTRE_M2_Smoke = 0;
        OPTRE_M9_Frag = 1;
        // List of items
        OPTRE_200Rnd_95x40_Box_Tracer = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
        // List of items
        OPTRE_200Rnd_95x40_Box_Tracer = 3;
		OPTRE_M2_Smoke = 1;
    };
};