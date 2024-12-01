/*======================================
	Loadout for Rifleman (ldf_a3)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_MSBS65_black_F";
        laser = "acc_pointer_IR";
        ammo = "30Rnd_65x39_caseless_msbs_mag";
        
        class Scopes : Scopes
        {
            red_dot = "optic_Aco";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "optic_ico_01_black_f";
        };
    };
    
    class Uniform : Uniform
    {
        classname = "U_I_E_Uniform_01_F";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_CarrierRigKBT_01_light_EAF_F";
        // List of items
        30Rnd_65x39_caseless_msbs_mag = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "H_HelmetHBK_F";
    facewear = "G_Lowprofile";
};