/*======================================
	Loadout for Squad Assistant Autorifleman (csat_a3)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_ocamo", "B_AssaultPack_blk" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        150Rnd_762x54_Box = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};