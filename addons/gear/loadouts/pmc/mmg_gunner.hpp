/*======================================
	Loadout for MMG Gunner (pmc)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240B";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "";
		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Uniform : Uniform
    {
        classname = "LOP_U_PMC_Fatigue_02";
    };
	
	class Vest : Vest
    {
		classname = "rhsusf_plateframe_machinegunner";
        // List of items
		rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
		rhsusf_100Rnd_762x51 = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        rhsusf_100Rnd_762x51 = 3;
    };
	headgear = "vn_b_bandana_01";
	facewear = "G_Headset_lxWS";
};