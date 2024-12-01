/*======================================
	Loadout for MMG Ammo Bearer (csat_a3_pacific)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        150Rnd_93x64_Mag = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};