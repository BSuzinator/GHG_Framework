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
		classname[] = { "CUP_V_CZ_NPP2006_des", "CUP_V_CZ_NPP2006_vz95", "CUP_V_CZ_NPP2006_co_black" };
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = {"CUP_H_RUS_6B27_headset_goggles_bala","CUP_H_RUS_Balaclava_Ratnik_Headphones_v2","CUP_H_RUS_Balaclava_Ratnik_Headphones"};
};