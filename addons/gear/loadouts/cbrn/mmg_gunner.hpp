/*======================================
	Loadout for MMG Gunner (cbrn)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "MMG_02_black_F";
        ammo = "130Rnd_338_Mag";
        bipod = "bipod_01_f_blk";
		class Scopes : Scopes
        {
            mg_optic = "optic_mrco";
        };
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_65x39_caseless_black_mag_Tracer = 0;
		130Rnd_338_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_blk" , "B_FieldPack_oli", "Gendar_Fieldpack"};
        // List of items
        130Rnd_338_Mag = 3;
    };
};