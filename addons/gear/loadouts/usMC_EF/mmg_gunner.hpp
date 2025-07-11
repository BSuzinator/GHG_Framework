/*======================================
	Loadout for MMG Gunner (usMC_EF)
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
        classname = "EF_V_AAV_Support_Coy";
        // List of items
		EF_30Rnd_65x39_caseless_coy_mag = 0;
		130Rnd_338_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname =  "EF_B_Kitbag_coy";
        // List of items
        130Rnd_338_Mag = 3;
    };
};