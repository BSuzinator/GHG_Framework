/*======================================
	Loadout for Squad Assistant Autorifleman (usMC_EF)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "EF_B_Kitbag_coy";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        EF_100Rnd_65x39_caseless_coy_mag = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};