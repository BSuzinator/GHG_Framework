/*======================================
	Loadout for MMG Gunner (aaf_a3)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "MMG_02_black_F";
        ammo = "130Rnd_338_Mag";
        bipod = "bipod_03_F_blk";
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_556x45_Stanag = 0;
		130Rnd_338_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_oli";
        // List of items
        130Rnd_338_Mag = 3;
    };
};