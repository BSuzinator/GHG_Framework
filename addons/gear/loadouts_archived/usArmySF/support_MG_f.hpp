/*======================================
	Loadout for MMG Gunner (usArmySF)
======================================*/
class support_MG_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240b_elcan";
		muzzle = "muzzle_snds_h_mg_blk_f";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_mbav_mg";
        // List of items
		rhs_mag_30Rnd_556x45_Mk318_Stanag = 0;
		rhsusf_100Rnd_762x51 = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        rhsusf_100Rnd_762x51 = 3;
    };
};