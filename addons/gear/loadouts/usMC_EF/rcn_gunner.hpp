/*======================================
	Loadout for Recon Gunner (usMC_EF)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_02_sniper_F";
		muzzle = "muzzle_snds_338_sand";
		bipod = "bipod_01_F_snd";
        laser = "acc_pointer_IR";
        ammo = "10Rnd_338_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "optic_AMS_snd";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "hgun_Pistol_heavy_01_F";
        ammo = "11Rnd_45ACP_Mag";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname[] = { "EF_U_B_MarineComabtUniform_Wdl_2", "EF_U_B_MarineComabtUniform_Des_2" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "EF_V_AAV_Scout_coy";
        // List of items
        10Rnd_338_Mag = 4;
		11Rnd_45ACP_Mag = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear =  "EF_H_HelmetB_light_black_slick";
    facewear =  "G_Combat";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};