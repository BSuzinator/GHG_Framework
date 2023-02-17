/*======================================
	Loadout for Rifleman (gendamarieSwat)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_FAMAS_F1";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "UK3CB_FAMAS_25rnd_556x45";
		bipod = "";
		muzzle = "rhsusf_acc_rotex5_grey";
        
        class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt = "rhsusf_acc_eotech_552";
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
        UK3CB_FAMAS_25rnd_556x45 = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
	class Backpack : Backpack
	{
		classname = "B_AssaultPack_blk";
		ACE_Canteen = 1;
		GHG_spikeStripItem = 1;
	};
	
    headgear = "UK3CB_ANP_B_H_6b27m_BLK";
    facewear = "rhsusf_oakley_goggles_clr";
};