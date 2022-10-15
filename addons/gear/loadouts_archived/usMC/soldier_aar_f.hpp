/*======================================
	Loadout for Assistant Autorifleman (usMC)
======================================*/
class soldier_aar_f : soldier_f
{
    class Vest : Vest
    {
        ACE_MapTools = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        ACE_SpareBarrel = 1;
        rhs_mag_100Rnd_556x45_M855_cmag = 6;
		ACE_Canteen = 2;
    };
};