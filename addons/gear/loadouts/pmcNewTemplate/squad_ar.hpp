/*======================================
	Loadout for Squad Autorifleman (pmc)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m249_pip_s_para";
        ammo = "rhsusf_200Rnd_556x45_soft_pouch";
        bipod = "rhsusf_acc_harris_bipod";
    };
    
	class Uniform : Uniform
    {
        classname = "lop_u_pmc_fatigue_04";
    };
	
    class Vest : Vest
    {
		classname = "rhsusf_plateframe_machinegunner";
        // Inherited item overrides
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        SmokeShell = 1;
        rhs_mag_m67 = 1;
        // List of items
        rhsusf_200Rnd_556x45_soft_pouch = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_Assaultpack_cbr";
        // List of items
        rhsusf_200Rnd_556x45_soft_pouch = 1;
    };
	headgear = "vn_b_bandana_03";
	facewear = "G_Headset_lxWS";
};