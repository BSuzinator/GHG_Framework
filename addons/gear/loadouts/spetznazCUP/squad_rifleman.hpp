/*======================================
	Loadout for Rifleman (Spetsnaz)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AK103";
        laser = "CUP_optic_PechenegScope";
        ammo = "CUP_30Rnd_762x39_AK47_bakelite_M_polymer";
		muzzle = "CUP_muzzle_snds_socom762rc";
        
        class Scopes : Scopes
        {
            red_dot = "CUP_optic_1p63";
			varient_red_dot = "CUP_optic_1p63";
			reflex = "CUP_optic_OKP_7";
			magnified = "CUP_optic_PechenegScope";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_O_RUS_Gorka_Partizan_A_gloves2", "CUP_U_O_RUS_Gorka_Green_gloves2", "CUP_I_B_PMC_Unit_29", "U_B_Wetsuit" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_I_RACS_Carrier_Rig_2", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "CUP_V_OI_TKI_Jacket1_02", "V_RebreatherB" };
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M_polymer = 8;
        vn_rdg2_mag = 2;
        CUP_HandGrenade_RGO = 2;
        ACE_EntrenchingTool = 1;
    };
   
    headgear[] = { "CUP_H_Ger_M92_Tan_GG", "CUP_H_CZ_Helmet04", "lxWS_H_PASGT_goggles_white_F", "CUP_H_Ger_M92_Black_GG_CF" };
    facewear = "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "CUP_G_ESS_BLK", "G_B_Diving";

};