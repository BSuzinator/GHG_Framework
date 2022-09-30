/*======================================
	Loadout for Squad Marksman (pmc)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_SLR_V_lxWS";
        laser = "";
        ammo = "20Rnd_762x51_slr_lxWS";
		bipod = "";
		
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        20Rnd_762x51_slr_lxWS = 5;
    };
    
	headgear = "vn_b_boonie_05_03";
	facewear = "G_Headset_lxWS";
};