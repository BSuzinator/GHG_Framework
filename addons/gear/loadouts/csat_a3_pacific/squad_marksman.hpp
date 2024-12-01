/*======================================
	Loadout for Squad Marksman (csat_a3_pacific)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_07_ghex_F";
        ammo = "20Rnd_650x39_Cased_Mag_F";
		bipod = "rhsusf_acc_harris_bipod";
        
        class Scopes : Scopes
        {
			magnified = "optic_DMS_ghex_F";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_580x42_Mag_F = 0;
        20Rnd_650x39_Cased_Mag_F = 5;
    };
    
    headgear = "H_HelmetO_ghex_F";
    facewear = "G_Combat_Goggles_tna_F";
};