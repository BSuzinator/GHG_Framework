/*======================================
	Loadout for Rifleman (taliban)
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
        classname[] = { "LOP_U_ISTS_Fatigue_14" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "LOP_V_CarrierLite_TAN" };
        // List of items
        rhs_30Rnd_762x39mm = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "LOP_H_Shemag_BLK" };
    facewear = "G_Combat_lxWS";
};