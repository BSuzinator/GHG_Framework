/*======================================
	Loadout for Platoon Lead (spetznaz)
======================================*/
class officer_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        class Scopes : Scopes
        {
            acog = "rhs_acc_1p29";
        };
    };
    
    class Vest : Vest
    {
		classname[] = { "LOP_V_6B23_Rifleman_TAN", "rhsgref_6b23_ttsko_mountain_rifleman", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB"};
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};