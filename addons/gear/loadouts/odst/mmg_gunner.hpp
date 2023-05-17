/*======================================
	Loadout for MMG Gunner (odst)
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
	
	class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52D_Armor_Scout";
        // List of items
		OPTRE_32Rnd_762x51_Mag_Tracer = 0;
		OPTRE_100Rnd_762x51_Box_Tracer = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
        // List of items
        OPTRE_100Rnd_762x51_Box_Tracer = 2;
    };
};