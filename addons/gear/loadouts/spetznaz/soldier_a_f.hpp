/*======================================
	Loadout for MMG Ammo Bearer (spetznaz)
======================================*/
class soldier_a_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        rhs_100Rnd_762x54mmR = 5;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};