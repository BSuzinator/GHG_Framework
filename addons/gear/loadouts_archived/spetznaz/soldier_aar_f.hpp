/*======================================
	Loadout for Assistant Autorifleman (spetznaz)
======================================*/
class soldier_aar_f : soldier_f
{
    class Vest : Vest
    {
        ACE_MapTools = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_TKA_O_B_RIF_Tan", "UK3CB_B_Tactical_Backpack", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B", "UK3CB_B_Small_Pack" };
        // List of items
        ACE_SpareBarrel = 1;
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 8;
		ACE_Canteen = 2;
    };
};