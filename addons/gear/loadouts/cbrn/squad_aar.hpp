/*======================================
	Loadout for Squad Assistant Autorifleman (cbrn)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_blk" , "B_FieldPack_oli", "Gendar_Fieldpack"};
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        100Rnd_65x39_caseless_black_mag_tracer = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};