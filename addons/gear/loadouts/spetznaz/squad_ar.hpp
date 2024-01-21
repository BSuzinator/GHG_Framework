/*======================================
	Loadout for Squad Autorifleman (russian)
======================================*/
class squad_ar : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_RPK74";
        ammo = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
        bipod = "rhsusf_acc_saw_bipod";
		muzzle = "rhs_acc_tgpa";
    };
    
    class Vest : Vest
    {
        // Inherited item overrides
        CUP_30Rnd_545x39_AK_M = 0;
        vn_rdg2_mag = 1;
        CUP_HandGrenade_RGO = 1;
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 3;
    };
    
    class Backpack : Backpack
    {
        classname = "rhs_tortila_khaki", "rhs_tortila_olive", "rhs_tortila_black", "rhs_tortila_black";
        // List of items
        CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M = 2;
    };
};