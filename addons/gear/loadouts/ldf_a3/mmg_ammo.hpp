/*======================================
	Loadout for MMG Ammo Bearer (ldf_a3)
======================================*/
class mmg_ammo : squad_rifleman
{
    
    
    class Backpack : Backpack
    {
        classname = "B_FieldPack_green_F";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        130Rnd_338_Mag = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};