/*======================================
	Loadout for MTR Ammo Bearer (baf)
======================================*/
class mtr_ammo : squad_rifleman
{
    
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_csw_carryMortarBaseplate";
    };
	
	class Vest : Vest
    {
        // List of items
		UK3CB_BAF_556_30Rnd = 6;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "UK3CB_BAF_B_Carryall_MTP", "UK3CB_BAF_B_Carryall_Arctic", "UK3CB_BAF_B_Carryall_DPMW", "UK3CB_BAF_B_Carryall_DPMT", "UK3CB_BAF_B_Carryall_DDPM" };
        // List of items
		ACE_1Rnd_82mm_Mo_HE = 3;
		ACE_1Rnd_82mm_Mo_Smoke = 1;
		ACE_1Rnd_82mm_Mo_Illum = 1;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};