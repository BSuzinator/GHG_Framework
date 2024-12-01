/*======================================
	Loadout for Rifleman (csat_a3_pacific)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_CTAR_ghex_F";
        laser = "ACE_acc_pointer_green";
        ammo = "30Rnd_580x42_Mag_F";
        
        class Scopes : Scopes
        {
            red_dot = "optic_ACO_grn";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "optic_Arco_ghex_F";
        };
    };
    
    class Uniform : Uniform
    {
        classname = "U_O_T_Soldier_F";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_HarnessO_ghex_F";
        // List of items
        30Rnd_580x42_Mag_F = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "H_HelmetO_ghex_F";
    facewear = "G_Combat_Goggles_tna_F";
};