/*======================================
	Loadout for Officer / Platoon Lead (serbian)
======================================*/
class officer_f : soldier_f
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
		classname[] = { "rhssaf_vest_md99_woodland_rifleman_radio" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "rhssaf_helmet_m97_oakleaf" };
};