/*======================================
	Loadout for Rifleman (taliban)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_AKM_Early";
        laser = "";
        ammo = "CUP_30Rnd_762x39_AK47_bakelite_M";
        
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CUP_U_B_CDF_DST_1" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "CUP_V_B_JPC_Tan_Light" };
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M = 8;
        SmokeShell = 2;
        CUP_HandGrenade_M67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "CUP_H_TKI_Lungee_02" };
    facewear = "G_Combat_lxWS";
};