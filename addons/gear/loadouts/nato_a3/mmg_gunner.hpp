/*======================================
	Loadout for MMG Gunner (nato_a3)
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
        classname[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_wdl" };
        // List of items
		30Rnd_65x39_caseless_black_mag = 0;
		130Rnd_338_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_mcamo", "B_Kitbag_sgg", "B_Kitbag_rgr" };
        // List of items
        130Rnd_338_Mag = 3;
    };
};