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
		classname[] = {"rhs_6b23_6sh92_headset_mapcase","CUP_V_CZ_NPP2006_vz95","CUP_V_CZ_NPP2006_co_black"};
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	headgear[] = {"rhs_6b27m_ess_bala","CUP_H_RUS_Balaclava_Ratnik_Headphones_v2","CUP_H_RUS_Balaclava_Ratnik_Headphones"};
};