/*======================================
	Loadout for Squad Marksman (usArmySF)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_M14_DMR";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_20Rnd_762x51_DMR";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
		muzzle[] = {"rhsusf_acc_aac_m14dcqd_silencer","rhsusf_acc_aac_m14dcqd_silencer_wd","rhsusf_acc_aac_m14dcqd_silencer_d"};
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_ACOG_TA01B_Black";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_30Rnd_556x45_Stanag = 0;
        CUP_20Rnd_762x51_DMR = 5;
    };
    
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81", "CUP_H_OpsCore_Black", "CUP_H_USArmy_MICH_GCOVERED_Headset_M81" };
    facewear[] = { "CUP_G_ESS_RGR", "CUP_G_ESS_RGR", "CUP_G_ESS_KHK_Scarf_Tan" };
};