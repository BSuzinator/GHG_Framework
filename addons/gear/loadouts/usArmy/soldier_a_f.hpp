/*======================================
	Loadout for MMG Ammo Bearer (usArmy)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ucp", "rhsusf_assault_eagleaiii_ucp" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhsusf_100Rnd_762x51 = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};