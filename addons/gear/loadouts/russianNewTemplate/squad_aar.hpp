/*======================================
	Loadout for Squad Assistant Autorifleman (russian)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "rhs_assault_umbts";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_100Rnd_545X39_7N6_RPK = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};