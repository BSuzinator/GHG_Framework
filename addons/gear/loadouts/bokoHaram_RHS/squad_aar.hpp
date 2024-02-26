/*======================================
	Loadout for Squad Assistant Autorifleman (bokoHaram)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_desert_lxWS" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_75Rnd_762x39mm = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};