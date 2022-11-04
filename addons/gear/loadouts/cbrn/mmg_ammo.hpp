/*======================================
	Loadout for MMG Ammo Bearer (cbrn)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_blk" , "B_FieldPack_oli", "Gendar_Fieldpack"};
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        MMG_02_black_F = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};