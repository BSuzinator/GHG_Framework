/*======================================
	Loadout for Squad Assistant Autorifleman (nato_a3)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_mcamo", "B_Kitbag_sgg", "B_Kitbag_rgr" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        100Rnd_65x39_caseless_black_mag = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};