/*======================================
	Loadout for Squad Assistant Autorifleman (Snow Tigers)
======================================*/
class squad_aar : squad_rifleman
{
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "IP_B_FieldPack_SnowTiger";
        // List of items
        ACE_SpareBarrel = 1;
        200Rnd_65x39_cased_Box = 3;
		ACE_Canteen = 2;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};