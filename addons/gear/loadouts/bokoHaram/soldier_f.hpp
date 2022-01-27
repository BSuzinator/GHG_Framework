/*======================================
	Loadout for Rifleman (Boko Haram)
======================================*/
class soldier_f : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_aks74n";
        laser = "rhs_acc_2dpzenit";
        ammo = "rhs_30Rnd_545x39_7N6_AK";
        
        class Scopes : Scopes
        {
            red_dot = "rhs_acc_pkas";
			varient_red_dot = "rhs_acc_1p63";
            reflex = "rhs_acc_okp7_dovetail";
            magnified = "rhs_acc_1p78";
        };
    };
    
    class Uniform : Uniform
    {
        classname = "U_lxWS_SFIA_soldier_2_O";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_lxWS_HarnessO_oli";
        // List of items
        rhs_30Rnd_545x39_7N6_AK = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "lxWS_H_turban_01_green";
    facewear = "G_Combat_lxWS";
};