/*======================================
	Loadout for MMG Gunner (csat_a3)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "MMG_01_hex_F";
        ammo = "150Rnd_93x64_Mag";
        bipod = "bipod_02_F_hex";
		class Scopes : Scopes
        {
            mg_optic = "optic_Arco";
        };
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_65x39_caseless_green = 0;
		150Rnd_93x64_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_ocamo", "B_FieldPack_oucamo" };
        // List of items
        150Rnd_93x64_Mag = 3;
    };
};