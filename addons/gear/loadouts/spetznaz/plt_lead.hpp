/*======================================
	Loadout for PLT Lead (russian)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "CUP_optic_PechenegScope";
        };
    };
    
    class Vest : Vest
    {
		classname[] = { "CUP_V_RUS_6B3_2", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b23_ML_6sh92_headset_mapcase" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = {"CUP_H_RUS_6B27_headset_goggles_bala","rhs_6b28_ess_bala","rhs_6b27m_ML_ess_bala"};
};