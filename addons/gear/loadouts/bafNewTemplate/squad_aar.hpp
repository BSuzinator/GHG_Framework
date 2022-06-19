/*======================================
	Loadout for Squad Assistant Autorifleman (baf)
======================================*/
class squad_aar : squad_rifle
{
    
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMT_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A" };
        // List of items
		ACE_Canteen = 2;
        ACE_SpareBarrel = 1;
        UK3CB_BAF_556_100Rnd = 6;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};