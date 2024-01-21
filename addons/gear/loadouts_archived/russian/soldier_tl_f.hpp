/*======================================
	Loadout for Team Leads (Russian)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak74m_gp25";
        grenade = "rhs_VOG25";

        class Scopes : Scopes
        {
            acog = "rhs_acc_perst1ik";
        };
    };
    
    class Vest : Vest
    {
		classname[] = {"rhs_6b23_6sh92_headset_mapcase","CUP_V_CZ_NPP2006_vz95","CUP_V_CZ_NPP2006_co_black"};
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_sidor";
        // List of items
        rhs_VOG25 = 10;
        rhs_VG400P_white = 5;
        rhs_VG400P_green = 2;
        rhs_VG400P_red = 2;
        rhs_GRD40_Red = 2;
        rhs_GRD40_Green = 2;
        rhs_GRD40 = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = {"rhs_6b27m_ess_bala","CUP_H_RUS_Balaclava_Ratnik_Headphones_v2","CUP_H_RUS_Balaclava_Ratnik_Headphones"};
};