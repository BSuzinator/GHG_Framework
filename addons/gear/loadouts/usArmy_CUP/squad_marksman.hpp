/*======================================
	Loadout for Squad Marksman (usArmy)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_M14_DMR";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_20Rnd_762x51_DMR";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
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
    
    headgear[] = { "CUP_H_HIL_HelmetACH_TTS", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_OCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP", "CUP_H_USArmy_HelmetACH_GCOVERED_Headset_UCP" };
    facewear = "CUP_G_ESS_BLK";
};