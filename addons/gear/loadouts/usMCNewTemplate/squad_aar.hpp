/*======================================
	Loadout for Squad Assistant Autorifleman (usMC)
======================================*/
class squad_aar : squad_rifle
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhsusf_100Rnd_556x45_soft_pouch = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};