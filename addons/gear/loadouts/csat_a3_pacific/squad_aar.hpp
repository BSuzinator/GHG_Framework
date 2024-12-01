/*======================================
	Loadout for Squad Assistant Autorifleman (csat_a3_pacific)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        100Rnd_580x42_Mag_F = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};