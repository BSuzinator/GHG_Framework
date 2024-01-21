/*======================================
	Loadout for Team Leads (usArmySF)
======================================*/
class soldier_tl_f : soldier_f
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "CUP_arifle_M4A1_SOMMOD_Grip_black_M203_wd", "CUP_arifle_M4A1_SOMMOD_Grip_black_M203", "CUP_arifle_M4A1_SOMMOD_Grip_black_M203_d" };
        grenade = "rhs_mag_M441_HE";

        class Scopes : Scopes
        {
            acog = "CUP_optic_Elcan_SpecterDR_RMR_black";
        };
    };
    
    class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Grenadier_M81";
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
    
    class Backpack : Backpack
    {
        classname[] = { "CUP_B_Kombat_Olive", "CUP_B_Kombat_Olive", "CUP_B_Kombat_Olive" };
        // List of items
        rhs_mag_M441_HE = 10;
        rhs_mag_M585_white = 5;
        rhs_mag_m661_green = 2;
        rhs_mag_m662_red = 2;
        rhs_mag_m713_Red = 2;
        rhs_mag_m715_Green = 2;
        rhs_mag_m714_White = 4;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "CUP_H_USArmy_MICH_GCOVERED_Headset_M81_headset", "CUP_H_OpsCore_Black_headset", "CUP_H_USArmy_ECH_GCOVERED_Headset_MARPAT_des_headset" };
};