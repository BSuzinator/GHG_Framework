/*======================================
	Loadout for Assistant MAT (serbian)
======================================*/
class soldier_at_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "rhs_rpg7_PG7VR_mag";
		class Scopes { rhs_acc_pgo7v3 = "rhs_acc_pgo7v3"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "rhssaf_kitbag_md2camo" };
        // List of items
        rhs_rpg7_PG7VR_mag = 3;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
};