/*======================================
	Loadout for MMG Gunner (csat_a3_pacific)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "MMG_01_tan_F";
        ammo = "150Rnd_93x64_Mag";
        bipod = "bipod_02_F_hex";
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_580x42_Mag_F = 0;
		150Rnd_93x64_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
        150Rnd_93x64_Mag = 3;
    };
};