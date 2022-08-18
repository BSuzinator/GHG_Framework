/*======================================
	Loadout for Squad Assistant Autorifleman (bafCW)
======================================*/
class squad_aar : squad_rifleman
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A",	"UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        UK3CB_BAF_762_100Rnd_T = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};