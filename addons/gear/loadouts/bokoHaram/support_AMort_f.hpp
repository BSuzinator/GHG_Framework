/*======================================
	Loadout for Assistant MTR (Boko Haram)
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
		rhs_30Rnd_545x39_7N6_AK = 6;
		ACE_Kestrel4500 = 1;
		ACE_MapTools = 1;
		ACE_artilleryTable = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_Carryall_oli";
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