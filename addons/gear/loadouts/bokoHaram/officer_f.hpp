/*======================================
	Loadout for Officer / Platoon Lead (Boko Haram)
======================================*/
class officer_f : soldier_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhs_acc_perst1ik";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear = "lxWS_H_ssh40_green";
};