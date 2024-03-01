/*======================================
	Loadout for Rifleman (russian)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AK74M";
        laser = "CUP_acc_Zenit_2DS";
        ammo = "CUP_30Rnd_545x39_AK_M";
		muzzle = "";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_ekp_8_02";
			varient_red_dot = "CUP_optic_1p63";
			reflex = "CUP_optic_OKP_7";
			magnified = "CUP_optic_PechenegScope";
        };
    };
    
    class Uniform : Uniform
    {
        classname = "CUP_U_O_RUS_Flora_1";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_CDF_6B3_1_DST";
        // List of items
        CUP_30Rnd_545x39_AK_M = 8;
        vn_rdg2_mag = 2;
        CUP_HandGrenade_RGO = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "CUP_H_RUS_6B27_headset_goggles";
    facewear = "CUP_G_ESS_BLK";
};