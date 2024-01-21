/*======================================
	Loadout for Rifleman (bokoHaram)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM";
        laser = "";
        ammo = "CUP_30Rnd_762x39_AK47_bakelite_M";
        
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_BDUv2_roll2_gloves_desert_US" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_Eagle_SPC_Rifleman" };
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "H_Bandanna_sand" };
    facewear = "CUP_G_ESS_KHK_Scarf_Tan";
};