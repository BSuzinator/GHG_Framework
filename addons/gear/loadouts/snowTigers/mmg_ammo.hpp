/*======================================
	Loadout for MMG Ammo Bearer (Snow Tigers)
======================================*/
class mmg_ammo : squad_rifleman
{
    class Uniform : Uniform
    {

    };
    
    class Backpack : Backpack
    {
        classname = "IP_B_FieldPack_SnowTiger";
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