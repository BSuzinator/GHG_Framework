/*======================================
	Loadout for Rifleman (bokoHaram)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_akm";
        laser = "";
        ammo = "rhs_30Rnd_762x39mm";
        
    };
    
    class Uniform : Uniform
    {
        classname[] = { "LOP_U_ISTS_Fatigue_05" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "UK3CB_TKA_I_V_vydra_3m_Tan" };
        // List of items
        rhs_30Rnd_762x39mm = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "H_Bandanna_sand" };
    facewear = "rhsusf_shemagh2_gogg_tan";
};