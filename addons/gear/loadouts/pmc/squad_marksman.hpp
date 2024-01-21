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
            magnified = "CUP_optic_RCO";
        };
    };
    
	class Uniform : Uniform
	{
		classname = "U_lxWS_ION_Casual1";
	};
	
    class Vest : Vest
    {
        // List of items
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        20Rnd_762x51_slr_lxWS = 5;
    };
    
	facewear = "rhsusf_shemagh2_gogg_od";
	headgear = "H_Watchcap_blk";
};