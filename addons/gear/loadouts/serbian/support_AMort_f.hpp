/*======================================
	Loadout for Assistant MTR (serbian)
======================================*/
class support_AMort_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "ace_csw_carryMortarBaseplate";
    };
	
	class Vest : Vest
    {
        // List of items
		rhssaf_30rnd_556x45_EPR_G36 = 6;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhssaf_alice_md2camo" };
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