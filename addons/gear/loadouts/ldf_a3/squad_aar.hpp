/*======================================
	Loadout for Squad Assistant Autorifleman (ldf_a3)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "B_AssaultPack_eaf_F";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        200Rnd_65x39_cased_Box_Red = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};