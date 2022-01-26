/*======================================
	Loadout for Team Leads (spetznaz)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_ak103_gp25";
        grenade = "rhs_VOG25";

        class Scopes : Scopes
        {
            acog = "rhs_acc_1p29";
        };
    };
    
    class Vest : Vest
    {
        classname[] = { "LOP_V_6B23_Rifleman_TAN", "rhsgref_6b23_ttsko_mountain_rifleman", "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK", "V_RebreatherB" };
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
	
    class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_cbr", "B_AssaultPack_tna_F", "UK3CB_AAF_B_B_ASS_DIGI_BLK", "B_AssaultPack_blk" };
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

};