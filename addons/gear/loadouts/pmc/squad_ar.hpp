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

        classname = "CUP_lmg_m249_para";
        ammo = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";

    };
    
	class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_39";
    };
	
    class Vest : Vest
    {
		classname = "CUP_V_B_IOTV_OEFCP_MG_USArmy";
        // Inherited item overrides
        CUP_20Rnd_762x51_B_SCAR = 0;
        SmokeShell = 1;
        CUP_HandGrenade_M67 = 1;
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "B_Assaultpack_cbr";
        // List of items
        CUP_200Rnd_TE4_Red_Tracer_556x45_M249 = 1;
    };
	headgear = "vn_b_bandana_03";
	facewear = "G_Headset_lxWS";
};