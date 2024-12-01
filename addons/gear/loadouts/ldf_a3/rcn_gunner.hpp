/*======================================
	Loadout for Recon Gunner (ldf_a3)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_02_F";
		muzzle = "muzzle_snds_338_black";
		bipod = "bipod_01_F_blk";
        laser = "acc_pointer_IR";
        ammo = "10Rnd_338_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "optic_KHS_blk";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_ACPC2_F";
        ammo = "9Rnd_45ACP_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "U_I_E_Uniform_01_F" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_CarrierRigKBT_01_light_EAF_F" };
        // List of items
        10Rnd_338_Mag = 4;
		9Rnd_45ACP_Mag = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear[] = { "H_HelmetHBK_F" };
    facewear = "G_Lowprofile";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};