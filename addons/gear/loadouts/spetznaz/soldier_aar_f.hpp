/*======================================
	Loadout for Assistant Autorifleman (spetznaz)
======================================*/
class soldier_aar_f : soldier_f
{
    
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        ACE_SpareBarrel = 1;
        rhs_75Rnd_762x39mm = 8;
		ACE_Canteen = 2;
    };
};