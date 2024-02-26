/*======================================
	Loadout for Squad Leads (taliban)
======================================*/
class squad_lead : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM_Early_gp25";
        grenade = "CUP_1Rnd_HE_GP25_M";

    };
    
    class Vest : Vest
    {
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_cbr" };
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