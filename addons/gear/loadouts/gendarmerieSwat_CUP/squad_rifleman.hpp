/*======================================
	Loadout for Rifleman (gendamarieSwat)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_Famas_F1_Rail";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_25Rnd_556x45_Famas";
		bipod = "";
		muzzle = "CUP_muzzle_snds_FAMAS";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt = "CUP_optic_Eotech553_Black";
        };
    };
    
    class Uniform : Uniform
    {
        classname =  "U_B_GEN_Commander_F" ;
		ACRE_PRC343 = 1;
		ACE_CableTie = 2;
    };
    
    class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
        // List of items
        CUP_25Rnd_556x45_Famas = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
	class Backpack : Backpack
	{
		classname = "B_AssaultPack_blk";
		ACE_Canteen = 1;
		GHG_spikeStripItem = 1;
	};
	
    headgear = "CUP_H_RUS_6B47_SF_headset_black";
    facewear = "CUP_G_ESS_BLK";
};