/*======================================
	Loadout for Squad Assistant Autorifleman (aaf_a3)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_dgtl";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        200Rnd_65x39_cased_Box = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};