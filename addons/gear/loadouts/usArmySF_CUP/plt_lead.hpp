/*======================================
	Loadout for PLT Lead (usArmySF)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
    
    class Vest : Vest
    {
		classname = "CUP_V_B_Interceptor_Grenadier_M81";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81_headset", "CUP_H_OpsCore_Black_headset", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des_headset" };
};