/*======================================
	Loadout for Officer / Platoon Lead (Russian)
======================================*/
class officer_f : soldier_f
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhs_acc_perst1ik";
        };
    };
    
    class Vest : Vest
    {
		classname[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b23_ML_6sh92_headset_mapcase"};
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear[] = {"rhs_6b27m_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_ML_ess_bala"};
};