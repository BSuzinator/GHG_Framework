/*======================================
	Loadout for Squad Leads (russian)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak103_gp25";
        grenade = "CUP_1Rnd_HE_GP25_M";

        class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
    };
    
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname = "CUP_B_Kombat_Olive";
        // List of items
        CUP_1Rnd_HE_GP25_M = 10;
        CUP_IlumFlareWhite_GP25_M = 5;
        CUP_IlumFlareGreen_GP25_M= 2;
        CUP_IlumFlareRed_GP25_M = 2;
        CUP_1Rnd_SMOKE_GP25_M_Red = 2;
        CUP_1Rnd_SMOKE_GP25_M_Green = 2;
        CUP_1Rnd_SMOKE_GP25_M = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
};