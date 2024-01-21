/*======================================
	Loadout for Squad Leads (russian)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak74m_gp25";
        grenade = "rhs_VOG25";

        class Scopes : Scopes
        {
            acog = "CUP_optic_ACOG_TA01B_RMR_Black";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "rhs_6b23_6sh92_headset_mapcase", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b23_ML_6sh92_headset_mapcase" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
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
	
    headgear[] = {"rhs_6b27m_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_ML_ess_bala"};
};