/*======================================
	Loadout for MMG Gunner (ldf_a3)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "MMG_02_black_F";
        ammo = "130Rnd_338_Mag";
        bipod = "bipod_01_F_blk";
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_65x39_caseless_msbs_mag = 0;
		130Rnd_338_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_green_F";
        // List of items
        130Rnd_338_Mag = 3;
    };
};