/*======================================
	Loadout for Recon Gunner (gendamarieSwat)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L115A3_BL";
		muzzle = "uk3cb_baf_silencer_l115a3";
		bipod = "uk3cb_underbarrel_acc_bipod";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "UK3CB_BAF_338_5Rnd";
        
        class Scopes : Scopes
        {
            sniper_optic = "rhsusf_acc_LEUPOLDMK4_2";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "rhsusf_weap_m9";
        ammo = "rhsusf_mag_15Rnd_9x19_FMJ";
		class Scopes {}; 
	};
	
    class Uniform : Uniform
    {
        classname =  "U_B_GEN_Commander_F" ;
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
        // List of items
        UK3CB_BAF_338_5Rnd = 4;
		rhsusf_mag_15Rnd_9x19_FMJ = 2;
        SmokeShell = 2;
		ACE_RangeCard = 1;
    };
    
    headgear = "UK3CB_ANP_B_H_6b27m_BLK";
    facewear = "rhsusf_oakley_goggles_clr";
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";

        class Scopes {};
    };
};